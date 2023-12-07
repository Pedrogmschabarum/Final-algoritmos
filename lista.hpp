#pragma once
#include <iostream>
#include "no.hpp"

struct lista
{
    private:

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
    void retirarPosicao(int);
    void retirarNo(int);
    void imprimirLista();
    void destruir();
    int getTamanho();
    int encontrarPosicao(int);
    bool listaVazia();
    bool contem(int);
};