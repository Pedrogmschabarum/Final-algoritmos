#pragma once
#include iostream

protected:
    lista();
    ~lista();
    // definir o tipo dos parâmetros
    void adicionar();
    void adicionarInicio();
    void adicionarPosicão(int, int);
    void remover();
    void removerInicio();
    void retirarPosicao(int);
    void retirarNo(int);
    bool listaVazia();
    int encontrarPosicao(int);
    bool contem(int);