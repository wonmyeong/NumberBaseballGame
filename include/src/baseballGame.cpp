#include "../include/BaseballGame.h"
#include <iostream>

using namespace std;

BaseballGame::BaseballGame() {
	answerNumberString = "";
	userNumberString = "";
	numOfStrike = 0;
	numOfBall = 0;
	m_isGameDone = false;
}
bool BaseballGame::isGameDone() {

}
void BaseballGame::initialize() {
	numOfStrike = 0;
	generate3DigitRandomNumber();
}
int BaseballGame::getNumberofStrike() {
	return numOfStrike;
}
bool BaseballGame::isNumber(char ch)
{
	bool res = false;
	if (ch >= '0' && ch <= '9') {
		res = true;
	}

	return res;
}

bool BaseballGame::isInputNumberWrong() {
	bool res = false;
	if (userNumberString.size() != 3)
	{
		res = true;
	}
	else {
		for (int i = 0; i < 3; i++)
		{
			if (isNumber(userNumberString[i])
			{
				res = true;
					break;
			}
		}
	}
	return res
}

void BaseballGame::input() {
	
	while (isInputNumberWrong()) {
		cin >> "3자리 숫자를 입력해주세요" << endl;
		cin >> userNumberString;
	}
}
void BaseballGame::judge() {

}
void BaseballGame::output() {
	cout << "Strike(" << numOfStrike << "), ";
	cout << "Ball(" << numOfBall << ")" << endl;

	if (numOfStrike == 3) {
		cout << "성공" << endl;
	}
}
void BaseballGame::generate3DigitRandomNumber()
{

}