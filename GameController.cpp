#include "GameController.h"
GameController::GameController()
{
  //--Init INPUT-----
  pinMode(BUTTON_A_PORT, INPUT);
  pinMode(BUTTON_B_PORT, INPUT);
  pinMode(BUTTON_UP_PORT, INPUT);
  pinMode(BUTTON_DOWN_PORT, INPUT);
  pinMode(BUTTON_LEFT_PORT, INPUT);
  pinMode(BUTTON_RIGHT_PORT, INPUT);
  digitalWrite(BUTTON_UP_PORT, HIGH);
  digitalWrite(BUTTON_DOWN_PORT, HIGH);
  digitalWrite(BUTTON_A_PORT, HIGH);
  digitalWrite(BUTTON_B_PORT, HIGH);

  //----Init OUTPUT----
  TVOutSingleton *instance = TVOutSingleton::getInstance();
  m_tv = instance->getTVOut();
  
}
GameController::~GameController(){

}
void GameController::printMainMenu()
{
  m_tv.select_font(font6x8);
  m_tv.println("--------MENU-------");
  m_tv.select_font(font4x6);
  m_tv.println("\n");
  m_tv.print(10, 20, "PONG");
  m_tv.print(10, 40, "SPACEINVADERS");
  m_tv.print(0, 70, "USA LOS BOTONES ARRIBA Y ABAJO");
  m_tv.select_font(font6x8);
  m_tv.print(0, 88, "PULSE A PARA JUGAR");
}
void GameController::mainMenu()
{
  int option = 0;
  printMainMenu();
  m_tv.print_char(0, 20, '-'); 
  while(1)
  {
  	if(digitalRead(BUTTON_UP_PORT) == PULL_DOWN)
    {
      m_tv.print_char(0, 40, ' ');
      m_tv.print_char(0, 20, '-');
      option = 0;
    }
    else if(digitalRead(BUTTON_DOWN_PORT) == PULL_DOWN)
    {
      m_tv.print_char(0, 20, ' ');
      m_tv.print_char(0, 40, '-');
      option = 1;
    
    }
    else if(digitalRead(BUTTON_A_PORT) == PULL_DOWN)
    {
      createGame(option);
    }
  }
  
}
void GameController::createGame(int type)
{
	
	switch(type)
	{
		case 0:
    {
			Pong *pong = new Pong();
			pong->run();
			break;
    }
		default:
			break;
	}
}

