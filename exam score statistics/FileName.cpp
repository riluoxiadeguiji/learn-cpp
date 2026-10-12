#include <iostream>;
using namespace std;

int main()
{
	int arr[3][3] = 
	{ 
		{70,90,80},{80,50,60},{ 50,90,70 }
	};

	for (int m = 0;m < 3;m++)
	{
		int num = 0;
		cout << "第" << m + 1 << "个人的语文，数学，英语成绩及其总成绩分别是" ;
		
		for (int n = 0;n < 3;n++)
		{
			num += arr[m][n];
			cout << arr[m][n] << " , ";
		}
		cout << num;
		cout << endl;
	}

	system("pause");

	return 0;
}