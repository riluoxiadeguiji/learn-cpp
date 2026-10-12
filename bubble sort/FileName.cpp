#include <iostream>;
using namespace std;

int main()
{
	int arr1[10] = { 7,5,9,1,2,0,4,8,3,6, };
	int num = 0;
	int m = sizeof(arr1) / sizeof(arr1[0]);

	for (int n = m;m >= 0;m--)
	{
		for (int i = 0;i <= 8; i++)
		{
			if (arr1[i] > arr1[i + 1])
			{
				num = arr1[i];
				arr1[i] = arr1[i + 1];
				arr1[i + 1] = num;
			}
		}
	}

	for (int j = 0;j <= 9;j++)
	{
		cout << arr1[j] << " ";
	}

	system("pause");

	return 0;
}