#include "Dice.h"

using namespace System;
using namespace DiceGame;

Dice::Dice() {
	//初期値は1の目
	this->_number = 1;
}

Dice::Dice(int initNumber) {
	//初期値を設定
	if (initNumber >= 1 && initNumber <= 6) {
		this->_number = initNumber;
	}
	else {
		this->_number = 1;
	}
}

void Dice::Shake() {
	Random^ ran = gcnew Random();
	this->_number = ran->Next(1, 7);
}