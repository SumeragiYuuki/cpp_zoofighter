#pragma once
/*-----���ׂĂ̊��N���X-----*/
//�e�h����
// 1,GAME_SCENE
//
/*-----�����I��-----*/
class GAME_CENTRAL
{
private:
	class GAME* Game = 0;
public:
	GAME_CENTRAL(class GAME* game);
	virtual ~GAME_CENTRAL();
	class GAME* game() { return Game; }
};

