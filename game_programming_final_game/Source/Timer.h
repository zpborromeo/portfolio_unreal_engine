#ifndef TIMER_H
#define TIMER_H

class Timer
{
public:
	//Initializes variables
	Timer();
	bool Initialize(Uint32);

	//The various clock actions
	void start();
	void stop();
	void reset();
	void resetTicks();
	void pause();
	void unpause();

	//Gets the timer's time
	Uint32 getTicks();

	//Checks the status of the timer 
	bool isStarted();
	bool isPaused();

	//Regulate
	void fpsRegulate();

private:
	//The clock time when the timer started
	Uint32 startTicks;
	float mpf; //millisecond per frame

	//The ticks stored when the timer was paused
	Uint32 pausedTicks;

	//The timer status
	bool paused;
	bool started;
};


#endif