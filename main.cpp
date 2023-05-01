// Билиотеки
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Загаловочные файлы на c++
#include "Quadrangle.hpp"
#include "Rectangle.hpp"
#include "Romb.hpp"
#include "Square.hpp"
#include "Trapez.hpp"
// Макросы/Алиасы
#define creat "Вы хотите создать \n1: Четырёхугольник \n2: Прямоугольник \n3:\
Ромб \n4: Квадрат \n5: Равнобокую трапечию \n0: Я передумал\n"
#define prd "Представление сторон четырёхугольника: \n     d\n  +-----+  \na \
|     | c\n  +-----+  \n     b\n"
#define sel "Выберите действие\n"
#define sel1 "1: Создать фигуру\n"
#define sel2 "2: Удалить фигуру\n"
#define sel3 "3: Показать стороны\n"
#define sel4 "4: Изменить стороны фигуры\n"
#define sel5 "5: Вывести площадь фигуры\n"
#define sel6 "6: Вывести периметр\n"
#define sel7 "7: Вывести радиус описанной окружности\n"
#define sel8 "8: Вывести радиус вписанной окружности\n"
#define selosn "7: Вывести угол при основании\n"
#define sel0 "0: Выйти в меню\n"

using namespace std;

int main() {
    printf(prd);
    int run = 1, opt = -1, todo = -1;
    Quadrangle<double> *qe; Rectangle<double>  *re;
    Romb<double>  *rb; Square<double>  *se; Trapez<double>  *tz;
    do {
        switch (opt){
            case 1:
            do {
                switch (todo){
                    case 1:
                        cout << "\033[33m";
                        if (qe == NULL) {
                            double a, b, c, d;
                            cout << "Введите стороны четырёхугольника:\n";
                            cin >> a >> b >> c >> d;
                            Quadrangle<double> tmp(a, b, c, d); qe = &tmp;
                        } else cout << "Фигура уже существует\n";
                        cout << "\033[0m";
                        todo = -1; break;
                    case 2:
                        cout << "\033[33m";
                        todo = -1; 
                        if (qe != NULL) qe = nullptr;
                        else cout << "Фигуры не существует, нечего удалять\n";
                        cout << "\033[0m";
                        break;
                    case 4:
                        cout << "\033[33m";
                        todo = -1; 
                        if (qe == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        qe->change(); cout << "\033[0m"; break;
                    case 3:
                        cout << "\033[33m";
                        todo = -1; 
                        if (qe == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        qe->show(); cout << "\033[0m"; break;
                    case 5:
                        cout << "\033[33m";
                        todo = -1; 
                        if (qe == NULL) {
                            cout << "Сначала создайте фигуру\n";cout << "\033[0m"; break;}
                        cout << "Площадь фигуры: " << qe->square() << endl;cout << "\033[0m"; break;
                    case 6:
                        cout << "\033[33m";
                        todo = -1; 
                        if (qe == NULL) {
                            cout << "Сначала создайте фигуру\n";cout << "\033[0m"; break;}
                        cout << "Периметр фигуры: " << qe->perimetr() << endl;cout << "\033[0m"; break;
                    default:
                        cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << sel0;
                        opt = -1; cin >> todo; break;
                }
            } while (todo); break;
            case 2:
            do {
                switch (todo){
                    case 1:
                        todo = -1; cout << "\033[33m";
                        if (re == NULL) {
                            double a, b;
                            cout << "Введите длину и ширину проямоугольника:\n";
                            cin >> a >> b;
                            Rectangle<double> tmp(a, b); re = &tmp;
                        } else cout << "Фигура уже существует\n";
                        cout << "\033[0m"; break;
                    case 2:
                        todo = -1; cout << "\033[33m";
                        if (re != NULL) re = nullptr;
                        else cout << "Фигуры не существует, нечего удалять\n";
                        cout << "\033[0m"; break;
                    case 3:
                        todo = -1; cout << "\033[33m";
                        if (re == NULL) {
                            cout << "Сначала создайте фигуру\n";cout << "\033[0m"; break;}
                        re->show(); cout << "\033[0m"; break;
                    case 4:
                        todo = -1; cout << "\033[33m";
                        if (re == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        re->change(); cout << "\033[0m"; break;
                    case 5:
                        todo = -1; cout << "\033[33m";
                        if (re == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Площадь фигуры: " << re->square() << endl; cout << "\033[0m"; break;
                    case 6:
                        todo = -1; cout << "\033[33m";
                        if (re == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Периметр фигуры: " << re->perimetr() << endl; cout << "\033[0m"; break;
                    case 7:
                        todo = -1; cout << "\033[33m";
                        if (re == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Радиус описанной окружности: " << re->op_rad() << endl; cout << "\033[0m"; break;
                    default:
                        cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << sel7 << sel0;
                        opt = -1; cin >> todo; break;
                }
            } while (todo); break;
            case 3:
            do {
                switch (todo){
                    case 1:
                        todo = -1; cout << "\033[33m";
                        if (rb == NULL) {
                            double a, b;
                            cout << "Введите сторону и угол (в градусах):\n";
                            cin >> a >> b;
                            Romb<double> tmp(a, b); rb = &tmp;
                        }
                        else cout << "Фигура уже существует\n";
                        cout << "\033[0m"; break;
                    case 2:
                        todo = -1; cout << "\033[33m";
                        if (rb != NULL) rb = nullptr;
                        else cout << "Фигуры не существует, нечего удалять\n";
                        cout << "\033[0m"; break;
                    case 3:
                        todo = -1; cout << "\033[33m";
                        if (rb == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        rb->show(); cout << "\033[0m"; break;
                    case 4:
                        todo = -1; cout << "\033[33m";
                        if (rb == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        rb->change(); cout << "\033[0m"; break;
                    case 5:
                        todo = -1; cout << "\033[33m";
                        if (rb == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Площадь фигуры: " << rb->square() << endl; cout << "\033[0m"; break;
                    case 6:
                        todo = -1; cout << "\033[33m";
                        if (rb == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Периметр фигуры: " << rb->perimetr() << endl; cout << "\033[0m"; break;
                    default:
                        cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << sel0;
                        opt = -1; cin >> todo; break;
                }
            } while (todo); break;
            case 4:
            do {
                switch (todo){
                    case 1:
                        todo = -1; cout << "\033[33m";
                        if (se == NULL) {
                            double a;
                            cout << "Введите сторону:\n";
                            cin >> a;
                            Square<double> tmp(a); se = &tmp;
                        } else cout << "Фигура уже существует\n";
                        cout << "\033[0m"; break;
                    case 2:
                        todo = -1; cout << "\033[33m";
                        if (se != NULL) se = nullptr;
                        else cout << "Фигуры не существует, нечего удалять\n";
                        cout << "\033[0m"; break;
                    case 3:
                        todo = -1; cout << "\033[33m";
                        if (se == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        se->show(); cout << "\033[0m"; break;
                    case 4:
                        todo = -1; cout << "\033[33m";
                        if (se == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        se->change(); cout << "\033[0m"; break;
                    case 5:
                        todo = -1; cout << "\033[33m";
                        if (se == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Площадь фигуры: " << se->square() << endl; cout << "\033[0m"; break;
                    case 6:
                        todo = -1; cout << "\033[33m";
                        if (se == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Периметр фигуры: " << se->perimetr() << endl; cout << "\033[0m"; break;
                    case 7:
                        todo = -1; cout << "\033[33m";
                        if (se == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Радиус описанной окружности: " << se->op_rad() << endl; cout << "\033[0m"; break;
                    case 8:
                        todo = -1; cout << "\033[33m";
                        if (se == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Радиус вписанной окружности: " << se->vp_rad() << endl; cout << "\033[0m"; break;
                    default:
                        cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << sel7 << sel8 << sel0;
                        opt = -1; cin >> todo; break;
                }
            } while (todo); break;
            case 5:
            do {
                switch (todo){
                    case 1:
                        todo = -1; cout << "\033[33m";
                        if (tz == NULL) {
                            double a, b, c;
                            cout << "Введите нижнее основание, верхнее основание и боковую сторону:\n";
                            cin >> a >> b >> c;
                            Trapez<double> tmp(a, b, c); tz = &tmp;
                        } else cout << "Фигура уже существует\n";
                        cout << "\033[0m"; break;
                    case 2:
                        todo = -1; cout << "\033[33m";
                        if (tz != NULL) tz = nullptr;
                        else cout << "Фигуры не существует, нечего удалять\n";
                        cout << "\033[0m"; break;
                    case 3:
                        todo = -1; cout << "\033[33m";
                        if (tz == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        tz->show(); cout << "\033[0m"; break;
                    case 4:
                        todo = -1; cout << "\033[33m";
                        if (tz == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        tz->change(); cout << "\033[0m"; break;
                    case 5:
                        todo = -1; cout << "\033[33m";
                        if (tz == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Площадь фигуры: " << tz->square() << endl; cout << "\033[0m"; break;
                    case 6:
                        todo = -1; cout << "\033[33m";
                        if (tz == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Периметр фигуры: " << tz->perimetr() << endl; cout << "\033[0m"; break;
                    case 7:
                        todo = -1; cout << "\033[33m";
                        if (tz == NULL) {
                            cout << "Сначала создайте фигуру\n"; cout << "\033[0m"; break;}
                        cout << "Угол при основании (в градусах): " << tz->angle() << "" << endl; cout << "\033[0m"; break;
                    default:
                        cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << selosn << sel0;
                        opt = -1; cin >> todo; cout << "\033[0m"; break;
                }
            } while (todo); break;
            case 0: exit(0);
            default:
                cout << "Выберите фигуру:\n";
                cout << "1: Четырёхугольник\n";
                cout << "2: Прямоугольник\n";
                cout << "3: Ромб\n";
                cout << "4: Квадрат\n";
                cout << "5: Трапеция\n";
                cout << "0: Выйти из программы\n";
                cin >> opt; todo = -1;
        }
    } while (run);
}
