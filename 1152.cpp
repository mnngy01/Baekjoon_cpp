﻿#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int len = str.length();

	int count = 1;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			count++;
	}

	if (str[0] == ' ')
		count--;
	if (str[len - 1] == ' ')
		count--;

	cout << count;
	return 0;
}