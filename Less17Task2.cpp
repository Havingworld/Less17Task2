/*
Написать функцию, которая принимает указатель на тип int, по которому размещены 10 переменных типа int.
Функция ничего не возвращает, но по тому же указателю элементы должны лежать в обратном порядке.

Чек-лист для проверки задачи

Функция принимает корректные типы данных, тип возвращаемого значения --  void
Функция не использует библиотек кроме <iostream>
По переданному указателю лежат переменные в обратном порядке
*/

#include <iostream>
using namespace std;

void swap(int* ar)
{
    for (int i = 0; i < 5; i++)
    {
        int c = *(ar + 9 - i);
        *(ar + 9 - i) = *(ar + i);
        *(ar + i) = c;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << *(ar + i) << " ";
    }
}

int main()
{
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    swap(ar);
    
}
