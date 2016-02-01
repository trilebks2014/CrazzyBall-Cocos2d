#include "MainMenuScene.h"

USING_NS_CC;

Scene* MainMenuScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = MainMenuScene::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool MainMenuScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(MainMenuScene::menuCloseCallback, this));
    
	closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    CCMenuItemImage *pAboutItem = CCMenuItemImage::create("about-button.png","about-button-selected.png",this,menu_selector(MainMenuScene::aboutCallback));
    pAboutItem->setPosition( ccp(CCDirector::sharedDirector()->getWinSize().width/2, CCDirector::sharedDirector()->getWinSize().height/2) );
    
    this->addChild(pAboutItem, 1, 1);
    
    
    return true;
}


void MainMenuScene::menuCloseCallback(Ref* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
void MainMenuScene::aboutCallback(CCObject* pSender)
{
    //All Cocos2d applications are build via a CCScene holding one are more layers.
    //The CCDirector object will hold the active CCSene, so this CCScene object will be requests from the CCDirector.
    CCDirector *pDirector = CCDirector::sharedDirector();
    CCScene *scene = pDirector->getRunningScene();
    
    //Now the current CCLayer will be popped from the CCScene object.
    scene->removeChild(this);
    
    //The about layer will be pushed to the CCScene object.
    // 'layer' is an autorelease object
//    AboutLayer *layer = AboutLayer::create();
    
    // add layer as a child to scene
//    scene->addChild(layer);
}
