#pragma once  
#include "game_object.h"

class Player : public GameObject {
public:                       
	unsigned int lenth;
	void reset();                                                                                                          void grow();
	int getSize();   
	void grow(); 
	bool checkColisions();
private:                                                                                                                   float speedx, speedy;
	char headMark;
};

//Player::snake

void Player::reset() {
	sprite.clear();
	sprite.push_back(ZMEYA_START_POS);

}