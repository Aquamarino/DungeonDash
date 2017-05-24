#ifndef _MENUSCENE_H_
#define _MENUSECENE_H

#include"cocos2d.h"
using namespace cocos2d;

class MenuScene :public Layer {
	static Scene* CreateScene();
	virtual bool init();
	CREATE_FUNC(MenuScene);
};

#endif // !_MENUSCENE_H_

