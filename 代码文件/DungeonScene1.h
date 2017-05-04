#ifndef __DungeonScene1_H__
#define __DungeonScene1_H__
#include"Box2D\Box2D.h"
#include"B2Sprite.h"

class DungeonScene1: public cocos2d::CCLayer
{
public:
	static cocos2d::CCScene* Scene1();//创建菜单场景
	virtual bool init();//初始化菜单类的成员变量
	void menuCallback(Ref*pSender);//回调函数，这个在点击菜单项的时候会用到回调机制，调用该函数
	CREATE_FUNC(DungeonScene1);//这个函数有点麻烦，就暂时当作是一个自动释放内存的函数（很重要，教程一不会用到，后面慢慢讲）

	virtual void update(float dt);
	b2World *world1;
	B2Sprite *bird;
	CCSize screenSize;

	

private:
	void addBird();
	void addGround();
	void initWorld();

};
#endif // !__StartMenu_H__


	   //#ifndef __StartMenu_H__，#define __StartMenu_H__关于这个作用无非就是防止头文件的重复包含和编译    
	//2.在写StartMenu.cpp之前 ，我们还要创建一个StdAfx.cpp和StdAfx.h用来把需要包含的类库都放在这个上面，代码很简单
	//StdAfx.h:

/*
bool StartMenu ::init()
{
	if (!CCLayer ::init())
	{
		return false ;
	}

	CCDirector *pDirector = CCDirector ::sharedDirector();  //创建一个导演类，用来调用整个场景所需要的变量，比如窗口大小
	CCSize winSize = pDirector->getWinSize();//通过导演类获得窗口的大小

	CCSprite *pLoadingImg = CCSprite ::create("loading.png"); //创建一个精灵类，来存放一张背景图片
	pLoadingImg->setPosition(ccp(winSize.width / 2, winSize.height / 2));//图片放在正中央
	this->addChild(pLoadingImg);//场景添加图片
	return true ;
}
*/