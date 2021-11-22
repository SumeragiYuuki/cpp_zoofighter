#pragma once
#include"framework.h"
#include"graphic.h"
#include"window.h"
#include"TITLE.h"
#include"GAME.h"
class GAME
{
public:
	GAME() {
		class TITLE* Title = new TITLE ;
	}
	~GAME() {

	}
	void run() {
		window(1920, 1080, full);
		while (notQuit) {

		}
	}
};