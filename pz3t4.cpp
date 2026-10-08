#include <iostream>
#include <list>
using namespace std;
int main()
{
list<int> numbers = { 8, 15, 23, 30, 42 };

for (auto it = numbers.begin();it != numbers.end(); ++it)
{
    *it = *it + 2;
}

for (auto it = numbers.begin();it != numbers.end(); ++it)
{
    cout << *it << " ";
}
    return 0;
}