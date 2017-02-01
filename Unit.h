#ifndef UNIT_H
#define UNIT_H
class Unit
{
	public:
		Unit(int sX, int sY, char graph = ' ');
		~Unit();
		void setX(int nX);
		void setY(int nY);
		int getX();
		int getY();
    char getGraph();
	private:
		int m_x;
		int m_y;
		char m_graph;
};
#endif

