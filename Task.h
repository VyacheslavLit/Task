#pragma once
#include <iostream>
#include <map>
#include <Windows.h>

using namespace std;


class Task
{
	map <int, int> container;
	int max_num=1;
public:
	void add_num(int);
	void print_max_num();
};
