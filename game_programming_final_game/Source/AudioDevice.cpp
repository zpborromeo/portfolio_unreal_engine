#include "pch.h"
#include "AudioDevice.h"

AudioDevice::AudioDevice(int frequency, Uint16 format, int channels, int chunksize)
    : numChannels(100), channelID(-1)
{
	if (Mix_OpenAudio(frequency, MIX_DEFAULT_FORMAT, channels, chunksize))
	{
		std::cout << "ERROR::AUDIO INITIALIZE:: " << SDL_GetError();
	}

    Mix_AllocateChannels(numChannels);

    Mix_Volume(4, 30);
    Mix_Volume(5, 60);
}

bool AudioDevice::initialize(tinyxml2::XMLElement* audioRoot)
{

    tinyxml2::XMLElement* sound_1 = audioRoot->FirstChildElement("Sound"); //First object
    tinyxml2::XMLElement* audioSheet;
    while (sound_1) { //loops until no more sounds exist
       //gets audiosheet
        audioSheet = sound_1->FirstChildElement("AudioFile");
        //loads filepath into mixchunk
        if (audioSheet->IntAttribute("type") == 0) {
            audioChunks[sound_1->Attribute("name")] = Mix_LoadWAV(audioSheet->Attribute("path"));
        }
        else
        {
            audioMusics[sound_1->Attribute("name")] = Mix_LoadMUS(audioSheet->Attribute("path"));
        }
        sound_1 = sound_1->NextSiblingElement();
    }
    return true;
}

Mix_Chunk* AudioDevice::findChunk(std::string name)
{
    return audioChunks.find(name)->second;
}

void AudioDevice::playChunk(std::string name, int numberOfLoops, int channelID)
{
    Mix_PlayChannel(channelID, audioChunks.find(name)->second, numberOfLoops);
}

void AudioDevice::playMusic(std::string name, int numberOfLoops)
{
    Mix_PlayMusic(this->audioMusics.find(name)->second, numberOfLoops);
}

void AudioDevice::stopMusic()
{
    Mix_HaltMusic();
}

void AudioDevice::destroy()
{
    std::map<std::string, Mix_Chunk*>::iterator iter = audioChunks.begin();
    
    while(iter!= audioChunks.end())
    {
        Mix_FreeChunk(iter->second); //frees all chunks 
        ++iter;
    }

 
    Mix_CloseAudio();
}
