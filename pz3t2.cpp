#include <iostream>
#include <list>
using namespace std;
int main()
{
list<int> numbers = { 8, 15, 23, 30, 42 };

cout << "Початковий список: ";
for (auto it = numbers.begin();it != numbers.end(); ++it)
{
    cout << *it << " ";
}
numbers.push_front(5);
numbers.push_back(50);
numbers.pop_front();

cout << "\nПісля змін: ";
for (auto it = numbers.begin();it != numbers.end(); ++it)
{
    cout << *it << " ";
}

    return 0;
}