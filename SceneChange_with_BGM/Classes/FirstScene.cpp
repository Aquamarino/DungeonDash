#include"FirstScene.h"
#include"SecondScene.h"

Scene* FirstScene::createScene() {

	auto scene = Scene::create();

	auto layer = FirstScene::create();

	scene->addChild(layer);
	return scene;
}
bool FirstScene::init() {
	//create sprite
	auto sprite = Sprite::create("HelloWorld.png");
	sprite->setPosition(ccp(300, 300));
	this->addChild(sprite);

	//creat menuitem
	auto closeItem = MenuItemImage::create(
		"CloseNormal.png",
		"xiaoruo.png",
		CC_CALLBACK_1(FirstScene::menuCloseCallback, this));

	closeItem->setPosition(ccp(100,100));

	// create menu, it's an autorelease object
	auto menu = Menu::create(closeItem, NULL);
	menu->setPosition(Vec2::ZERO);
	this->addChild(menu, 1);

	
	return true;
}
void FirstScene::menuCloseCallback(cocos2d::Ref* pSender) {
	Director::getInstance()->replaceScene(TransitionSlideInT::create(3.0f,SecondScene::createScene()));
}


