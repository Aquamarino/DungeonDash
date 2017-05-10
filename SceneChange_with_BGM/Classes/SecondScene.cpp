#include"SecondScene.h"
#include"SimpleAudioEngine.h"
Scene* SecondScene::createScene() {

	auto scene = Scene::create();

	auto layer = SecondScene::create();

	scene->addChild(layer);
	return scene;
}
bool SecondScene::init() {
	/*auto sprite = Sprite::create("CloseNormal.png");
	sprite->setPosition(ccp(300, 300));
	this->addChild(sprite);*/
	if (!Layer::init()) {
		return false;
	}
	auto label = Label::create("Skt of the city", "Aurial", 40);
	label->setPosition(ccp(300, 200));
	this->addChild(label);
	CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("sky_city.mp3");

	
	return true;
}