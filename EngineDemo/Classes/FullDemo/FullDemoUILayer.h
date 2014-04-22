#ifndef __FULLDEMO_UILAYER_H__
#define __FULLDEMO_UILAYER_H__

#include "cocos2d.h"

USING_NS_CC;

class FullDemoUILayer : public cocos2d::CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // a selector callback
    void menuCloseCallback(Ref* pSender);

    void menuCallback_nearAttack(Ref* pSender);
	void menuCallback_farAttack(Ref* pSender);
	void menuCallback_lightingSkill(Ref* pSender);

	void menuCallback_showMini(Ref* pSender);

    void menuCallback_showPerformance(Ref* pSender);

    // implement the "static node()" method manually
    CREATE_FUNC(FullDemoUILayer);
};

#endif
