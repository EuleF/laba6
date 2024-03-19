#include "menu.h"

void menu() {
    cout << "Введите 0 для выхода." << endl;
    cout << "Введите 1 для ввода данных." << endl;
    cout << "Введите 2 для вывода данных." << endl;
    cout << "Введите 3 для вывода данных в виде таблицы.\n\n";

    cout << "Введите 4 для создания файла." << endl;
    cout << "Введите 5 для удаления файла." << endl;
    cout << "Введите 6 для очищения массива." << endl;
    cout << "Введите 7 для сохранения данных в файл." << endl;
    cout << "Введите 8 для загрузки данных из файла в массив." << "\n\n";

    cout << "Введите 9 для удаления списка." << endl;
    cout << "Введите 10 для добавления элемнта в список." << endl;
    cout << "Введите 11 для добавления элемнта в начало списка." << endl;
    cout << "Введите 12 для удаления элемента из списка." << endl;
    cout << "Введите 13 для печати списка." << endl;
    cout << "Введитe 14 для перестановки двух элементов местами" << "\n\n";

    cout << "Введите 15 для удаления очереди." << endl;
    cout << "Введите 16 для добавления элемента в очередь." << endl;
    cout << "Введите 17 для удаления элемента из очереди." << endl;
    cout << "Введите 18 для печати очереди." << endl;

    string s;
    int a;
    cin >> ws; getline(cin, s);
    try {
        a = stol(s);
    } catch (...) {
        system("cls");
        cout << "#####Неверная команда#####\n\n";
        return;
    }


    switch (a) {
        case(0): exit(0);
        case(1): input(); break;
        case(2): output(); break;
        case(3): outputtablet(); break;
        case(4): new_DB(); break;
        case(5): remove_DB(); break;
        case(6): clear(); break;
        case(7): save_DB(); break;
        case(8): load_DB(); break;
        case(9): delet(); break;
        case(10): add(); break;
        case(11): addfront(); break;
        case(12): deladd(); break;
        case(13): printlst(); break;
        case(14): swaplst(); break;
        case(15): clean(); break;
        case(16): pushn(); break;
        case(17): delfifo(); break;
        case(18): out(); break;
        default: {system("cls"); cout << "#####Неверная команда#####\n\n";}
    }
}