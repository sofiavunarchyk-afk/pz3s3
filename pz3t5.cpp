#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> numbers = { 8, 15, 23, 30, 42 };
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        if (*it % 5 == 0)
        {
            numbers.erase(it);
            break;
        }
    }
    auto it = numbers.begin();
    while (it != numbers.end())
    {
        if (*it % 3 == 0)
        {
            numbers.insert(it, 100);
            ++it;
        }
        else
        {
            ++it;
        }
    }
    for (int n : numbers) {
        cout << n << " ";
    }
    return 0;
}