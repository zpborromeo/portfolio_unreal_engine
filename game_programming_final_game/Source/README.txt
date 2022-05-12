Finally, the following classes should be included.

	Objects loaded from XML
	Object hierarchy
	virtual update()
	virtual draw(View*)//drawing of the sprite adjusted by view!

Update Library class to include a map<string, std::shared_ptr<Texture>> artLibrary; - ADDED

GraphicsDevice - use mine! - ADDED
Texture Class - use mine! - ADDED

InputDevice - CREATED WITH ALL ITEMS
	std::unique_ptr<SDL_Event> event; //tracks current event.
	gameEvent translate(); //gameEven is an enum of all user input events for the game.
	bool getEvent(gameEvent);
	void update(); //polls SDL & calls translate and update event map

View class - CREATED WITH ALL ITEMS
adjusts object’s position for display (does not change the object’s members)
	members: - assigned InputDevice* with name input
		InputDevice*
		Vector2D center; //Vector2D is a struct with a float x; and float y;
		Vector2D position;
	methods
		View(InputDevice*, Vector2D); - assigned InputDevice* with name input
		bool update(); Initially the current gameEvent is requested from the InputDevice. The View then
		responds to keyboard events by shifting its position in accordance with the events. If the view of
		your game does not change, then not much will be done here.

Timer class - just use mine! - ADDED

Engine class - UPDATED WITH NEW ITEMS - Assigned new members simple variable names
		library and device members
		timer member
		view member
		vector of std::unique_ptr<Object>
	Methods:
		void reset(); destroys view, maybe the library & Object vector
		bool loadLevel(string levelConfig, string libraryConfig);
		bool run(); does everything for a single frame
		bool update(); calls update of all objects
		bool draw(); calls draw of all objects