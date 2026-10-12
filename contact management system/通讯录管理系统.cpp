#include<iostream>
using namespace std;
#include"函数的声明.h"
#include<string>

int main()
{
	contactlist cl ;
	int select = 0;
	cl.size = 0;

	while (true)
	{
		showMENU();
		cin >> select;

		switch (select)
		{
		case 1:
			addPERSON(&cl);
			break;
		case 2:
			showPERSON(&cl);
			break;
		case 3:
			deletePERSON(&cl);
			break;
		case 4:
			findPERSON(&cl);
			break;
		case 5:
			modifyPERSON(&cl);
			break;
		case 6:
			cleanPERSON(&cl);
			break;
		case 7:
			cout << "期待您的下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "暂无本项功能" << endl;
			system("pause");
			break;
		}
	}

	system("pause");

	return 0;
}