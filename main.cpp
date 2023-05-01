#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>

#include "Quadrangle.hpp"

#define creat "Вы хотите создать \n1: Четырёхугольник \n2: Прямоугольник \n3:\
Ромб \n4: Квадрат \n5: Равнобокую трапечию \n0: Я передумал\n"
#define prd "Представление сторон четырёхугольника: \n     d\n  +-----+  \na \
|    | c\n  +-----+  \n     b\n"
#define sel "Выберите действие\n"
#define sel1 "1: Создать фигуру\n"
#define sel2 "2: Удалить фигуру\n"
#define sel3 "3: Показать стороны\n"
#define sel4 "4: Изменить стороны фигуры\n"
#define sel5 "5: Вывести площадь фигуры"
#define sel6 "6: Вывести периметр\n"
#define sel7 "7: Вывести радиус описанной окружности\n"
#define sel8 "8: Вывести радиус вписанной окружности\n"
#define selosn "7: Вывести угол при основании\n"
#define sel0 "0: Выйти в меню\n"

using namespace std;
int main() {
    Quadrangle<int> a(2,2,2,2);
    printf(prd);
    int run = 1, opt = -1, todo = -1;
    Quadrangle<double> *qe; Rectangle<double>  *re;
    Romb<double>  *rb; Square<double>  *se; Trapez<double>  *tz;
    switch (opt){
        case 1:
            switch (todo){
                case 1:
                    if (qe == NULL) {
                        double a, b, c, d;
                        cout << "Введите стороны четырёхугольника:\n";
                        cin >> a >> b >> c >> d;
                        Quadrangle<double> tmp(a, b, c, d); qe = &tmp;
                    } else cout << "Фигура уже существует\n";
                    todo = -1; break;
                case 2:
                    todo = -1; 
                    if (qe != NULL) delete[] qe;
                    else cout << "Фигуры не существует, нечего удалять\n";
                    break;
                case 4:
                    todo = -1; 
                    if (qe == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    qe->change(); break;
                case 3:
                    todo = -1; 
                    if (qe == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    qe->show(); break;
                case 5:
                    todo = -1; 
                    if (qe == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Площадь фигуры: " << qe->square() << endl; break;
                case 6:
                    todo = -1; 
                    if (qe == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Периметр фигуры: " << qe->perimetr() << endl; break;
                default:
                    cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << sel0;
                    opt = -1; break;
            }
        case 2:
            switch (todo){
                case 1:
                    todo = -1; 
                    if (re == NULL) {
                        double a, b;
                        cout << "Введите длину и ширину проямоугольника:\n";
                        Rectangle<double> tmp(a, b); re = &tmp;
                    } else cout << "Фигура уже существует\n";
                    break;
                case 2:
                    todo = -1; 
                    if (re != NULL) delete[] re;
                    else cout << "Фигуры не существует, нечего удалять\n";
                    break;
                case 3:
                    todo = -1; 
                    if (re == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    re->show(); break;
                case 4:
                    todo = -1; 
                    if (re == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    re->change(); break;
                case 5:
                    todo = -1; 
                    if (re == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Площадь фигуры: " << re->square() << endl; break;
                case 6:
                    todo = -1; 
                    if (re == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Периметр фигуры: " << re->perimetr() << endl; break;
                case 7:
                    todo = -1; 
                    if (re == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Радиус описанной окружности: " << re->op_rad() << endl; break;
                default:
                    cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << sel7 << sel0;
                    opt = -1; break;
            }
        case 3:
            switch (todo){
                case 1:
                    todo = -1; 
                    if (rb == NULL) {
                        double a, b;
                        cout << "Введите сторону и угол\n";
                        cin >> a >> b;
                        Romb<double> tmp(a, b); rb = &tmp;
                    }
                    else cout << "Фигура уже существует\n";
                    break;
                case 2:
                    todo = -1; 
                    if (rb != NULL) delete[] rb;
                    else cout << "Фигуры не существует, нечего удалять\n";
                    break;
                case 3:
                    todo = -1; 
                    if (rb == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    rb->show(); break;
                case 4:
                    todo = -1; 
                    if (rb == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    rb->change(); break;
                case 5:
                    todo = -1; 
                    if (rb == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Площадь фигуры: " << rb->square() << endl; break;
                case 6:
                    todo = -1; 
                    if (rb == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Периметр фигуры: " << rb->perimetr() << endl; break;
                default:
                    cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << sel0;
                    opt = -1; break;
            }
        case 4:
            switch (todo){
                case 1:
                    todo = -1; 
                    if (se == NULL) {
                        double a;
                        cout << "Введите сторону:\n";
                        cin >> a;
                        Square<double> tmp(a); se = &tmp;
                    } else cout << "Фигура уже существует\n";
                    break;
                case 2:
                    todo = -1; 
                    if (se != NULL) delete[] se;
                    else cout << "Фигуры не существует, нечего удалять\n";
                    break;
                case 3:
                    todo = -1; 
                    if (se == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    se->show(); break;
                case 4:
                    todo = -1; 
                    if (se == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    se->change(); break;
                case 5:
                    todo = -1; 
                    if (se == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Площадь фигуры: " << se->square() << endl; break;
                case 6:
                    todo = -1; 
                    if (se == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Периметр фигуры: " << se->perimetr() << endl; break;
                case 7:
                    todo = -1; 
                    if (se == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Радиус описанной окружности: " << se->op_rad() << endl; break;
                case 8:
                    todo = -1; 
                    if (se == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Радиус вписанной окружности: " << se->vp_rad() << endl; break;
                default:
                    cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << sel7 << sel8 << sel0;
                    opt = -1; break;
            }
        case 5:
            switch (todo){
                case 1:
                    todo = -1; 
                    if (tz == NULL) {
                        double a, b, c;
                        cout << "Введите нижнее основание, верхнее основание и боковую сторону:\n";
                        cin >> a >> b >> c;
                        Trapez<double> tmp(a, b, c); tz = &tmp;
                    } else cout << "Фигура уже существует\n";
                    break;
                case 2:
                    todo = -1; 
                    if (tz != NULL) delete[] tz;
                    else cout << "Фигуры не существует, нечего удалять\n";
                    break;
                case 3:
                    todo = -1; 
                    if (tz == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    tz->show(); break;
                case 4:
                    todo = -1; 
                    if (tz == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    tz->change(); break;
                case 5:
                    todo = -1; 
                    if (tz == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Площадь фигуры: " << tz->square() << endl; break;
                case 6:
                    todo = -1; 
                    if (tz == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Периметр фигуры: " << tz->perimetr() << endl; break;
                case 7:
                    todo = -1; 
                    if (tz == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << "Угол при основании: " << tz->osn() << "" << endl; break;
                default:
                    if (tz == NULL) {
                        cout << "Сначала создайте фигуру\n"; break;}
                    cout << sel << sel1 << sel2 << sel3 << sel4 << sel5 << sel6 << selosn << sel0;
                    opt = -1; break;
            }
        default:
            cout << "Выберите фигуру:\n";
            cout << "1: Четырёхугольник\n";
            cout << "2: Прямоугольник\n";
            cout << "3: Ромб\n";
            cout << "4: Квадрат\n";
            cout << "5: Трапеция\n";
            cout << "0: Выйти из программы\n";
            todo = -1; break;
    }
}
