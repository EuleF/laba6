#include "list.h"

void delet() {
    system("cls");

    lst.~list();
    cout << "#####Список удалён#####\n";
}

void addfront() {
    system("cls");

    str:
    string s;
    int num;
    cout << "Введите индекс элемнта структуры:\n";
    cin >> ws; getline(cin, s);
    try {
        num = stol(s);
    } catch (...) {
        system("cls");
        cout << "#####Неверная значение#####\n\n";
        goto str;
    }
    system("cls");

    if (num >= i) {
        system("cls");
        cout << "#####Структура по индексу отсутствует#####\n";
        return;
    }

    lst.push_front(&japan[num]);
    cout << "#####Элемент добавлен#####\n";
}

void add() {
    system("cls");

    ind:
    string s;
    int a;
    cout << "Введите индекс элемнта:\n";
    cin >> ws; getline(cin, s);
    try {
        a = stol(s);
    } catch (...) {
        system("cls");
        cout << "#####Неверная значение#####\n\n";
        goto ind;
    }
    system("cls");

    str:
    int num;
    cout << "Введите индекс элемeнта структуры:\n";
    cin >> ws; getline(cin, s);
    try {
        num = stol(s);
    } catch (...) {
        system("cls");
        cout << "#####Неверная значение#####\n\n";
        goto str;
    }

    if (num >= i) {
        system("cls");
        cout << "#####Структура по индексу отсутствует#####\n";
        return;
    }

    system("cls");
    lst.insert(a, &japan[num]);
    cout << "#####Элемент добавлен#####\n";
}

void deladd() {
    system("cls");

    del:
    string s;
    int a;
    cout << "Введите индекс элемнта:\n";
    cin >> ws; getline(cin, s);
    try {
        a = stol(s);
    } catch (...) {
        system("cls");
        cout << "#####Неверная значение#####\n\n";
        goto del;
    }
    system("cls");

    lst.dele(a);
    cout << "#####Элемент удалён#####\n";
}

void printlst() {
    system("cls");

    if (lst.head == nullptr) {
        cout << "#####Список пуст#####\n";
        return;
    }

    for (node *ptr = lst.tail; ptr != nullptr; ptr = ptr->next) {
        cout << "Имя: " << ptr->datan->namen << endl;
        cout << "Компоненты: " << ptr->datan->componentsn << endl;
        cout << "Стоимость: " << ptr->datan->costn << endl;
        cout << "Калории: " << ptr->datan->caloriesn << endl;
        cout << "Белки: " << ptr->datan->squirrelsn << endl;
        cout << "Углеводы: " << ptr->datan->carbohydratesn << endl;
        cout << "Жиры: " << ptr->datan->fatsn << "\n\n";
    }
    cout << endl;
    system("pause");
    system("cls");
}

void swaplst() {
    system("cls");

    str:
    string s;
    int str;
    cout << "Введите индекс элемнта 1:\n";
    cin >> ws; getline(cin, s);
    try {
        str = stol(s);
    } catch (...) {
        system("cls");
        cout << "#####Неверная значение#####\n\n";
        goto str;
    }
    system("cls");

    rts:
    int rts;
    cout << "Введите индекс элемнта 2:\n";
    cin >> ws; getline(cin, s);
    try {
        rts = stol(s);
    } catch (...) {
        system("cls");
        cout << "#####Неверная значение#####\n\n";
        goto rts;
    }
    system("cls");

    if (rts == str) {
        cout << "#####Индексы не могут быть одинаковыми#####\n";
        return;
    }

    lst.soup(str, rts);
    cout << "#####Элементы поменяны местами#####\n";
}