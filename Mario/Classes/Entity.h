#ifndef _Entity_H_
#define _Entity_H_
#include"cocos2d.h"
USING_NS_CC;

class Entity :public Node {                    /*创建实体类*/
public:
	Entity();
	~Entity();
	Sprite* getSprite();
	void bindSprite(Sprite* sprite); //绑定精灵对象
protected:
	Sprite* m_sprite;
};
#endif
