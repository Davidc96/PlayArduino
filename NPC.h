#ifndef NPC_H
#define NPC_H
#include "Unit.h"
class NPC : public Unit{
	public:
		NPC(int X, int Y, char graph);
		~NPC();
		virtual void IAmovement();
		void setDirectionX(int dirX);
		void setDirectionY(int dirY);
	protected:
		int m_directionX;
		int m_directionY;
};
#endif

