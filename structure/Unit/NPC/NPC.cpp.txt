#include "NPC.h"

NPC::NPC(int X, int Y, char graph) : Unit(X, Y, graph)
{

}
void NPC::setDirectionX(int dirX)
{
	m_directionX = dirX;
}
void NPC::setDirectionY(int dirY)
{
	m_directionY = dirY;
}

