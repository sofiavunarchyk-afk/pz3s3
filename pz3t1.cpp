#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> nums = {8, 15, 23, 30, 42};
    
    cout << "Завдання 1:" << endl;
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}