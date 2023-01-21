#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <stdlib.h>

Base *generate(void)
{
    srand(time(NULL));
    int r = rand() % 3;
    switch (r)
    {
    case 0:
        return new A;
        break;
    case 1:
        return new B;
        break;
    case 2:
        return new C;
        break;
    default:
        return NULL;
        break;
    }
}
int main(){
    return (0);
}