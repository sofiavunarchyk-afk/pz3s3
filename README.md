# Звіт про виконання практичної роботи №3

**Виконала:** студентка 4 курсу СОМ, Винарчик Софія Степанівна
**Варіант:** 1

---

## Тема роботи
Опрацювання лінійних двозв’язних списків у мові програмування C++ за допомогою стандартного контейнера `std::list`.

## Мета роботи
Набути практичних навичок роботи з двозв'язними списками `std::list<int>`, навчитися ініціалізувати контейнер, застосовувати прямі (`begin()`, `end()`) та зворотні (`rbegin()`, `rend()`) ітератори для навігації, а також виконувати базові операції модифікації: додавання, видалення, пошук та зміну значень елементів.

---

## Варіант завдання (Варіант 1)

**Початковий список:** `8, 15, 23, 30, 42`

| № | Завдання |
| :-: | :--- |
| **1** | Переберіть список за допомогою ітератора та виведіть усі його елементи. |
| **2** | Додайте `5` на початок і `50` у кінець списку. Видаліть перший елемент. |
| **3** | Виведіть елементи списку у зворотному порядку за допомогою зворотного ітератора. |
| **4** | Збільште значення кожного елемента на `2`, використовуючи ітератор. |
| **5** | Видаліть перший елемент, який ділиться на `5` без остачі. Перед кожним елементом, який ділиться на `3`, вставте `100`. |
| **6** | Визначте кількість елементів списку та виведіть список у зворотному порядку. |

---

## Виконання завдань

### Завдання 1. Перебір та виведення списку
**Програмний код:**
```cpp
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
```
**Результат виконання:**
```text
Завдання 1:
8 15 23 30 42 
```
> *<img width="2459" height="1196" alt="image" src="https://github.com/user-attachments/assets/5082212d-1d52-40ac-9a1a-2461de1fb8fc" />
*

---

### Завдання 2. Додавання та видалення елементів
**Програмний код:**
```cpp
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
```
**Результат виконання:**
```text
Початковий список: 8 15 23 30 42 
Після змін: 8 15 23 30 42 50 
```
> *<img width="2471" height="920" alt="image" src="https://github.com/user-attachments/assets/27e698ad-d2e6-4ed9-a0a0-697d51a428ff" />
*

---

### Завдання 3. Виведення списку у зворотному порядку
**Програмний код:**
```cpp
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
```
**Результат виконання:**
```text
Завдання 3 (зворотний порядок):
42 30 23 15 8 
```
> *<img width="2478" height="721" alt="image" src="https://github.com/user-attachments/assets/b1427758-6b9c-4b78-a748-f2e71ee4ae72" />
*

---

### Завдання 4. Модифікація значень елементів
**Програмний код:**
```cpp
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
```
**Результат виконання:**
```text
10 17 25 32 44 
```
> *<img width="2469" height="826" alt="image" src="https://github.com/user-attachments/assets/b3042fce-5aa8-4a53-930d-dcaf30b964b5" />
*

---

### Завдання 5. Пошук, умовне видалення та вставка
**Програмний код:**
```cpp
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
```
**Результат виконання:**
```text
8 23 100 30 100 42 
```
> *<img width="2434" height="1238" alt="image" src="https://github.com/user-attachments/assets/0c9dce71-1533-40d0-8b88-46bf92dd62e7" />
*

---

### Завдання 6. Підрахунок та зворотне виведення
**Програмний код:**
```cpp
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
```
**Результат виконання:**
```text
Кількість елементів: 5
Список у зворотному порядку: 42 30 23 15 8 
```
> *<img width="2472" height="1143" alt="image" src="https://github.com/user-attachments/assets/ffae2f6a-e9dc-43c3-8a90-e9c639a587a4" />
*

---

## Висновок
Під час виконання практичної роботи було закріплено навички використання контейнера `std::list` у мові C++. Опрацьовано механізми додавання та видалення елементів на кінцях списку (`push_front`, `push_back`, `pop_front`), а також точкову вставку та видалення за допомогою ітераторів (`insert`, `erase`). Особливу увагу було приділено роботі з вказівниками-ітераторами: прямому проходу циклом `for` для зміни поточних значень елементів та зворотному проходу за допомогою `rbegin()` / `rend()`.
