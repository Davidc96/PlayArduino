#include "GameController.h"
GameController::GameController()
{
	TVOutSingleton *instance = TVOutSingleton::getInstance();
	m_tv = instance->getTVOut();
}
GameController::~GameController(){

}
void GameController::mainMenu()
{
  while(1)
  {
  	
  }
}
void GameController::createGame(int type)
{
	Game * game = NULL;
	switch(type)
	{
		case 1:
			game = new Pong();
			game->run();
			break;
		default:
			break;
	}
}

