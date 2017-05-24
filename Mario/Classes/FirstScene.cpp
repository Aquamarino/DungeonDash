#include"FirstScene.h"
Scene* FirstScene::CreateScene() {
	auto scene = Scene::create();
	auto layer = FirstScene::create();
	scene->addChild(layer);
	return scene;
}

bool FirstScene::init() {
	if (!Layer::init())
		return false;
	auto size = Director::getInstance()->getVisibleSize();

	//´´½¨Ö÷½Ç
	auto player = Player::create();
	player->bindSprite(Sprite::create("player.png"));
	
	player->setPosition(Point(size.width / 2, size.height / 2));

	player->run();
	this->addChild(player,0);

	return true;
};