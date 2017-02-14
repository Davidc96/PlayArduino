#include "Pong.h"

Pong::Pong() : Game()
{
	
	m_tv = TVOutSingleton::getInstance()->getTVOut();
  m_tv.select_font(font6x8);
	m_unit[0] = Player(20, 40); //Player1
	m_unit[1] = Ball(58, 45, 'O'); //Ball
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
	m_tv.clear_screen();
	while(endgame == 0)
	{
		backGround();
	}
}
void Pong::backGround()
{
  m_tv.draw_rect(10, 10, 100, 80, WHITE);
  m_tv.draw_line(60, 10, 60, 90, WHITE);
  //TV.print_char(58, 45, 'O');
  //Dibujar a los jugadores
  m_tv.draw_line(m_unit[0].getX(), m_unit[0].getY(), m_unit[0].getX(), m_unit[0].getY()+20, WHITE);
  //m_tv.draw_line(m_unit[2].getX(), m_unit[2].getY(), m_unit[2].getX(), m_unit[2].getY()+20, WHITE);
  m_tv.print_char(m_unit[1].getX(), m_unit[1].getY(), m_unit[1].getGraph());

}
void Pong::movePlayer()
{

}
void Pong::moveUnit()
{
	m_tv.print_char(m_unit[1].getX(), m_unit[1].getY(), ' ');
	if()
	//CVE-2017-HAXX
}
void Pong::moveIA()
{
  
}

