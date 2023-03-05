#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int* number = new int[n]; //동적할당

	for (int i = 0; i < n; i++)
		cin >> number[i];

	//최소값
	int min = number[0];
	for (int i = 0; i < n; i++)
	{
		if (number[i] < min)
			min = number[i];
	}

	//최대값
	int max = number[0];
	for (int i = 0; i < n; i++)
	{
		if (number[i] > max)
			max = number[i];
	}
	
	cout << min << " " << max;
	return 0;
}