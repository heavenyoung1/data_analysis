// EX 1;
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!";
    return 0;
}
//написал первую программу на С++

// EX 2; N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.

#include <iostream>
using namespace std;

int main() {
    int k, n;
    cin >> n >> k;
    cout << k / n;
    return 0;
}

// EX 3; N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков останется после того, как все белочки возьмут себе равное количество орешков.

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cout << k % n;
    return 0;
}

// EX 4; Дано натуральное число, выведите его последнюю цифру.

#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << x % 100 % 10;
    return 0;
}

// EX 5 ; Дано двузначное число. Выведите его первую цифру (число десятков)

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a / 10;
    return 0;
}

// EX 6; Дано целое неотрицательное число N, определите число десятков в нем (предпоследнюю цифру числа). Если предпоследней цифры нет, то можно считать, что число десятков равно нулю.

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a % 100 / 10;
    return 0;
}

// EX 7; Дано целое трехзначное число. Найдите сумму его цифр.

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a;
    b = a / 100; // 7
    c = (a % 100) / 10; // 5
    d = a % 100 % 10; //3
    cout << b + c + d;
    return 0;
}

// EX 8; На вход дается натуральное число N. Выведите следующее за ним четное число

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cout << (a / 2) * 2 + 2;
    return 0;
}

// EX 9; В некоторой школе решили набрать три новых математических класса и оборудовать кабинеты для них новыми партами. За каждой партой может сидеть два учащихся. Известно количество учащихся в каждом из трех классов. Выведите наименьшее число парт, которое нужно приобрести для них. Каждый класс сидит в своем кабинете.

#include <iostream>
using namespace std;

int main() {
    int a, b, c, a1, b1, c1;
    cin >> a >> b >> c;
    a1 = (a / 2) + (a % 2);
    b1 = (b / 2) + (b % 2);
    c1 = (c / 2) + (c % 2);
    cout << a1+ b1 + c1;
    return 0;
}

// EX 10; Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.

#include <iostream>
using namespace std;

int main() {
    int a, b, n, d, rub, cop;
    cin >> a >> b >> n;
    d = (a * 100 + b) * n;
    rub = d / 100;
    cop = d % 100;
    cout << rub << " " << cop;
    return 0;
}

// EX 11; Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59), то есть сначала записывается количество часов, потом обязательно двузначное количество минут, затем обязательно двузначное количество секунд. Количество минут и секунд при необходимости дополняются до двузначного числа нулями.

#include <iostream>
using namespace std; 

int main() {
    int a, h, ost, m1, m2, s1, s2;
    cin >> a;
    h = a / 3600 % 24;
    ost = a % 3600;
    m1 = ost / 60 / 10; //5
    m2 = ost / 60 % 10;
    s1 = a % 60 / 10; 
    s2 = a % 60 % 10; 
    cout << h << ":" << m1 << m2 << ":" << s1 << s2 ;
    return 0;
}
//потратил на эту задачу, черт возьми 4 часа. нужно её запомнить.

// EX 12; Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени. Известно, что второй момент времени наступил не раньше первого. Определите, сколько секунд прошло между двумя моментами времени.


#include <iostream>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2, a1, a2, res;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    a1 = h1 * 3600 + m1 * 60 + s1;
    a2 = h2 * 3600 + m2 * 60 + s2;
    res = a2 - a1;
    cout << res;
    return 0;
}

// EX 13; Длина Московской кольцевой автомобильной дороги —109 километров. Байкер Вася стартует с нулевого километра МКАД и едет со скоростью V километров в час. На какой отметке он остановится через T часов?

#include <iostream>
using namespace std;

int main() {
    int v, t, s, r, m;
    cin >> v >> t;
    s = (v * t) % 109;
    r = 109 + s;
    m = r % 109;
    cout << m;
    return 0;
}

// EX 14; Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. Если число симметричное, то выведите 1, иначе выведите любое другое целое число. Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.

#include <iostream>
using namespace std;

int main() {
    int a, a1, a2, a3, a4, b1, b2;;
    cin >> a; 
    a1 = a / 1000;
    a2 = a % 1000 / 100;
    a3 = a % 1000 % 100 / 10;
    a4 = a % 1000 % 100 % 10;
    b1 = (a1 - a4) * (a4 - a1);
    b2 = (a2 - a3) * (a3 - a2);
    cout << (b1 + b2) + 1;
    return 0;
}

// EX 15; Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?

#include <iostream>
using namespace std;

int main() {
    int h, b, c, l;
    cin >> h >> b >> c;
    l = (h - c + (b - c - 1)) / (b - c);
    cout << l;
    return 0;
}

// EX 16; Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << 1;
    }
    else if (b > a) {
        cout << 2;
    }
    else {
        cout << 0;
    }
  return 0;
}

// EX 17; Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.

#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a >= b && a >= c) {
      cout << a;
  }
  else if (b >= a && b >= c) {
      cout << b;
  }
  else if (c >= a && c >= b) {
      cout << c;
  }
  return 0;
}

// EX 18; Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
//Треугольник — это три точки, не лежащие на одной прямой.

#include <iostream>
using namespace std;

int main() {
      int a, b, c;
      cin >> a >> b >> c;
      if (a <= b && b <= c) {
          if (a + b > c) {
              cout << "YES";
          } else {
              cout << "NO";
      }} else if (a <= b && b >= c) {
          if (a + c > b) {
              cout << "YES";
          } else {
              cout << "NO";
      }} else if (a >= b && b >= c) {
          if (b + c > a) {
              cout << "YES";
          } else {
              cout << "NO";
      }} else if (a >= b && b <= c) {
          if (b + c > a) {
              cout << "YES";
          } else {
              cout << "NO";
      }} else if (a >= b && b <= c) {
          if (a + b > c) {
              cout << "YES";
          } else {
              cout << "NO";
      }} else if (a <= b && b >= c) {
          if (a + c > b) {
              cout << "YES";
          } else {
              cout << "NO";
              }}
      return 0;
        }

// КОРОТКОЕ РЕШЕНИЕ ЗАДАЧИ

#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << ((a + b > c && b + c > a && a + c > b) ? "YES" : "NO");
  return 0;
}

// EX 19; Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).

#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b && a == c) {
      cout << 3;
  } else if (a == b || a == c || b == c) {
      cout << 2;
  } else {
      cout << 0;
  }
  return 0;
}

// EX 20; Шахматная ладья ходит по горизонтали или вертикали. Даны две различные клетки шахматной доски, определите, может ли ладья попасть с первой клетки на вторую одним ходом.

#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << ((a == c || b == d) ? "YES" : "NO");
  return 0;
}

// EX 21; Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку. Даны две различные клетки шахматной доски, определите, может ли король попасть с первой клетки на вторую одним ходом.

#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (c - a <= 1 && d - b <= 1 && c - a >= -1 && d - b >= -1)  {
      cout << "YES";
  } else if (a - c <= 1 && b - d <= 1 && a - c >= -1 && b - d >= -1) {
      cout << "YES";
  } else {
      cout << "NO";
  }
  return 0;
}

// РЕШЕНИЕ  КОРОТКОЕ НИЖЕ!

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (((c - a) * (c - a) > 1) || ((d - b) * (d - b) > 1) ? "NO" : "YES");
    return 0;
}

// EX 22; Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.

#include <iostream>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if ((c - a) * (c - a) == (d - b) * ( d - b) || (a - c) * (a - c) == (b - d) * (b - d)) {
      cout << "YES";
  } else {
      cout << "NO";
  }
  return 0;
}

// КОРОТКОЕ РЕШЕИЕ, В ОДНУ СТРОКУ, НОРМ ТЕМА, ВЗЯЛИ МОДУЛЬ, ПРИ ЭТОМ ИМПОРТИРУЕМ CMATH, ЧТОБЫ НЕ БЫЛО ПРОБЛЕМ С 

#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << ((abs(c - a) == abs(d - b) || abs(a - c) == abs(b - d)) ? "YES" : "NO");
  return 0;
}

// ПОСМОТРЕЛ РЕШЕНИЯ НА СТЕПИКЕ, МОЖНО ЕЩЁ УМЕНЬШИТЬ КОД, БЫЛО ОДНО ЛИШНЕЕ УСЛОВИЕ, ДУМАЛ ЧТО БЕЗ НЕГО РАБОТАТЬ НЕ БУДЕТ, НО БЫЛ НЕ ПРАВ!

#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << (abs(c - a) == abs(d - b) ? "YES" : "NO");
  return 0;
}

// EX 23; Шахматный ферзь ходит по диагонали, горизонтали или вертикали. Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (abs(a - c) == abs(b - d)) {
      cout << "YES";
  } else if (a == c || b == d) {
      cout << "YES";
  } else {
      cout << "NO";
  }
  return 0;
}

// КОРОТКОЕ РЕШЕНИЕ ЗАДАЧИ 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << ((abs(a - c) == abs(b - d)) || (a == c || b == d) ? "YES" : "NO");
  return 0;
}

// EX 24; Шахматный конь ходит буквой “Г” — на две клетки по вертикали в любом направлении и на одну клетку по горизонтали, или наоборот. Даны две различные клетки шахматной доски, определите, может ли конь попасть с первой клетки на вторую одним ходом.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c == a + 2 && d == b + 1 || c == a - 2 && d == b - 1) {
        cout << "YES";
    } else if (c == a + 1 && d == b + 2 || c == a - 1 && d == b - 2) {
        cout << "YES";
    } else if (c == a - 1 && d == b + 2 || c == a + 1 && d == b - 2) {
        cout << "YES";
    } else if (c == a - 2 && d == b + 1 || c == a + 2 && d == b - 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

// КОРОТКОЕ РЕШЕНИЕ

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ((a - c) * (a - c) + (b - d) * (b - d) == 5 ? "YES" : "NO");
    return 0;
}

// EX 25; Шоколадка имеет вид прямоугольника, разделенного на N×M долек. Шоколадку можно один раз разломить по прямой на две части. Определите, можно ли таким образом отломить от шоколадки ровно K долек.

#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    if ((k % n == 0 or k % m == 0) and (k < m * n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

// КОРОТКОЕ РЕШЕНИЕ

#include <iostream>
using namespace std;

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    cout << (((k % n == 0 or k % m == 0) and (k < m * n)) ? "YES" : "NO");
    return 0;
}

// EX 26; Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?





//EX 27; Дано три числа. Упорядочите их в порядке неубывания.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(int a, int b) {
 return (a < b); 
}
int main() {
  int a, b, c, min, max, mid;
  cin >> a >> b >> c;
  min = std::min({a, b, c}, comp);
  max = std::max({a, b, c}, comp);
  mid = (a + b + c) - (min + max);
  cout << min << " " << mid << " " << max;
return 0;
}

// EX 28;

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool comp(int a, int b) {
return (a < b);
}

int main() {
    int n, m, x, y, a, b, n1, m1;
    cin >> n >> m >> x >> y;
    if (n < m) {
        a = n - x;
        b = m - y;
        cout << std::min({x, y, a, b, n, m}, comp) << "\n";
    } else if (n > m) {
    n1 = m;
    m1 = n;
    a = n1 - x;
    b = m1 - y;
    cout << std::min({x, y, a, b, n1, m1}, comp) << "\n";
}
return 0;
}

// EX 29; Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.

#include <iostream>
using namespace std;

int main() {
  int a1, b1, c1, a2, b2, c2;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
  swap(a1, b1);
  swap (a1, c1);
  swap (b1, c1);
  swap(a2, b2);
  swap (a2, c2);
  swap (b2, c2);
  if ((a2 - a1) + (b2 - b1) + (c2 - c1) == 0) {
    cout << "Boxes are equal";
  } else if ((a2 - a1) + (b2 - b1) + (c2 - c1) <= 0) {
    cout << "The first box is larger than the second one"; 
  } else if ((a2 - a1) + (b2 - b1) + (c2 - c1) >= 0) {
    cout << "The first box is smaller than the second one";
  } else {
      cout << "Boxes are incomparable";
  }
  return 0;
  }


// hhh

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(int a, int b) {
return (a < b);
}

int main() {
  int a1, b1, c1, a2, b2, c2, x1, y1, z1, x2, y2, z2;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
  x1 = std::min({a1, b1, c1}, comp);
  z1 = std::max({a1, b1, c1}, comp);
  y1 = (a1 + b1 + c1) - (x1 + z1);
  x2 = std::min({a2, b2, c2}, comp);
  z2 = std::max({a2, b2, c2}, comp);
  y2 = (a2 + b2 + c2) - (x2 + z2);
  cout << x1 << y1 << z1 << x2 << y2 << z2;
  if ((x2 - x1) + (y2 - y1) + (z2 - z1) == 0) {
    cout << "Boxes are equal";
  } else if ((x1 == x2 && y1 == y2 && z1 > x2) || (x1 == x2 && y1 > y2 && z1 == z2) || (x1 > x2 && y1 == y2 && z1 == z2) || (x1 == x2 && y1 > y2 && z1 > z2) || (x1 > x2 && y1 == y2 && z1 > z2) || (x1 > x2 && y1 > y2 && z1 == z2))  {
    cout << "The first box is larger than the second one"; 
  } else if ((x1 == x2 && y1 == y2 && z1 < x2) || (x1 == x2 && y1 < y2 && z1 == z2) || (x1 < x2 && y1 == y2 && z1 == z2) || (x1 == x2 && y1 < y2 && z1 < z2) || (x1 < x2 && y1 == y2 && z1 < z2) || (x1 < x2 && y1 < y2 && z1 == z2))  {
    cout << "The first box is smaller than the second one";
  } else {
      cout << "Boxes are incomparable";
  }
  return 0;
  }
