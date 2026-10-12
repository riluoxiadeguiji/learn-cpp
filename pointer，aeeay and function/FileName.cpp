#include <iostream>
using namespace std;
#include"sort.h"

int main()
{
	int arr[10] = { 0,1,9,2,8,3,7,4,6,5 };
	int num = sizeof(arr) / sizeof(arr[0]);

	for (int m = 0;m < 10; m++)
	{
		for (int n = 0;n < 10;n++)
		{
			sort(&arr[m], &arr[n]);
		}
	}

	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << "  ";
	}

	cout << endl;

	system("pause");

	return 0;
}