#ifndef __MAINMENU_SCENE_H__
#define __MAINMENU_SCENE_H__

USING_NS_CC;
class MainMenuScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(Ref* pSender);
    void aboutCallback(Ref* pSender);
    void settingCallback(Ref* pSender);
    void GameScenePlay(Ref *pSender );
    bool onTouchBegan( cocos2d::Touch *touch, cocos2d::Event *event );

    // implement the "static create()" method manually
    CREATE_FUNC(MainMenuScene);
};

#endif // __HELLOWORLD_SCENE_H__
