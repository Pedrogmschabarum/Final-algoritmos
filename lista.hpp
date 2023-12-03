#pragma once
#include <iostream>
#include "no.hpp"

struct lista:No
{
    public:

    No *inicio;
    int tamanho;
    
    public:

    lista();
    ~lista();
    void adicionar(int);
    void adicionarInicio(int);
    void adicionarPosicao(int, int);
    void remover();
    void removerInicio();
    // void retirarPosicao(int);
    // void retirarNo(int);
    // bool listaVazia();
    // int encontrarPosicao(int);
    // bool contem(int);
};