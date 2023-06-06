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

// EX 11 
