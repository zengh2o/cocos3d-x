#ifndef __CLOTH_UILAYER_H__
#define __CLOTH_UILAYER_H__

#include "cocos2d.h"

USING_NS_CC;

class ClothUILayer : public cocos2d::CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // a selector callback
    void menuCloseCallback(Ref* pSender);

	void menuCallback_changeCap(Ref* pSender);
	void menuCallback_changeHair(Ref* pSender);
	void menuCallback_changeGlasses(Ref* pSender);
	void menuCallback_changeUpBody(Ref* pSender);
	void menuCallback_changeBottomBody(Ref* pSender);
	void menuCallback_changeShoot(Ref* pSender);
	void menuCallback_changeNose(Ref* pSender);
	void menuCallback_changeEye(Ref* pSender);

    // implement the "static node()" method manually
    CREATE_FUNC(ClothUILayer);
};

#endif
