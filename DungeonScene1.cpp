#include"StdAfx.h"
#include"DungeonScene1.h"

CCScene* DungeonScene1::Scene1()
{
	CCScene *scene = CCScene::create();
	DungeonScene1 *layer = DungeonScene1::create();
	scene->addChild(layer);
	return scene;
}
