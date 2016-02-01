#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__
#define PTM_RATIO 32.0 //pixels To Meters
#include "cocos2d.h"
//#import "Box2D.h"

USING_NS_CC;

class GameScene : public cocos2d::Layer
{
public:
    

    
//    b2World *_world;
//    b2Body *_body;
    Sprite *_ball;
    
    PhysicsWorld* m_world;
    void setPhyWorld(PhysicsWorld* world){ m_world = world; };

    static cocos2d::Scene* createScene();

    virtual bool init();
//    virtual void onAcceleration(Acceleration* acc, Event* unused_event);
    bool onContactBegin(PhysicsContact &contact);
    // a selector callback
    
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
    
};

#endif 
