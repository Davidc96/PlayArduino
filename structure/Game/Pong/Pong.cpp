#include "Pong.h"

Pong::Pong()
{
	
	m_tv = TVOutSingleton::getInstance()->getTVOut();
	m_unit[0] = Player(44, 30); //Player1
	m_unit[1] = Ball(44, 55, 'O'); //Ball
	//m_unit[2] = PongIA(44, 55); //IA
	//m_unit[3] = Player(44, 55); //Player2

}
Pong::~Pong()
{

}
void Pong::menu()
{
	
}
void Pong::run()
{
	int endgame = 0;
	while(endgame != 1)
	{

	}
}
void Pong::backGround()
{
  m_tv.draw_rect(10, 10, 100, 80, WHITE);
  m_tv.draw_line(60, 10, 60, 90, WHITE);
  //TV.print_char(58, 45, 'O');
  //Dibujar a los jugadores
  //m_tv.draw_line(m_unit[0].getX(), m_unit[0].getY(), m_unit[0].getX(), m_unit[0].getY()+20, WHITE);
  //m_tv.draw_line(m_unit[2].getX(), m_unit[2].getY(), m_unit[2].getX(), m_unit[2].getY()+20, WHITE);


}
void Pong::movePlayer()
{

}
void Pong::moveUnit()
{

}
void Pong::moveIA()
{
  
}

