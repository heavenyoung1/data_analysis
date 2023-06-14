// Пример цикла
#include <iostream>
using namespace std;

int main() {
  system("chcp 1251>nul");
  int n = 10, s = 0, k = 1;
  while (k <= n) {
    s = s + k * k;
    k++;
    cout << "Сумма квадратов от 1 до " << n << ":"<< s << endl;
  }
  return 0;
}

// alternative decision

#include <iostream>
using namespace std;

int main() {
  int n, s = 0;
  cin >> n;
  while (n) {
    s += n * n;
    n--;
    cout << "Сумма квадратов" << s << endl;
  }
  return 0;
}

// Создание массива

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  const int n = 10;
  int bnm [n+1]; //создание целочисленного массива  
  int k = 0;
  bnm[0] = 1;
  cout << bnm[0];
  while (k < n) {
    bnm[k + 1] = bnm[k] * (n - k) / (k + 1);
    cout << " " << bnm[k + 1];
    k++;
  }
}


// ЗАДАЧИ ДЛЯ САМОСТОЕТЯЛЬНОГО РЕШЕНИЯ ИЗ КНИГИ

// 1.Напишите программу, которой при выполнени в консольное окно выводятся натуральные числа от 1 до 10

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int k, n;
  cin >> k >> n;
  while (k <= n) {
    cout << k << endl;
    k++;
  }
}

// 2. Напишите программу, которой отображаются пять первых нечетных чисел

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int k, n, l = 1;
  cin >> k >> n;
  while (k <= n and l <= 5) {
    if (k % 2 != 0) {
      cout << k << endl;
      k++;
      l++;
    } else {
      k++;
    }}
}

// 3. Напишите программу для отображения в консоли чисел, которые при делении на 4 в остатке дают 3

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int a = 1, b, c;
  cin >> b;
  while (a < b) {
    cout <<  (a * 4 + 3) << endl;
    a++;
  }
}

// 4. Напишите программу для отображения в консоли чисел Фибоначчи.

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int count;
  cout << "Введите количество чисел: ";
  cin >> count;

  int first = 0;
  int second = 1;

  int i = 0;
  while (i < count) {
    cout << first << " ";
    int next = first + second;
    first = second;
    second = next;
    i++;
  }
}

// 6. Напишите программу для перевода километров в мили.
