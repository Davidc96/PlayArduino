#ifndef GAME_H
#define GAME_H
#include "Arduino.h"
#include "TVOutSingleton.h"
#include "Unit.h"
#include "Player.h"
#include "NPC.h"
#include "Ball.h"
#define MAX_UNIT_SIZE          20
//------------Input Pin------
#define BUTTON_A_PORT          13
#define BUTTON_B_PORT          12
#define BUTTON_UP_PORT          4
#define BUTTON_DOWN_PORT        5
#define BUTTON_LEFT_PORT        6
#define BUTTON_RIGHT_PORT       7
//---------Input State------
#define PULL_DOWN               0
#define PULL_UP                 1 
class Game
{
	public:
		Game(){};
		~Game();
		virtual void menu() = 0;
		virtual void run() = 0;
		virtual void backGround() = 0;
		virtual void movePlayer() = 0;
		virtual void moveUnit() = 0;
		virtual void moveIA() = 0;
	protected:
		Unit m_unit[MAX_UNIT_SIZE];
		TVout m_tv;
//		TVOutSingleton* m_tvSing;

};

#endif

