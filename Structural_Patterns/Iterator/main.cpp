#include "iter.h"
#include <iostream>

int main()
{
    NamedRepository repository;

    Iterator it = repository.getIterator();

    while(it.hasNext())
    {
        std::cout<<it.next()<<'\t';
    }



    return 0;
}
