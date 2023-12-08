#pragma once
#include <iostream>

struct No
{
    int valor;
    No *proximo;

    No(int);
    No();
    ~No();
};