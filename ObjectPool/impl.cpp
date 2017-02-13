#include "header.h"
#include "iostream"


ObjectPool::ObjectPool(int max):Max(max)
{
    for(int i = 0;i < Max ; i++)
    {
        vecs.push_back(ExpensiveObject(i));
        free_ids.push(&vecs[i]);
    }
}


bool ObjectPool::getObject(uref &object)
{
    if(free_ids.empty())
        return false;
    else
    {
        object = uref( free_ids.top() ,[](ExpensiveObject *ptr){ std::cout<<"Empty Called";  });

        free_ids.pop();

        return true;
    }
 }


void ObjectPool::release(ExpensiveObject *obj)
{
   free_ids.push(obj);
}
