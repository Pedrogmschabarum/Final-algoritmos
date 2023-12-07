#include <iostream>
#include "lista.hpp"
#include "no.hpp"

lista::lista()
{
    tamanho = 0;
}
lista::~lista()
{
    delete this;
}
void lista::adicionar(int elemento)
{
    No *novo = new No();
    novo->valor = elemento;
    this->tamanho++;
    
    if (this->inicio == nullptr) {
        this->inicio = novo;
    } else {
        No* atual = this->inicio;
        while (atual->proximo != nullptr) {
            atual = atual->proximo;
        }
        atual->proximo = novo;
    }
}
void lista::adicionarInicio(int elemento)
{
    No *novo = new No();
    novo->valor = elemento;
    novo->proximo = this->inicio;
    this->inicio = novo;
    this->tamanho++;
}
void lista::adicionarPosicao(int elemento, int posicao)
{
    No* novo = new No;
    novo->valor = elemento;

    if (posicao == 0) {
        novo->proximo = this->inicio;
        this->inicio = novo;
        return;
    }

    No* anterior = nullptr;
    No* atual = this->inicio;
    for (int i = 0; i < posicao && atual != nullptr; i++) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (anterior != nullptr) {
        anterior->proximo = novo;
        novo->proximo = atual;
    }
}
void lista::remover()
{
    if (this->inicio != nullptr) {
        No* atual = this->inicio;
        No* anterior = nullptr;

        while (atual->proximo != nullptr) {
            anterior = atual;
            atual = atual->proximo;
        }

        if (anterior != nullptr) {
            anterior->proximo = nullptr;
            delete atual;
        } else {
            delete this->inicio;
            this->inicio = nullptr;
        }
    }
}

void lista::removerInicio()
{
    if (this->inicio != nullptr) {
        No* atual = this->inicio;
        No* anterior = nullptr;

        while (atual->proximo != nullptr) {
            anterior = atual;
            atual = atual->proximo;
        }

        if (anterior != nullptr) {
            anterior->proximo = nullptr;
            delete atual;
        } else {
            delete this->inicio;
            this->inicio = nullptr;
        }
    }
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
void lista::imprimirLista(){
    
    No* atual = this->inicio;
    
    while (atual != nullptr) {
        std::cout << atual->valor << " ";
        atual = atual->proximo;
    }
    
    std::cout << std::endl;
}

int lista::getTamanho(){
    
    return this->tamanho;
}