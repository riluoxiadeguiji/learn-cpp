#include <iostream>
using namespace std;
#include<ctime>

int main()
{
	srand((unsigned int)time(NULL));

	int num1 = rand() % 100 + 1;
	int num2 = 0;

	cout << "请问你想要猜的数字是" << endl;

	while (1)
	{
		cin >> num2;

		if (num1 > num2)
		{
			cout << "您的猜测小于随机数" << endl;
		}
		else if (num1 < num2)
		{
			cout << "您的猜测大于随机数" << endl;
		}
		else
		{
			cout << "恭喜您猜对了" << endl;
			break;
		}
	}

	system("pause");

	return 0;

}