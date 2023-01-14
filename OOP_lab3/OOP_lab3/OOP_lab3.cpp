#include <iostream>
#include "Stack.h"
#include "Monster.h"

int main()
{
    setlocale(LC_ALL, "Rus");

    Stack<int> st1;
    st1.push(new int(2));
    st1.push(new int(4));
    st1.push(new int(7));
    std::cout << "Количество элементов: " << st1.Count() << std::endl;
    std::cout << "Взятие верхнего элемента без удаления: " << *st1.Head() << std::endl;
    std::cout << "Количество элементов: " << st1.Count() << std::endl;
    std::cout << "Взятие верхнего элемента с удалением: " << *st1.pop() << std::endl;
    std::cout << "Количество элементов: " << st1.Count() << std::endl;
    std::cout << "Взятие верхнего элемента без удаления: " << *st1.Head() << std::endl << std::endl;

    Stack<Monster> st2;
    st2.push(new Monster(1, 3));
    st2.push(new Monster(3, 4));
    st2.push(new Monster(6, 7));
    std::cout << "Количество элементов: " << st2.Count() << std::endl;
    std::cout << "Взятие верхнего элемента без удаления: " << st2.Head()->getHP() << std::endl;
    std::cout << "Количество элементов: " << st2.Count() << std::endl;
    std::cout << "Взятие верхнего элемента с удалением: " << st2.pop()->getHP() << std::endl;
    std::cout << "Количество элементов: " << st2.Count() << std::endl;
    std::cout << "Взятие верхнего элемента без удаления: " << st2.Head()->getHP() << std::endl;
}
