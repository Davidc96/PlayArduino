#ifndef GAME_H
#define GAME_H
#include "Arduino.h"
#include "TVOutSingleton.h"
#include "Unit.h"
#include "Player.h"
#include "NPC.h"
#include "Ball.h"
#define MAX_UNIT_SIZE 20
class Game
{
	public:
		Game();
		~Game();
		virtual void menu();
		virtual void run();
		virtual void backGround();
		virtual void movePlayer();
		virtual void moveUnit();
		virtual void moveIA();
	protected:
		Unit m_unit[MAX_UNIT_SIZE];
		TVout m_tv;
//		TVOutSingleton* m_tvSing;

};
#endif

