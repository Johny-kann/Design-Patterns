#include <iostream>
#include "header.h"

using namespace std;

#define Out(x)  std::cout<<(x)

int main(int argc, char *argv[])
{
    ObjectPool pool(3);

    {
    uref ptr1, ptr2, ptr3, ptr4;

    bool error = pool.getObject(ptr1);
    error = pool.getObject(ptr2);
    error = pool.getObject(ptr3);

    ptr1.release();

    Out(error);
    }



    std::cout<<"Hello";



    return 0;
}
