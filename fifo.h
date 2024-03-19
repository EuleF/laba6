#ifndef LABA6_FIFO_H
#define LABA6_FIFO_H

#include <iostream>
#include "struct.h"

extern struct japanise *japan;

using namespace std;

struct nodef{
public:
    struct japanisen {
        string namen, componentsn, costn, caloriesn, squirrelsn, carbohydratesn, fatsn;
    }*valuen;
    nodef *prev;

public:
    nodef(japanise *value) {
        valuen = new japanisen;
        this->valuen->namen = value->name;
        this->valuen->componentsn = value->components;
        this->valuen->costn = value->cost;
        this->valuen->caloriesn = value->calories;
        this->valuen->squirrelsn = value->squirrels;
        this->valuen->carbohydratesn = value->carbohydrates;
        this->valuen->fatsn = value->fats;
        this->prev = nullptr;
    }
};

struct fifo{
public:
    nodef *head, *tail;

public:
    fifo() {
        head = tail = nullptr;
    }

    ~fifo() {
        while (head != nullptr) {
            pop();
        }
    }

    nodef *push(japanise *value) {
        nodef *ptr = new nodef(value);

        ptr->prev = head;
        if (tail == nullptr) {
            tail = ptr;
        }
        head = ptr;

        return ptr;
    }

    nodef *pop() {
        if (head == nullptr) return nullptr;

        nodef *ptr = head->prev;

        head->prev = nullptr;
        delete head;
        head = ptr;

        return ptr;
    }
};

extern fifo queue;
extern int i;

void out();
void clean();
void delfifo();
void pushn();

#endif //LABA6_FIFO_H