#pragma once

class startmenu : public cocos2d::CCLayer
{
	public:
		static cocos2d::CCScene* scene();
		virtual bool init();
		void menuCallback(cocos2d::Ref*pSender);
		CREATE_FUNC(startmenu);
	private:
};
