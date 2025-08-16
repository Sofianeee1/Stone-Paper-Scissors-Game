#pragma once

#include <iostream>

using namespace std;

namespace SL_ReadInputs
{
	int ReadNumber(string Message)
	{
		int Number = 0;

		cout << Message << endl;

		cin >> Number;

		return Number;
	}
}



