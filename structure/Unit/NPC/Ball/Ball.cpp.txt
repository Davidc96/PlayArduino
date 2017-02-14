#include "Ball.h"

Ball::Ball(int X, int Y, char graph) : NPC(X, Y, graph)
{
	m_directionX = 1;
	m_directionY = 0; 
}
Ball::~Ball(){}

void Ball::IAmovement()
{
	setX(getX() + 1*m_directionX);
	setY(getY() + 1*m_directionY);
}

