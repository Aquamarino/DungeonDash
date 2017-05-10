#ifndef _MYHELLOWORLD_H_
#define __MYHELLOWORLD_H_

#include"cocos2d.h"
using namespace cocos2d;

class FirstScene :public Layer {
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	void menuCloseCallback(cocos2d::Ref* pSender);

	CREATE_FUNC(FirstScene);
};
#endif