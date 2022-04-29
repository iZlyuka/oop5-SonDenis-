#include "Header.h"	
#include<iostream>

using namespace std;

double* create(int a) {
    double* mas = new double[a];
    return mas;
    del(mas);
}

double* filling(int a) {
    srand(time(NULL));
    double* mass = create(a);
    for (int i = 0; i < a; i++) {
        mass[i] = rand();
    }
    return mass;
    del(mass);
}

void show(int a) {
    double* mass = filling(a);
    for (int i = 0; i < a; i++) {
        cout << mass[i] << "   ";
    }
    del(mass);
}

void del(double* mas) {
    delete[] mas;
}