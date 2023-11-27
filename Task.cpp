#include "Task.h"

void Task::add_num(int num)
{
	map<int, int>::iterator it;
	it = container.find(num);
	if (it != container.end())
	{
		container.find(num)->second+=1;
		if (container.find(num)->second > max_num)max_num = container.find(num)->second;
		return;
	} 
	container.insert(pair<int, int>(num, 1));
}

void Task::print_max_num()
{
	map<int, int>::iterator it;
	for (it = container.begin(); it != container.end(); it++)
	{
		if (it->second == max_num) cout << it->first << ' ';
	}
}
	
