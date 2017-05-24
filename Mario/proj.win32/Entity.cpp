#include"Entity.h"
Sprite* Entity::getsprite() {
	return m_sprite;
}
void Entity::bindsprite(Sprite* sprite) {
	m_sprite = sprite;
	this->addChild(m_sprite);
}
