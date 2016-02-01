#ifndef __ABOUTLAYER_SCENE_H__
#define __ABOUTLAYER_SCENE_H__

#include "cocos2d.h"
USING_NS_CC;
class AboutLayer : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    void aboutCallback(CCObject* pSender);
    void settingCallback(CCObject* pSender);
    // implement the "static create()" method manually
    void backToMenu(CCObject *pSender);
    CREATE_FUNC(AboutLayer);
};

#endif // __HELLOWORLD_SCENE_H__
