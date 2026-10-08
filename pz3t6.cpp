#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> numbers = { 8, 15, 23, 30, 42 };
    
    int count = 0;
    
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        count++;
    }
    
    cout << "Кількість елементів: " << count << endl;
    
    cout << "Список у зворотному порядку: ";
    
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it)
    {
        cout << *it << " ";
    }
    
    return 0;
}