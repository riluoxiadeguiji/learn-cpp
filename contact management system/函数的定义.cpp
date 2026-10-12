#include"函数的声明.h"

void showMENU()
{
	cout << "**************************************" << endl;
	cout << "**********   1.添加联系人   **********" << endl;
	cout << "**********   2.显示联系人   **********" << endl;
	cout << "**********   3.删除联系人   **********" << endl;
	cout << "**********   4.查找联系人   **********" << endl;
	cout << "**********   5.修改联系人   **********" << endl;
	cout << "**********   6.清空联系人   **********" << endl;
	cout << "**********   7.退出通讯录   **********" << endl;
	cout << "**************************************" << endl;
}

void addPERSON(contactlist* cl)
{
	if (cl->size > MAX)
	{
		cout << "通讯录已满" << endl;
		return ;
	}
	else
	{
		string name;
		cout << "请输入姓名: ";
		cin >> name;
		cl->personarr[cl->size].name = name;

		string gender;
		cout << "请输入性别: " ;
		cin >> gender;
		cl->personarr[cl->size].gender = gender;

		int age;
		cout << "请输入年龄: " ;
		cin >> age;
		cl->personarr[cl->size].age = age;

		string number;
		cout << "请输入号码: " ;
		cin >> number;
		cl->personarr[cl->size].number = number;

		string address;
		cout << "请输入地址: " ;
		cin >> address;
		cl->personarr[cl->size].address  = address;

		cl->size++;

		cout << "添加成功" << endl;

		system("pause");
		system("cls");
	}
}

void showPERSON(contactlist* cl)
{
	if (cl->size == 0)
		cout << "您尚未添加任何联系人" << endl;
	else
	{
		for (int i = 0;i < cl->size ;i++)
		{
			cout << "姓名：" << cl->personarr[i].name << "  性别：" << cl->personarr[i].gender << "  年龄：" << cl->personarr[i].age << "  电话号码：" << cl->personarr[i].number << "  家庭住址：" << cl->personarr[i].address << endl;
		}
		
	}
	system("pause");
	system("cls");
}

void deletePERSON(contactlist* cl)
{
	if (cl->size == 0)
	{
		cout << "您没有可删除的联系人" << endl;
	}
	else
	{
		string deletename;
		cout << "请问您想删除的人是：" ;
		cin >> deletename;

		int pos = -1;
		for (int i = 0;i < cl->size;i++)
		{
			if (cl->personarr[i].name == deletename)
			{
				pos = i;
				break;
			}
		}
			if(pos==-1)
			{
				cout << "查无此人" << endl;
			}
			if (pos != -1)
			{
				for (int i = pos;i < cl->size-1 ;i++)
				{
					cl->personarr[i] = cl->personarr[i + 1];
				}
				cout << "删除成功" << endl;

				cl->size--;
				cl->personarr[cl->size] = contact{};
			}

	}
	system("pause");
	system("cls");
}

void findPERSON(contactlist* cl)
{
	if (cl->size == 0)
	{
		cout << "您没有可查找的联系人" << endl;
	}
	else
	{
		string findname;
		cout << "请问您想查找的人是：";
		cin >> findname;

		int pos = -1;
		for (int i = 0;i < cl->size;i++)
		{
			if (cl->personarr[i].name == findname )
			{
				pos = i;
				break;
			}
		}
		if (pos == -1)
		{
			cout << "查无此人" << endl;
		}
		if (pos != -1)
		{
			int i = pos;
			cout << "姓名：" << cl->personarr[i].name << "  性别：" << cl->personarr[i].gender << "  年龄：" << cl->personarr[i].age << "  电话号码：" << cl->personarr[i].number << "  家庭住址：" << cl->personarr[i].address << endl;
		}
	}
	system("pause");
	system("cls");
}

void modifyPERSON(contactlist* cl)
{
	if (cl->size == 0)
	{
		cout << "您没有可修改的联系人" << endl;
	}
	else
	{
		string modifyname;
		cout << "请问您想修改的人是：";
		cin >> modifyname;

		int pos = -1;
		for (int i = 0;i < cl->size;i++)
		{
			if (cl->personarr[i].name == modifyname)
			{
				pos = i;
				break;
			}
		}
		if (pos == -1)
		{
			cout << "查无此人" << endl;
		}
		if (pos != -1)
		{
			cout << "请输入姓名：";
			cin>>cl->personarr[pos].name;
			cout << "请输入性别：";
			cin >> cl->personarr[pos].gender;
			cout << "请输入年龄：";
			cin >> cl->personarr[pos].age;
			cout << "请输入电话：";
			cin >> cl->personarr[pos].number;
			cout << "请输入地址：";
			cin >> cl->personarr[pos].address;
		}
	}
	system("pause");
	system("cls");
}

void cleanPERSON(contactlist* cl)
{
	cl->size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}