#ifndef LABA6_LIST_H
#define LABA6_LIST_H

#include <iostream>
#include "struct.h"

using namespace std;

extern struct japanise *japan;

struct node {
public:
    struct japanisen {
        string namen, componentsn, costn, caloriesn, squirrelsn, carbohydratesn, fatsn;
    }*datan;
    node *next, *prev;

public:
    node(japanise *data) {
        datan = new japanisen;
        this->datan->namen = data->name;
        this->datan->componentsn = data->components;
        this->datan->costn = data->cost;
        this->datan->caloriesn = data->calories;
        this->datan->squirrelsn = data->squirrels;
        this->datan->carbohydratesn = data->carbohydrates;
        this->datan->fatsn = data->fats;
        this->next = this->prev = nullptr;
    }
};

struct list {
public:
    node *head, *tail;

public:
    list() {
        head = tail = nullptr;
    }

    ~list() {
        while (head != nullptr)
            pop_front();
    }
    node* push_front(japanise *data) {
        node *ptr = new node(data);

        ptr->prev = head;
        if (head != nullptr)
            head->next = ptr;
        if (tail == nullptr)
            tail = ptr;
        head = ptr;

        return ptr;
    }

    node* push_back(japanise *data) {
        node *ptr = new node(data);

        ptr->next = tail;
        if (tail != nullptr)
            tail->prev = ptr;
        if (head == nullptr)
            head = ptr;
        tail = ptr;

        return ptr;
    }

    void pop_front() {
        if (head == nullptr) return;

        node *ptr = head->prev;
        if (ptr != nullptr)
            ptr->next = nullptr;
        else
            tail = nullptr;

        delete head;
        head = ptr;
    }

    void pop_back() {
        if (tail == nullptr) return;

        node *ptr = tail->next;
        if (ptr != nullptr)
            ptr->prev = nullptr;
        else
            head = nullptr;

        delete tail;
        tail = ptr;
    }

    node* claim(int index) {
        int n = 0;
        node *ptr = tail;

        while (n != index) {
            if (ptr == nullptr) return ptr;
            ptr = ptr->next;
            n++;
        }

        return ptr;
    }

    node* insert(int index, japanise *data) {
        node *right = claim(index);
        if (right == nullptr)
            return push_front(data);

        node *left = right->prev;
        if (left == nullptr)
            return push_back(data);

        node *ptr = new node(data);

        ptr->next = right;
        ptr->prev = left;
        right->prev = ptr;
        left->next = ptr;

        return ptr;
    }

    void dele(int index) {
        node* ptr = claim(index);
        if (ptr == nullptr) return;

        if (ptr->prev == nullptr){
            pop_back();
            return;
        }
        if (ptr->next == nullptr){
            pop_front();
            return;
        }

        node *right = ptr->next;
        node *left = ptr->prev;
        left->next = right;
        right->prev = left;

        delete ptr;
    }

    void soup(int index1, int index2) {
        if (index1 > index2)
            swap(index1, index2);

        node *ptr1 = claim(index1);
        node *ptr2 = claim(index2);
        if (ptr1 == nullptr) return;
        if (ptr2 == nullptr) return;

        node *right1 = ptr1->next;
        node *left1 = ptr1->prev;
        node *right2 = ptr2->next;
        node *left2 = ptr2->prev;

        ptr1->next = right2;
        ptr2->prev = left1;

        if (ptr2 == head)
            head = ptr1;
        if (ptr1 == tail)
            tail = ptr2;

        if (index1 + 1 == index2) {
            ptr1->prev = ptr2;
            ptr2->next = ptr1;
        } else {
            right1->prev = ptr2;
            left2->next = ptr1;
            ptr1->prev = left2;
            ptr2->next = right1;
        }

    }
};

extern list lst;
extern int i;

void delet();
void add();
void deladd();
void printlst();
void addfront();
void swaplst();

#endif //LABA6_LIST_H
