#include"StdAfx.h"
#include"startmenu.h"
#include"DungeonScene1.h"

CCScene* startmenu::scene()
{
	CCScene *scene = CCScene::create();
	startmenu *layer = startmenu::create();
	scene->addChild(layer);
	return scene;
}

void startmenu ::menuCallback(CCObject* pSender )
{
	int nTag = ((CCNode *)pSender)->getTag();
	switch (nTag)
	{
	case 1:
	{
		CCScene*GameLayerScene =DungeonScene1::Scene1();
		CCDirector::sharedDirector()->replaceScene(GameLayerScene);
	}
		break ;
	case 2:
		{
			CCLOG ("Option Click");
		}
		break ;
	case 3:
		{
			CCLOG ("About Click");
			
		}
		break ;
	}
}

bool startmenu::init()
{
	if (!CCLayer::init())
	{
		return false;
	}
	CCDirector *pDirector = CCDirector::sharedDirector();
	CCSize winSize = pDirector->getWinSize(); 
	CCSprite *pLoadintImg = CCSprite::create("loading.png");
	pLoadintImg->setPosition(ccp(winSize.width / 2, winSize.height / 2));
	this->addChild(pLoadintImg);

	CCSprite *pLogoImg = CCSprite ::create("logo.png");
	pLogoImg->setAnchorPoint(ccp(0.5,1));
	pLogoImg->setPosition(ccp(winSize.width / 2, winSize.height - 60));
	this->addChild(pLogoImg);



	CCSprite *pNewNormalItemImg = CCSprite::create("menu.png", CCRectMake(0, 0, 126, 33));
	CCSprite *pNewSelectedItemImg = CCSprite::create("menu.png", CCRectMake(0, 33, 126, 33));
	CCSprite *pNewDisabledItemImg = CCSprite::create("menu.png", CCRectMake(0, 66, 126, 33));
	CCMenuItemSprite *pNewItem = CCMenuItemSprite::create(pNewNormalItemImg, pNewSelectedItemImg, pNewDisabledItemImg, this, menu_selector(startmenu::menuCallback));
	pNewItem->setTag(1);

	//仿照第一个菜单项创建
	CCSprite *pOptionNormalItemImg = CCSprite::create("menu.png", CCRectMake(126, 0, 126, 33));
	CCSprite *pOptionSelectedItemImg = CCSprite::create("menu.png", CCRectMake(126, 33, 126, 33));
	CCSprite *pOptionDisabledItemImg = CCSprite::create("menu.png", CCRectMake(126, 66, 126, 33));
	CCMenuItemSprite *pOptionItem = CCMenuItemSprite::create(pOptionNormalItemImg, pOptionSelectedItemImg, pOptionDisabledItemImg, this, menu_selector(startmenu::menuCallback));
	pOptionItem->setTag(2);

	//仿照第一个菜单项创建
	CCSprite *pAboutNormalItemImg = CCSprite::create("menu.png", CCRectMake(252, 0, 126, 33));
	CCSprite *pAboutSelectedItemImg = CCSprite::create("menu.png", CCRectMake(252, 33, 126, 33));
	CCSprite *pAboutDisabledItemImg = CCSprite::create("menu.png", CCRectMake(252, 66, 126, 33));
	CCMenuItemSprite *pAboutItem = CCMenuItemSprite::create(pAboutNormalItemImg, pAboutSelectedItemImg, pAboutDisabledItemImg, this, menu_selector(startmenu::menuCallback));
	pAboutItem->setTag(3);

	//三个菜单项创建完毕之后，就要把它们合并成一个菜单了
	//用CCMenu 创建一个菜单把三个菜单项包含进去
	//设置每个菜单项之间的距离是30:alignItemsVerticallyWithPadding(20);
	CCMenu *pMenu = CCMenu::create(pNewItem, pOptionItem, pAboutItem, NULL);
	pMenu->alignItemsVerticallyWithPadding(20);
	pMenu->setPosition(ccp(winSize.width / 2, winSize.height / 2 - 60));
	addChild(pMenu);



	return true;
}

