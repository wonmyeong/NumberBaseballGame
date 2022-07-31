#pragma once
#include <iostream>
#include <string>

using namespace std;

class BaseballGame
{
public:
	bool isGameDone();
	void initialize();
	int getNumberofStrike();
	void input();
	void judge();
	void output();

private:
	generate3DigitRandomNumber();

private:
	string answerNumberString;
	string userNumberString;
	int numOfStrike;
	int numOfBall;
	bool isGameDone;
};