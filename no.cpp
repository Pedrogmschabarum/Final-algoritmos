#include <iostream>
#include "no.hpp"

No::No(int v) : valor(v), proximo(nullptr) 
{
}
No::No() 
{
    this->valor = NULL;
}