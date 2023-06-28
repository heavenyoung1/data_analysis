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


// РЕШЕНИЕ КУДА ПРОЩЕ! ПРОШЛОЕ НЕПРАВИЛЬНО, РАЗОБРАТЬСЯ СО SWAP

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
  //cout << x1 << y1 << z1 << x2 << y2 << z2;
  if (x1 == x2 && y1 == y2 && z1 == z2) {
        cout<<"Boxes are equal"; 
  } else if (x1 <= x2 && y1 <= y2 && z1 <= z2) {
            cout<<"The first box is smaller than the second one"; 
  } else if(x1 >= x2 && y1 >= y2 && z1 >=z2) {
            cout<<"The first box is larger than the second one"; 
  } else {
            cout<<"Boxes are incomparable";
}
    return 0;
}


// EX 30; По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.

#include <iostream>
using namespace std;

int main() {
  int a = 1, n;
  cin >> n;
  while (a * a <= n) {
      cout << a * a << " ";
      a++;
  }
  return 0;
}

// EX 31; Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.

#include <iostream>
using namespace std;

int main() {
  int n, i = 2;
    cin >> n;
    while (n % i) i++;
    cout << i;
  return 0;
}

// EX 32; По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i = 0;
    cin >> n;
    while ((pow(2, i)) <= n) {
        cout << pow(2, i) << " ";
        i++;
    }
    return 0;
} 

// EX 33; Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.

#include <iostream>
#include <cmath>
// a = pow(2, i);
using namespace std;

int main() {
  int a, n, i  = 0;
  cin >> n;
  while (pow(2, i) != n || pow(2, i) <= n) {
    a = pow(2, i);
    if (a == n) {
      cout << "YES";
      break;
    } else if (a > n) {
      cout << "NO";
      break;
    } else if (a < n) {
      i++;
    } else if (i == 30) {
      break;
    }
}

  return 0;
}

// EX 34; Программа получает на вход последовательность целых неотрицательных чисел, каждое число записано в отдельной строке. Последовательность завершается числом 0, при считывании которого программа должна закончить свою работу и вывести количество членов последовательности (не считая завершающего числа 0).
Числа, следующие за числом 0, считывать не нужно.

#include <iostream>

using namespace std;

int main() {
  int n, i = 0;
  cin >> n;
  while (n != 0) {
      cin >> n;
      i++;
  }
    cout << i;
  return 0;
}

//  EX 35; Определите сумму всех элементов последовательности, завершающейся числом 0.

#include <iostream>

using namespace std;

int main() {
  int n, i = 0, sum = 0;
  cin >> n;
  while (n != 0) {
      sum = sum + n;
      cin >> n;
  }
    cout << sum;
  return 0;
}

// EX 36; Определите сумму всех элементов последовательности, завершающейся числом 0.

#include <iostream>

using namespace std;

int main() {
    int max, now;
    cin >> now;
    max = now;
    while (now != 0) {
        if (now > max) {
            max = now;
        }
        cin >> now;
    }
    cout << max; 
    return 0;
}

EX 37; Последовательность состоит из натуральных чисел и завершается числом 0. Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.

#include <iostream>

using namespace std;

int main() {
    int max, now, i = 0;
    cin >> now;
    max = now;
    while (now != 0) {
        if (now > max) {
            max = now;
            i = 1;
        } else if (now == max) {
            i++;
        }    
        cin >> now;
    }
    cout << i; 
    return 0;
}

EX 38; Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.

#include <iostream>

using namespace std;

int main() {
  int now, max = 0, premax = 0;
  cin >> now;
  max = now;
  while (now != 0) {
    cin >> now;
    if (now >= max) {
      premax = max;
      max = now;
    } else if (now < max && now > premax) {
      premax = now;
    } 
  }
  cout << premax;
  return 0;
}    

// EX 39; По данному числу N определите N-е число Фибоначчи F(N).

#include <iostream>
using namespace std;

int main() {
  int count, first = 0, second = 1, i = 0;
  cin >> count;

  while (i <= count) {
    if (i < count) {
      int next = first + second;
      first = second;
      second = next;
      i++;
      
    } else if (i == count) {
      cout << first << " ";
      break;
      
    }}
  return 0;
}


// ЗАПОМНИТЬ !!!
//n-- вычитает 1 из n, и в качестве результата возвращает то значение, которое было до уменьшения
//--n вычитает 1 из n, и в качестве результам возвращает новое значение n
//

// EX 40; Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи, выведите число -1.

#include <iostream>

using namespace std;
int main() {
	int a = 0, b = 1, i = 0, n;
	cin >> n;
	while (i < 50) {
		i++;
		b = a + b;
		a = b - a;
    if (a == n) {
      cout << i;
      break;
    } else if (a > n) {
      cout << "-1";
      break;
    }
    continue;
    }
  return 0;
	}

//КОРОТКОЕ РЕШЕНИЕ 

#include <iostream>

using namespace std;
int main() {
	int a = 0, b = 1, i = 0, n;
	cin >> n;
	while (b <= n) {
		i++;
		b = a + b;
		a = b - a;
    }

  cout << (a == n ? i : -1);
  return 0;
	}

// EX 41; Дана последовательность натуральных чисел, завершающаяся числом 0. Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу. Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.

#include <iostream>
using namespace std;

int main() {
  int num = -1;
  int prenum = -1;
  int maxlength = 0;
  int currentlength = 1;

  cin >> num;
  
  while (num != 0 ) {
    if (num == prenum) {
      currentlength++;
    }
    else {
      currentlength = 1;
    }
    if (currentlength > maxlength) {
      maxlength = currentlength;
    }
    prenum = num;
    cin >> num; 
  }
  cout << maxlength;
  return 0;
}


// Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.

#include <iostream>
using namespace std;

int main() {
  int a, b, c, n, i = 0;
  cin >> a >> b;

  while (cin >> n && n != 0) {
    c = n;
    if (a < b && b > c) {
      i++;
    }
    a = b;
    b = c;
  }
  cout << i;
  return 0;
}


// РЕШУ ПОТОМ

// Дано положительное действительное число X. Выведите его дробную часть.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double n;
  cin >> n;
  cout << double (n) - int (n);
  return 0;
}

// EX 45; Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.

#include <iostream>
#include <cmath>
#include <iomanip>
    
using namespace std;

int main() {
    double n, x;
    cin >> n;
    x = n * 10;
    x = trunc(x);
    x = (int) x % 10;
    cout << x;
    return 0;
}

// EX 46; Даны длины сторон треугольника. Вычислите площадь треугольника.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double a, b, c, p, s;
  cin >> a >> b >> c;
  p = (a + b + c) / 2;
  s = sqrt( p * (p - a) * (p - b) * (p - c) );
  cout << s;
  return 0;
}

// EX 47; Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек. Определите размер вклада через год.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double p, x, y, sum, per, rub, cop;
  cin >> p >> x >> y;
  sum = x * 100 + y;
  per = (sum * (p / 100)) + sum;
  rub = trunc(per / 100);
  cop = per - rub * 100;
  cout << rub << " " << trunc(cop);
}

// EX 48; Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double p, x, y, k, sum;
  int i = 1;
  cin >> p >> x >> y >> k;  
  sum = (x * 100 + y);
  while (i <= k) {
    sum = trunc(sum * (p / 100) + sum);
    i++;
  }
  cout << trunc(sum / 100) << " " << (int) sum % 100;
  return 0;
}

// EX 49; Определите среднее значение всех элементов последовательности, завершающейся числом 0.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n = -1, i = 0;
  double sum = 0;
  while (cin >> n && n != 0) {
    sum += n;
    i++;
  }
  cout << setprecision(11) << fixed << sum / i;
  return 0;
}

//EX 50; Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
  int x, sum = 0, n = 0, quad = 0;
  double sigma = 0;
  while (cin >> x && x != 0) {
    quad += pow(x, 2);
    sum += x;
    n++;
  }
  sigma = sqrt( (quad - (pow(sum, 2)) / n) / (n - 1) );
  cout << setprecision(11) << fixed << sigma;
  return 0;
}

// EX 51; Дан многочлен P(x)=anxn + an−1xn−1+ … + a1x + a0 и число x. Вычислите значение этого многочлена, воспользовавшись схемой Горнера.

//РЕШУ ПОТОМ

// EX 52;  Даны действительные коэффициенты a, b, c, при этом a ≠ 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(int a, int b) {
 return (a < b); 
}

int main() {
  //int d, x1, x2;
  double a, b, c, d, x1, x2;
  cin >> a >> b >> c;
  d = (pow(b, 2)) - 4 * a * c;

  if (d > 0) {
    x1 = (-b - sqrt(d)) / (2 * a);
    x2 = (-b + sqrt(d)) / (2 * a);
    cout << min({x1, x2}, comp) << " " << max({x1, x2}, comp);
  } else if (d == 0) {
    x1 = (-b - sqrt(d)) / (2 * a);
    cout << x1;
  }
}

// b /= 2 * a == b = b / (2 * a) ЗАПОМНИТЬ!!!

// EX 53; аны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(int a, int b) {
 return (a < b); 
}

int main() {
  double a, b, c, x, d, x1, x2;
  cin >> a >> b >> c;
  if (a == 0 && b == 0 && c == 0) {
    cout << 3;
  } else if (a == 0 && b == 0 && c != 0) {
    cout << 0;
  } else if (a == 0 && b != 0) {
    cout << 1 << " " << - c / b;  
  } else if (a != 0 || b != 0 || c != 0) {
    d = pow(b, 2) - 4 * a * c;
    if (d > 0) {
      x1 = (- b - sqrt(d)) / (2 * a);
      x2 = (- b + sqrt(d)) / (2 * a);
      cout << 2 << " " << min({x1, x2}, comp) << " " << max({x1, x2}, comp);
    } else if (d == 0) {
      x1 = - b / (2 * a);
      cout << 1 << " " << x1;
    } else if (d < 0) {
      cout << 0;
    }
  }
}

// EX 54; Выведите два числа x и y, являющиеся решением этой системы.

#include <iostream>

using namespace std;

int main() {
  double a, b, c, d, e, f, x, y;
  cin >> a >> b >> c >> d >> e >> f;
  x = (e * d - b * f) / (a * d - b * c);
  y = (a * f - e * c) / (a * d - b * c);
  cout << x << " " << y;
}

// EX 55; Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений


