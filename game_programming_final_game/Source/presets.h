#pragma once
#include "pch.h"
#include "Object.h"
#include "Constants.h"
//presets for components

struct SpritePresets {
	bool created = false;
	 int ANIM_LAG;
	 int ANIM_SIZE;
	 int NUM_SPRITES;
	 int SPRITE_HEIGHT;
	 int SPRITE_WIDTH;
	 int SPRITE_SHEET_NCOLS;
	 int SPRITE_SHEET_NROWS;
	std::shared_ptr<Texture> spriteTexture{ nullptr };
};

struct PhysicsPresets {
	bool created = false;
	GAME_PHYSICS bodyPhysics;
	std::shared_ptr<PhysicsDevice> phyDev{ nullptr };
};

struct BodyPresets {
	bool created = false;
	float x;
	float y;
	float angle;
	std::string name;
};

struct InputPresets {
	bool created = false;
};

struct BossPresets {
	bool created = false;
};

struct SpawnerPresets {
	bool created = false;
	int numEnemies;
	float spawnTime;
};

struct EnemyMovementPresets 
{
	bool created = false;
	float maxVelocity;
};

struct NPCPresets
{
	bool created = false;
	std::map<std::string, bool> behaviorPresets;
};

struct AttributePresets
{
	bool created = false;
	int level;
	int levelMax;
};
struct CombatPresets
{
	bool created = false;
};

struct EnemyGuiPresets
{
	bool created = false;
};


struct ObjectFactoryPresets {
	std::shared_ptr<SpritePresets> spriteInitializers = std::make_shared <SpritePresets>();
	std::shared_ptr <BodyPresets> bodyInitializers = std::make_shared <BodyPresets>();
	std::shared_ptr <InputPresets> inputInitializers = std::make_shared <InputPresets>();
	std::shared_ptr <SpawnerPresets> spawnerInitializers = std::make_shared <SpawnerPresets>();
	std::shared_ptr <EnemyMovementPresets> enemyMovementInitializer = std::make_shared <EnemyMovementPresets>();
	std::shared_ptr <PhysicsPresets> physicsInitializer = std::make_shared <PhysicsPresets>();
	std::shared_ptr <NPCPresets> NPCInitializer = std::make_shared <NPCPresets>();
	std::shared_ptr <AttributePresets> AttributeInitializer = std::make_shared <AttributePresets>();
	std::shared_ptr <BossPresets> BossInitializer = std::make_shared <BossPresets>();
	std::shared_ptr <CombatPresets> CombatInitializer = std::make_shared <CombatPresets>();
	std::shared_ptr <EnemyGuiPresets> EnemyGuiInitializer = std::make_shared <EnemyGuiPresets>();
};
