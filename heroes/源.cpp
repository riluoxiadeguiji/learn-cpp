#include <iostream>
using namespace std;
#include <string>

struct heroes
{
	string name;
	string gender;
	int age;
};

int main()
{
	struct heroes arr[5]
	{
		{"刘备","男",23},
		{"关羽","男",22 },
		{"张飞","男",20 },
		{"赵云","男",21 },
		{"貂蝉","女",19 },
	};

	for (int i = 0;i < 4;i++)
	{
		for (int j = 0; j < 4-i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				struct heroes temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int m = 0;m < 5;m++)
	{
		cout << "姓名：" << arr[m].name << "  性别：" << arr[m].gender << "  年龄：" << arr[m].age << endl;
	}

	system("pause");

	return 0;
}