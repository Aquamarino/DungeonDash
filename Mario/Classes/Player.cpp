#include"Player.h"
bool Player::init() {
	return true;
}

void Player::run()
{
	SpriteFrameCache* frameCache = SpriteFrameCache::getInstance();
	frameCache->addSpriteFramesWithFile("boys.plist", "boys.png");
	SpriteFrame *frame = NULL;
	Vector<SpriteFrame*>frameList;
	for (int i = 1; i < 15; i++)
	{
		frame = frameCache->getSpriteFrameByName(StringUtils::format("run%d.png", i));
		frameList.pushBack(frame);
	}
	Animation* animation = Animation::createWithSpriteFrames(frameList);
	animation->setLoops(-1);
	animation->setDelayPerUnit(0.05f);
	auto animate = Animate::create(animation);

	m_sprite->runAction(animate);

}