#include <iostream>
#include <conio.h>
#include "Vector3.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    float v1[3], v2[3];
    int number = 0;
    bool flag = true;

    for (int i = 0; i < 3; i++) {
        cout << "Введите " << i + 1 << "-ую координату первого вектора: ";
        cin >> v1[i];
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Введите " << i + 1 << "-ую координату второго вектора: ";
        cin >> v2[i];
    }
    system("cls");

    Vector3 V1(v1[0], v1[1], v1[2]);
    Vector3 V2(v2[0], v2[1], v2[2]);
    Vector3 V3;

    while (flag) {
        V1.print();
        V2.print();

        cout << endl << "1. Сложение векторов." << endl;
        cout << "2. Разность векторов." << endl;
        cout << "3. Скалярное произведение векторов." << endl;
        cout << "4. Длина векторов." << endl;
        cout << "5. Значение косинуса угла между этими векторами." << endl;
        cout << "6. Выход из программы." << endl << endl;
        cout << "Введите значение -> ";
        cin >> number;
        cout << endl;

        switch (number) {
        case 1:
            cout << "Вектор, полученный путём сложения введённых векторов: ";
            V3 = V1 + V2;
            V3.print();
            _getch();
            system("cls");
            break;
        case 2:
            cout << "Вектор, полученный путём вычитания введённых векторов: ";
            V3 = V1 - V2;
            V3.print();
            _getch();
            system("cls");
            break;
        case 3:
            cout << endl << "Скалярное произведение векторов = " << V1 * V2 << endl;
            _getch();
            system("cls");
            break;
        case 4:
            cout << "Длинна первого вектора: " << V1.getLength() << endl;
            cout << "Длинна второго вектора: " << V2.getLength() << endl;
            _getch();
            system("cls");
            break;
        case 5:
            cout << "Косинус угла между векторами = " << V1.getCos(V2) << endl;
            _getch();
            system("cls");
            break;
        case 6:
            cout << "Завершение программы" << endl;
            _getch();
            flag = false;
            break;
        default:
            cout << "Вы ввели неверное значение!" << endl;
            system("pause");
            system("cls");
            break;
        }
    }
}