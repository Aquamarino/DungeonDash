#ifndef _SecondScene_H_
#define __SecondScene_H_

#include"cocos2d.h"
using namespace cocos2d;

class SecondScene :public Layer {
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	CREATE_FUNC(SecondScene);
};
#endif
