#pragma once
/*-----すべての基底クラス-----*/
//各派生先
// 1,GAME_SCENE
//
/*-----説明終了-----*/
class GAME_CENTRAL
{
private:
	class GAME* Game = 0;
public:
	GAME_CENTRAL(class GAME* game);
	virtual ~GAME_CENTRAL();
	class GAME* game() { return Game; }
};

