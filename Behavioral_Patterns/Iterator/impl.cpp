#include "iter.h"


bool Iterator::hasNext()
{
    if(index < repository->names.size())
    {
        return true;
    }else
    {
        return false;
    }
}

std::__cxx11::string Iterator::next()
{
    return repository->names[index++];
}


Iterator NamedRepository::getIterator()
{
    return Iterator(this);
}
