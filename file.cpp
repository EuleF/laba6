#include "file.h"

string namefile;

void new_DB() {
    system("cls");

    ofstream fl;
    cout << "Введите название файла: ";
    cin >> ws;
    getline(cin, namefile);
    fl.open(namefile + ".txt", ios_base::in);
    system("cls");
    if (!fl.is_open()) {// если файл не открыт
        fl.open(namefile + ".txt");
        cout << "#####Файл  создан#####\n";
    } else cout << "#####Файл не может быть создан!#####\n";
    fl.close();
}

void remove_DB() {
    system("cls");

    string remnamefile;
    cout << "Введите название файла на удаление: ";
    cin >> ws; getline(cin, remnamefile);
    system("cls");
    if (filesystem::remove(remnamefile + ".txt"))
        cout << "#####Файл удалён#####\n";
    else
        cout << "#####Файл не найден#####\n";
}

void clear() {
    system("cls");

    delete[] japan;
    i = 0;
    cout << "#####Массив очищен#####\n";
}

void save_DB() {
    system("cls");

    fstream fl;
    cout << "Введите название файла: ";
    cin >> ws; getline(cin, namefile);
    fl.open(namefile + ".txt", ios_base::in);
    system("cls");
    if (!fl.is_open()) {// если файл не открыт
        cout << "#####Файл не найден#####\n";
        return;
    }
    fl.close();
    fl.open(namefile + ".txt", ios_base::out | ios_base::trunc);
    for (int j = 0; j < i; j++) {
        fl << japan[j].name << endl;
        fl << japan[j].components << endl;
        fl << japan[j].cost << endl;
        fl << japan[j].calories << endl;
        fl << japan[j].squirrels << endl;
        fl << japan[j].carbohydrates << endl;
        fl << japan[j].fats << endl;
    }
    fl.close();
    cout << "#####Данные сохранены#####\n";
}

void load_DB() {
    system("cls");

    fstream fl;
    string line;
    i = 0;
    cout << "Введите название файла: ";
    cin >> ws;
    getline(cin, namefile);
    system("cls");
    fl.open(namefile + ".txt", ios_base::in);
    if (!fl.is_open()) {// если файл не открыт
        cout << "#####Файл не найден#####\n";
        return;
    }
    while (getline(fl, line)) i++;//i - количество строк в файле
    i = i / 7;//количество структур

    japan = new japanise[i];

    fl.close();
    fl.open(namefile + ".txt", ios_base::in);
    for (int j = 0; j < i; j++) {
        getline(fl, japan[j].name);
        getline(fl, japan[j].components);
        getline(fl, japan[j].cost);
        getline(fl, japan[j].calories);
        getline(fl, japan[j].squirrels);
        getline(fl, japan[j].carbohydrates);
        getline(fl, japan[j].fats);
    }
    fl.close();
    cout << "#####Данные загружены#####\n";
}