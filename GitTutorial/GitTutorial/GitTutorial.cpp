// GitTutorial.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

bool Guess(int number) {
	static int target = -1;

	if (number > target) {
		std::cout << "Smaller" << std::endl;
		return false;
	}
	else if (number < target) {
		std::cout << "Bigger" << std::endl;
		return false;
	}
	return true;
}

int main()
{
	cout << "TOMEI!!!!!" << endl;
	cout << "TOTO!!!!!" << endl;
	return 0;
}