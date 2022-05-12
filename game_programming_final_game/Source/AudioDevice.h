class AudioDevice
{
public:
	AudioDevice(int frequency, Uint16 format, int channels, int chunksize);
	bool initialize(tinyxml2::XMLElement* audioRoot);
	Mix_Chunk* findChunk(std::string name);
	void playChunk(std::string name, int numberOfLoops = 0, int channelID = 4);
	void playMusic(std::string name, int numberOfLoops = 0);
	void stopMusic();
	void destroy();

private:
	std::map<std::string, Mix_Chunk*> audioChunks;
	std::map<std::string, Mix_Music*> audioMusics;
	int numChannels;
	int channelID;
};