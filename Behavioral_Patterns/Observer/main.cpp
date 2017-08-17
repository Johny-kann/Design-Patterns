#include "header.h"
#include <string>
#include <iostream>

class MyClass : public IButtonListener
{

    // IButtonListener interface
public:
    MyClass(std::string str):_message(str)
    {

    }

    void actionTriggered(){
        std::cout<<"\nHello from "<<_message;
    }

private:
    std::string _message;
};




int main()
{
    Button b1, b2;

    MyClass c1("Robo1"), c2("Robo2");
    MyClass c3("Human1"), c4("Human2");

    b1.addListener(&c1);
    b1.addListener(&c2);
    b2.addListener(&c3);
    b2.addListener(&c4);

    b1.click();
    b2.click();

    b2.click();


    return 0;
}
