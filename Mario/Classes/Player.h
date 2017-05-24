#ifndef _PLAYER_H_
#define _PLAYER_H

#include"Entity.h"

class Player :public Entity {
private:
	double ihp;
public:
	Player() {};
	~Player() {};
	virtual bool init();
	void run();
	CREATE_FUNC(Player);
};
#endif // !_PLAYER_H_

