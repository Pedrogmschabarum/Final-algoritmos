#pragma once
#include <iostream>
#include "no.hpp"

struct lista
{
    No *inicio;
    int tam;

    lista();
    ~lista();
    // definir o tipo dos parâmetros
    void adicionar();
    void adicionarInicio(lista, int);
    void adicionarPosicao(int, int);
    void remover();
    void removerInicio();
    void retirarPosicao(int);
    void retirarNo(int);
    bool listaVazia();
    int encontrarPosicao(int);
    bool contem(int);
};