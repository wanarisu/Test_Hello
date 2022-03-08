#pragma once

namespace DiceGame
{
	ref class Dice
	{
	private:
		//�t�B�[���h
		int _number;

	public:
		//�R���X�g���N�^�[
		Dice();
		Dice(int initNumber);
		// ���\�b�h
		void Shake();
		//�v���p�e�B
		property int Number {
			int get() {
				return _number;
			}
			void set(int newNumber) {
				if (newNumber >= 1 && newNumber <= 6) {
					_number = newNumber;
				}
			}
		}
	};
}

