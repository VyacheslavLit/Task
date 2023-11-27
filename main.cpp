#include "Task.h"
#include <iostream>

int main()
{
    Task t;
    int num;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите данные: ";
    do
    {
        cin >> num;
        t.add_num(num);
    } while (cin.peek() != '\n');
    t.print_max_num();
    return 0;
}
