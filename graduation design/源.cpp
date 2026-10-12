#include <iostream>
using namespace std;
#include<string>
#include<ctime>

struct student
{
	string Sname;
	int score;
};

struct teacher
{
	string Tname;
	struct student Sarr[5];
};

void allocateSpace(struct teacher Tarr[], int num)
{
	string nameSeed = "ABCDE";
	struct student Sarr[5];

	for (int i = 0;i < num;i++)
	{
		Tarr[i].Tname = "teacher";
		Tarr[i].Tname += nameSeed[i];

		for (int j = 0;j < 5;j++)
		{
			Tarr[i].Sarr[j].Sname = "student";
			Tarr[i].Sarr[j].Sname += nameSeed[j];

			int random = rand() % 61+40;
			Tarr[i].Sarr[j].score = random;
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));

	struct teacher Tarr[3];
	int num = sizeof Tarr / sizeof Tarr[0];
	allocateSpace(Tarr, num);

	for (int m = 0;m < num;m++)
	{
		cout << "老师的姓名是：" << Tarr[m].Tname << endl;
		for (int n = 0;n < 5;n++)
		{
			cout << "\t学生的姓名是：" << Tarr[m].Sarr[n].Sname << "  其分数是：" << Tarr[m].Sarr[n].score << endl;
		}
	}
		
	system("pause");

	return 0;
}