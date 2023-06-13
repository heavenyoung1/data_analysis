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

// 
