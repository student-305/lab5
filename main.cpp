#include<iostream>
#include<cmath>
using namespace std;

void tabl1();
void tabl2();
void tabl3();

int main() {
  setlocale(LC_ALL, "Russian");
  int menu;
  do {
    cout << "Доступные задания: 1 / 2 / 3" << endl;
    cout << "Выбрать задание под номером:";
    cin >> menu;
    switch (menu)
    {
    case 1: tabl1(); break;
    case 2: tabl2(); break;
    case 3: tabl3(); break;
    default: cout << "Ошибка. Необходимо выбрать одно из доступных заданий. Повторите выбор!" << endl;
    }
  } while (menu != -1);
}

void tabl1() {
  int x, y, n, couter = 0;
  cout << " \n ";
  cout << "Задание 1\n ";
  cout << "Даны действительные числа (x, y) координаты точек на плоскости.\n Определить количество точек, попадающих в фигуру заданного цвета." << endl;
  cout << "\n Впишите какое количество точек хотели бы ввести : ";
  cin >> n;
  for (int j = 1; j <= n; j++) {
    cout << "Введем Х и Y: ";
    cin >> x >> y;
    if (x = y && x >= y && x <= 2 * y) {
      couter++;
    }
    else if (x < y / 2 && (x - y / 2) * (x - y / 2) + (x - y / 2) * (x - y / 2) < y * y / 4) {
      couter++;
    }
  }
  cout << "Количество точек, которые попали в фигуру: " << couter << " \n ";
}
void tabl2() {
  int x, n;
  int fact = 1;
  int element = 0;
  cout << "Введите целое число x: ";
  cin >> x;
  cout << "Введите натуральное число n: ";
  cin >> n;
  for (int k = 0; k <= n; ++k) {
    if ((k + 1) % 4 == 0) {
      int numerator = 1;
      for (int i = 1; i <= 2 * k + 1; ++i) {
        numerator *= x;
      }
      int denominator = 1;
      for (int i = 1; i <= 1 + 2 * k; ++i) {
        denominator *= i;
      }
      int sign = (k % 2 == 0) ? 1 : -1;
      element = -1 + sign * (numerator / denominator);
      cout << "Элемент " << k + 1 << ": " << element << endl;
    }
  }
}
void tabl3() {
  int lim, x, xfact;
  double sum = 0;
  double g = 100000000000;
  double drob;
  cout << " \n ";
  cout << "Задание 3\n ";
  cout << "Исследовать ряд на сходимость. Условие окончания цикла исчисление суммы в виде : | u | > g,\n где g – величина для прерывания цикла вычисления суммы расходящегося ряда (g = 10^2 ... 10^5).\n";
  cout << " \n ";
  cout << "Введите количество элементов: ";
  cin >> lim;
  cout << "Введите число, факториал которого посчитать: ";
  cin >> x;
  xfact = x;
  drob = (pow(2 + lim, 3)) / (pow(xfact * 2, 2 * lim + 1));
  sum = drob;
  for (int i = 1; i <= x; i++)
  {
    xfact *= i;
  }
  while (fabs(drob) > g) {
    for (int i = 0; i <= lim; i++)
    {
      drob = (pow(2 + lim, 3)) / (pow(xfact * 2, 2 * lim + 1));
    }
    sum = sum + drob;
    lim++;
  }
  cout << "Значение выражения, учитывая все условия выше, равно: " << sum << "\n" << endl;
}