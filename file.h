#ifndef LABA6_FILE_H
#define LABA6_FILE_H

#include <iostream>
#include <fstream>
#include <filesystem>
#include "struct.h"

using namespace std;

extern struct japanise *japan;
extern int i;

void new_DB();
void remove_DB();
void clear();
void save_DB();
void load_DB();

#endif //LABA6_FILE_H
