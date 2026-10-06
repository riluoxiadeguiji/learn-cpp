#include <iostream>
using namespace std;

int main()
{

	int num,a,b,c;
	num = 100;

	do
	{
		a = num / 100;
		b = num / 10 % 10;
		c = num % 10;
		if (num == a * a * a + b * b * b + c * c * c)
		{
			cout << num << endl;
		}
		num++;
     } 
	while (num<1000);


	system("pause");

	return 0;

}