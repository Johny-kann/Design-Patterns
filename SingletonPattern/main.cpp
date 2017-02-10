#include <iostream>

using namespace std;

int count = 0;

class SingleTon
{
private:
    SingleTon()
    {

    }
    SingleTon &operator=(SingleTon const &copy);
    SingleTon &operator=(SingleTon &copy);

    static SingleTon *instance;

    int i;



 public:
    static SingleTon *getInstance()
    {

        if(instance == nullptr)
        {
            instance = new SingleTon();
        }

        instance->i = count;
       count++;
       return instance;
    }

    void display()
    {
        std::cout<<"Display "<<i;
    }



};

SingleTon *SingleTon::instance = nullptr;


int main(int argc, char *argv[])
{

    SingleTon *ton = SingleTon::getInstance();

    SingleTon *ton2 = SingleTon::getInstance();

    ton->display();
    ton2->display();


    return 0;
}
