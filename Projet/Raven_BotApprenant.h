#pragma once
#include "Raven_Bot.h"
#include <vector>
#include <iosfwd>
#include <map>

#include "game/MovingEntity.h"
#include "misc/utils.h"
#include "Raven_TargetingSystem.h"

#include "Net.h"
#include "ManipulateurFichier.h"


class Raven_PathPlanner;
class Raven_Steering;
class Raven_Game;
class Regulator;
class Raven_Weapon;
struct Telegram;
class Raven_Bot;
class Goal_Think;
class Raven_WeaponSystem;
class Raven_SensoryMemory;
class Net;

class Raven_BotApprenant :
	public Raven_Bot
{
public:
	static ManipulateurFichier READER_FICHIER;
	Raven_BotApprenant(Raven_Game* world, Vector2D v);
	~Raven_BotApprenant();
	void Update();
	Net* GetNet() { return m_neuralNet; }
private:
	//Net neuralNet;
	Net* m_neuralNet;

};

