#pragma once
#include "GAME_CENTRAL.h"
/*-----SCENE系の基底クラス-----*/
//各派生先
// 1,TITLE_SCENE
// 2,HOME_SCENE
// 3,STAGE_SCENE
// 4,ACTION_SCENE
// 5,BLACKBOARD_SCENE
// 6,
//
/*-----説明終了-----*/
class GAME_SCENE:
	public GAME_CENTRAL
{
public:
	GAME_SCENE(class GAME* game);
	virtual ~GAME_SCENE();
	virtual void create();
	virtual void init();
	virtual void proc();
	virtual void update();
	virtual void draw();
	virtual void nextScene();

};

