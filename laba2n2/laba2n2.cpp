﻿#include <iostream>
using namespace std;

int main()
{
    // Русификатор
    setlocale(LC_ALL, "ru");
    // Обозначение переменных с которыми мы будем работать
    int x, res;
    // Ввод трёхзначного числа
    cout << "Введите трёхзначное число: ";
    cin >> x;
    // Отсечка 2ух последних цифр
    res = x / 100;
    // Вывод результата
    cout << "Первая цифра числа: " << res;
}