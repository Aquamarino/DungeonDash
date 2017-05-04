#include"StdAfx.h"
#include"DungeonScene1.h"
#define RATIO 192.0f

CCScene* DungeonScene1::Scene1()
{
	CCScene *scene = CCScene::create();
	DungeonScene1 *layer = DungeonScene1::create();
	scene->addChild(layer);
	return scene;
}

void DungeonScene1::initWorld()
{
	world1=new b2World(b2Vec2(0, -10));
	//world1->SetContactListener(this);
}

void DungeonScene1::addBird()
{
	bird = B2Sprite::create("bird.png");
	b2BodyDef bodyDef;
	bodyDef.type= b2_dynamicBody;
	bodyDef.position = b2Vec2(screenSize.width/2/RATIO,9);
	b2Body *birdBody=world1->CreateBody(&bodyDef);

	bird->setPTMRatio(RATIO);
	bird->setB2Body(birdBody);

	addChild(bird);

}

void DungeonScene1::update(float dt)
{
	world1->Step(dt, 8, 3);
}

void DungeonScene1::addGround()
{
	B2Sprite *ground = B2Sprite::create("ground.png");
	CCSize size = ground->getContentSize();
	b2BodyDef bDef;
	bDef.type = b2_staticBody;
	bDef.position= b2Vec2(size.width / 2.0f / RATIO, size.height / 2.0f / RATIO);
	b2Body *groundBody = world1->CreateBody(&bDef);
	addChild(ground);
}

/*Scene* DungeonScene1::createScene()
{
	return DungeonScene1::create();
}
*/
// on "init" you need to initialize your instance
bool DungeonScene1::init()
{
	//////////////////////////////
	// 1. super init first
	if (!CCLayer::init())
	{
		return false;
	}

	screenSize = CCDirector::sharedDirector()->getVisibleSize();
	initWorld();
	addBird();
	scheduleUpdate();

	return true;
}

/*  
void DungeonScene1::menuCallback(Ref* pSender)
{
	//Close the cocos2d-x game scene and quit the application
	Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif

	//To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below

	//EventCustom customEndEvent("game_scene_close_event");
	//_eventDispatcher->dispatchEvent(&customEndEvent);


}*/