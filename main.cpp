#include <windows.h>
#include "menu.h"

int i = 0;
list lst;
fifo queue;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    while(true) {
        menu();
    }
}