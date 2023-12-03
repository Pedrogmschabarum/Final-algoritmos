#pragma once
#include <iostream>
#include "no.hpp"

struct lista:No
{
    private:

    No *inicio;
    int tam;
    
    public:

    lista();
    ~lista();
    void adicionar(int);
    void adicionarInicio(lista*, int);
    void adicionarPosicao(int, int);
    void remover();
    void removerInicio();
    void retirarPosicao(int);
    void retirarNo(int);
    bool listaVazia();
    int encontrarPosicao(int);
    bool contem(int);
};