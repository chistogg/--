#include <iostream>
#include <cassert>
#include <stack> // стандартная реализация стека в C++

int main()
{
    std::stack<int> stk; // стек элементов типа int

    std::cout << "Введите целые числа (-1, чтобы закончить ввод):" << std::endl;

    while (true)
    {
        int num;
        std::cin >> num;

        if (num == -1)
            break;

        stk.push(num); // добавляем элемент в стек
    }

    std::cout << "В стеке " << stk.size() << " элементов" << std::endl;

    // stk.size() изменяется при добавлении/удалении, поэтому
    // цикл 
    //  for (int i = 0; i < stk.size(); i++) { ... }
    // будет вести себя неправильно
    for (int i = stk.size(); i > 0; i--)
    {
        // выводим верхний элемент (peek)
        std::cout << "Верхний элемент: " << stk.top() << std::endl;

        // удаляем верхний элемент
        stk.pop();
    }

    assert(stk.empty()); // стек пустой

    return 0;
}
