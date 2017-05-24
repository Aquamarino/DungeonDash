#ifndef _ENTITY_H_
#define _ENTITY_H

#include<cocos2d.h>
USING_NS_CC;

class Entity :public Node {
private:
	Sprite* m_sprite;
public:
	Entity() {};
	~Entity() {};
	Sprite* getsprite();
	void bindsprite(Sprite* sprite);             //°ó¶¨¾«Áé
};

#endif // !_ENTITY_H_
