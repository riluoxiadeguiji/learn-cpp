#pragma once
#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

struct contact
{
	string name;
	string gender;
	int age;
	string number;
	string address;
};

struct contactlist
{
	struct contact personarr[MAX];
	int size;
};


void showMENU();

void addPERSON(contactlist* cl);

void showPERSON(contactlist* cl);

void deletePERSON(contactlist* cl);

void findPERSON(contactlist* cl);

void modifyPERSON(contactlist* cl);

void cleanPERSON(contactlist* cl);