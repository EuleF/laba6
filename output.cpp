#include "output.h"

void output() {
    system("cls");
    for (int j = 0; j < i; ++j) {
        cout << "Имя: " << japan[j].name << endl;
        cout << "Компоненты: " << japan[j].components << endl;
        cout << "Стоимость: " << japan[j].cost << endl;
        cout << "Калории: " << japan[j].calories << endl;
        cout << "Белки: " << japan[j].squirrels << endl;
        cout << "Углеводы: " << japan[j].carbohydrates << endl;
        cout << "Жиры: " << japan[j].fats << "\n\n";
    }
    system("pause");
    system("cls");
}

void outputtablet() {
    int maxlen = 0;
    system("cls");
    int maxname = 4, maxcomponents = 10, maxcost = 4, maxcalories = 8, maxsquirrels = 9, maxcarbohydrates = 13, maxfats = 4; //максимальные длины строк

    for (int t = 0; t < i; t++) {
        if (japan[t].name.size() > maxname)//максимальная длина строки name
            maxname = japan[t].name.size();

        if (japan[t].components.size() > maxname)//максимальная длина строки components
            maxcomponents = japan[t].components.size();

        if (japan[t].cost.size() > maxcost) //максимальная длина строки cost
            maxcost = japan[t].cost.size();

        if (japan[t].calories.size() > maxcalories) //максимальная длина строки calories
            maxcalories = japan[t].calories.size();

        if (japan[t].squirrels.size() > maxsquirrels) //максимальная длина строки squirrels
            maxsquirrels = japan[t].squirrels.size();

        if (japan[t].carbohydrates.size() > maxcarbohydrates) //максимальная длина строки carbohydrates
            maxcarbohydrates = japan[t].carbohydrates.size();

        if (japan[t].fats.size() > maxfats) //максимальная длина строки fats
            maxfats = japan[t].fats.size();
    }

    maxlen = maxname + maxcomponents + maxcost + maxcalories + maxsquirrels + maxcarbohydrates + maxfats;

    cout << '#' << setw(maxlen + 7) << setfill('=') << '#' << "\n" << setfill(' ');//верхняя граница таблицы
    cout << '#' << setw(maxname) << "Name" << '|' << setw(maxcomponents) << "Components" << '|' << setw(maxcost) << "Cost" << '|' << setw(maxcalories) << "Calories" << '|' << setw(maxsquirrels) << "Squirrels" << '|' << setw(maxcarbohydrates) << "Carbohydrates" << '|' << setw(maxfats) << "Fats" << '#' << endl;//шапка таблицы
    cout << '#' << setw(maxlen + 7) << setfill('=') << '#' << "\n" << setfill(' ');//нижняя граница шапки
    for (int j = 0; j < i; ++j) {
        cout << '#' << setw(maxname) << japan[j].name << '|' << setw(maxcomponents) << japan[j].components << '|' << setw(maxcost) << japan[j].cost << '|' << setw(maxcalories) << japan[j].calories << '|' << setw(maxsquirrels) << japan[j].squirrels << '|' << setw(maxcarbohydrates) << japan[j].carbohydrates << '|' << setw(maxfats) << japan[j].fats << '#' << endl;//вывод переменных по максимальной длине
        cout << '#' << setw(maxlen + 7) << setfill('=') << '#' << "\n" << setfill(' ');//разделитель строк/нижняя граница таблицы
    }
    system("pause");
    system("cls");
}