#include <iostream>
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

//함수에서 배열을 .. 정리하는? 예제 복습하기 (별표쳐져있음)