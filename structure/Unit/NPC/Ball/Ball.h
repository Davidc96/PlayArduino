#include "../NPC.h"

class Ball : public NPC{
     public:
     	Ball(int X, int Y, char graph);
     	~Ball();
     	void IAmovement();
     	
};

