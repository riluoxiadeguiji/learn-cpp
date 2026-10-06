#include<iostream>
using namespace std;

int main()
{
	int arr1[7]{ 1,7,2,6,3,5,4 };
	int m = 0;
	int n = 6;

	for (int temp = 0;m <= n;m++, n--)
	{
		temp = arr1[m];
		arr1[m] = arr1[n];
		arr1[n] = temp;
	}

	for (int i = 0; i <= 6 ; i++)
	{
		cout << arr1[i] << " ";
	}

	cout << endl;

	system("pause");

	return 0;
}