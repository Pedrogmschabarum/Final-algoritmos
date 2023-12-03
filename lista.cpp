#include <iostream>
#include "lista.hpp"
#include "no.hpp"

lista::lista()
{
    
}
lista::~lista()
{

}
void lista::adicionar(int valor)
{
    No *novo = new No();
    novo->valor = valor;
    this->tamanho++;
}
void lista::adicionarInicio(lista *lista, int valor)
{
    No *novo = new No();
    novo->valor = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tam++;
}
void lista::adicionarPosicao(int elemento, int posicao)
{
}
void lista::remover()
{
}
void lista::removerInicio()
{
}
void lista::retirarPosicao(int posicao)
{
}
void lista::retirarNo(int noh)
{
}
bool lista::listaVazia()
{
}
int lista::encontrarPosicao(int elemento)
{
}
bool lista::contem(int elemento)
{
}
