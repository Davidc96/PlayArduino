#ifndef PONG_H
#define PONG_H
#include "Game.h"
class Pong : public Game
{
	public:
		Pong();
		~Pong();
		void menu();
		void run();
		void backGround();
		void movePlayer();
		void moveUnit();
		void moveIA();
	private:
		int checkWin();
		int drawScore();
		int m_p1Score;
		int m_p2Score;

};
#endif
