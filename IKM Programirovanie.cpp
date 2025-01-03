#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
    string ch;//переменная под число пользователя
    setlocale(LC_ALL, "ru");
    cout << "Привет пользователь. Данная программа переводит число в 16 с.с.";
    cout << "\nВведите своё число: ";
    cin >> ch;

    while (!korrec(ch)) {//пока функция не выведет true,цикл будет продолжаться
        cout << "\nНекорректный ввод, введите число: ";
        cin >> ch;//у пользователя запрашивают корректные входные данные 
    }
    cout << "\nКоличество цифр в исходном числе: " << ch.size();
    string itog = perevod(ch);

    cout << "\nПолучившиеся переведённое число: " << itog;
    cout << "\nКоличество цифр в переведённом в 16 с.с: " << itog.size();
    return 0;
}


