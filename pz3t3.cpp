#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums = {8, 15, 23, 30, 42};
    
    cout << "Завдання 3 (зворотний порядок):" << endl;
    for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
        cout << *it << " ";
    }
    return 0;
}