#include"MenuScene.h"
Scene* MenuScene::CreateScene() {
	auto scene = Scene::create();
	auto layer = Layer::create();
	scene->addChild(layer);
	return scene;
}

bool MenuScene::init() {
	if (!Layer::init())
		return false;

	auto menu = Menu::create();
	return true;
};

