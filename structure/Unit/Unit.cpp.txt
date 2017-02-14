#include "Unit.h"
Unit::Unit(int sX, int sY, char graph = ' ')
{
	m_x = sX;
	m_y = sY;
	m_graph = graph;
}
Unit::~Unit(){

}
int Unit::getX()
{
	return m_x;
}
int Unit::getY()
{
	return m_y;
}
void Unit::setX(int nX)
{
	m_x = nX;
}
void Unit::setY(int nY)
{
	m_y = nY;
}
char Unit::getGraph()
{
	return m_graph;
}

