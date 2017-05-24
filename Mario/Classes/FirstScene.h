#ifndef _FIRST_SCENE_H_
#define _FIRST_SCENE_H_

#include"cocos2d.h"
#include"Player.h"
using namespace cocos2d;

class FirstScene :public Layer {
public:
	static Scene* CreateScene();
	virtual bool init();
	CREATE_FUNC(FirstScene);
};

#endif // !_FIRST_SCENE_H_
