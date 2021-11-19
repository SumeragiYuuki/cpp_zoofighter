#include "GAME_SCENE.h"
/*---解説---*/
//派生クラス(引数) :
//初期化する場所(初期値) {
// }
//
/*---解説終了---*/
GAME_SCENE::GAME_SCENE(class GAME* game) :
	GAME_CENTRAL(game) {

}
GAME_SCENE::~GAME_SCENE(){}
 void GAME_SCENE::create(){}
 void GAME_SCENE::init(){}
 void GAME_SCENE::proc(){}
 void GAME_SCENE::update(){}
 void GAME_SCENE::draw(){}
 void GAME_SCENE::nextScene(){}