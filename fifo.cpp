#include "fifo.h"

void clean() {
    system("cls");
    queue.~fifo();
    cout << "#####Очередь очищена#####\n";
}

void delfifo() {
    system("cls");
    if (queue.pop() == nullptr) {
        cout << "#####Очередь пустая#####\n";
    } else {
        cout << "#####Элемент удалён#####\n";
    }


}

void out() {
    system("cls");

    if (queue.head == nullptr) {
        cout << "#####Список пуст#####\n";
        return;
    }

    for (nodef *ptr = queue.head; ptr != nullptr; ptr = ptr->prev) {
        cout << "Имя: " << ptr->valuen->namen << endl;
        cout << "Компоненты: " << ptr->valuen->componentsn << endl;
        cout << "Стоимость: " << ptr->valuen->costn << endl;
        cout << "Калории: " << ptr->valuen->caloriesn << endl;
        cout << "Белки: " << ptr->valuen->squirrelsn << endl;
        cout << "Углеводы: " << ptr->valuen->carbohydratesn << endl;
        cout << "Жиры: " << ptr->valuen->fatsn << "\n\n";
    }
    cout << endl;
    system("pause");
    system("cls");
}

void pushn() {
    system("cls");

    sup:
    string str;
    int num;
    cout << "Введите индекс структуры:\n";
    cin >> ws; getline(cin, str);

    try {
        num = stol(str);
    } catch(...) {
        system("cls");
        cout << "#####Неверное значение#####\n";
        system("pause");
        goto sup;
    }

    if (num >= i) {
        system("cls");
        cout << "#####Структура по индексу отсутствует#####\n";
        return;
    }
    system("cls");

    queue.push(&japan[num]);
    cout << "#####Элемент добавлен#####\n";
}