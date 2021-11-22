#pragma once
#include"GAME.h"
#include "GAME_CENTRAL.h"
/*-----SCENE系の基底クラス-----*/
//各派生先
// 1,TITLE
// 2,HOME
// 3,STAGE
// 4,ACTION
/*-----説明終了-----*/
class GAME_SCENE:
	public GAME_CENTRAL
{
public:
	GAME_SCENE(class GAME* game):
		GAME_CENTRAL(game) {
	
	}
	virtual ~GAME_SCENE(){}
	virtual void create(){}
	virtual void init(){}
	virtual void proc(){}
	virtual void update(){}
	virtual void draw(){}
	virtual void nextScene(){}

};

