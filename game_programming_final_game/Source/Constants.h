#pragma once
//Basic Types
typedef unsigned int	Uint32;
typedef Uint32			GAME_INT;

struct Vector2D {
	
	//Constructors
	inline Vector2D() 
	{ 
		x = 0.f;
		y = 0.f;
		angle = 0.f;
		name = " ";
	}
	inline Vector2D(float x, float y) { this->x = x; this->y = y; }
	inline Vector2D(float x, float y, float angle) { this->x = x; this->y = y; this->angle = angle; }
	inline Vector2D(float x, float y, std::string name) { this->x = x; this->y = y; this->name = name; }
	inline Vector2D(float x, float y, float angle, std::string name) { this->x = x; this->y = y; this->angle = angle; this->name = name; }

	//Variables
	float x = 0;
	float y = 0;
	float angle = 0;
	std::string name = "NoName";
};

enum GAME_OBJECT_SHAPE { GAME_RECTANGLE, GAME_CIRCLE };
enum GAME_BODY_TYPE { GAME_STATIC, GAME_KINEMATIC, GAME_DYNAMIC };

// 0000000000000001 in binary
static short CATEGORY_PLAYER = 1;

// 0000000000000010 in binary
static short CATEGORY_WEAPON = 2;

// 0000000000000100 in binary
static short CATEGORY_ENEMY = 4;

// 0000000000001000 in binary
static short CATEGORY_WALL = 8;

static short CATEGORY_NPC = 16;

static short CATEGORY_GOAL = 32; 

static short CATEGORY_BOSS = 64;

static short MASK_PLAYER = CATEGORY_WALL | CATEGORY_ENEMY | CATEGORY_GOAL | CATEGORY_BOSS;
static short MASK_WEAPON = CATEGORY_ENEMY | CATEGORY_BOSS;
static short MASK_ENEMY = CATEGORY_PLAYER | CATEGORY_WALL | CATEGORY_WEAPON | CATEGORY_ENEMY | CATEGORY_GOAL | CATEGORY_BOSS;
static short MASK_WALL = CATEGORY_PLAYER | CATEGORY_WALL | CATEGORY_ENEMY | CATEGORY_NPC | CATEGORY_BOSS;
static short MASK_NPC = CATEGORY_WALL | CATEGORY_ENEMY | CATEGORY_NPC | CATEGORY_BOSS;
static short MASK_GOAL = CATEGORY_PLAYER | CATEGORY_ENEMY | CATEGORY_BOSS;
static short MASK_BOSS = CATEGORY_PLAYER | CATEGORY_WALL | CATEGORY_WEAPON | CATEGORY_ENEMY | CATEGORY_GOAL;




typedef struct GAME_PHYSICS
{
	float spinSpeed;
	GAME_BODY_TYPE bodyType;
	GAME_OBJECT_SHAPE objectShape;
	float density;
	float friction;
	float restitution;
	float angularDamping;
	float linearDamping;
	float force;
	float angle;
	bool bullet;
	bool physicsOn;
	bool fixedRotation;
	Vector2D position;


	float offsetX = 0;
	float offsetY = 0;
	int hitBoxX;
	int hitBoxY;
	short category = CATEGORY_PLAYER;
	short mask = CATEGORY_PLAYER;
}GAME_PHYSICS;

//Constants
const float PI = 3.14159f;
const float fPRV = 10.0f;

//Sprite ID Update Constants
const int ANIM_LAG = 5;
const int ANIM_SIZE = 3;
const int ANIMATION[] = { 27, 51, 75 };

//Sprite Sheet Constants
const int NUM_SPRITES = 96;
const int SPRITE_HEIGHT = 60;
const int SPRITE_WIDTH = 47;
const int SPRITE_SHEET_NCOLS = 24;
const int SPRITE_SHEET_NROWS = 4;

inline float PW2RW(float x) { return x * fPRV; };

inline float RW2PW(float x) { return x / fPRV; };

inline float RW2PW(int x) { return (float)x / fPRV; };

inline float RW2PWAngle(float x) { return((float)x * (2.0f * 3.14159f) / 360.0f); }; //degrees to radians

inline float PW2RWAngle(float x) { return((float)x * 360.0f / (2.0f * 3.14159f)); }; //radians to degrees