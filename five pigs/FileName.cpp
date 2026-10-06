#include <iostream>
using namespace std;

int main()
{
	int arr1[5]{ 270,300,160,470,450 };
	int max = 0;

	for (int i = 0;i <= 4;i++)
	{
		if (arr1[i] >= max)
		{
			max = arr1[i];
		}
	}
	cout << "最重的小猪体重是" <<max << endl;

	system("pause");

	return 0;
}