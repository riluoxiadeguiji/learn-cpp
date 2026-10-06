#include <iostream>
using namespace std;

int main()
{
	for (int m = 1;m <= 9;m++)
	{
		for (int n = 1;n <= m; n++)
		{
			cout << n<<"*" << m <<"=" << m * n<<"   ";
		}
		cout << endl;
	}

	system("pause");

	return 0;

}