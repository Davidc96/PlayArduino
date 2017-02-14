#ifndef GAME_H
#define GAME_H
#include "Arduino.h"
#include "../TVOutSingleton.h"
#include "../Unit/Unit.h"
#include "../Unit/Player/Player.h"
#include "../Unit/NPC/NPC.h"
#include "../Unit/NPC/Ball/Ball.h"
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

