#include "Game.h"
#include "Pong.h"
class GameController
{
	public:
		GameController();
		~GameController();
		void mainMenu();
	private:
		void createGame(int type);
		TVout m_tv;
    void printMainMenu();
    	


};

