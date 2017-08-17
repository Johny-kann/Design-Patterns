#include <iostream>
#include <string>
#include <vector>

class Memento
{
public:
    Memento(std::string state):state(state){}

    std::string getState(){
        return state;
    }

private:
    std::string state;
};


class Originator
{
public:
    Memento getMemento(){
        return Memento(state);
    }

    void getStateFromMementor(Memento memento){
        state = memento.getState();
    }

    void setState(std::string state){
        this->state = state;
    }

    std::string getState(){
        return state;
    }



private:
    std::string state;
};



class CareTaker
{
public:
    Memento get(int index){
        return _mementoList[index];
    }

    void add(Memento memento){
        _mementoList.push_back(memento);
    }

private:
    std::vector<Memento> _mementoList;
};


int main()
{
    Originator org;
    CareTaker careTaker;
    org.setState("One");
    org.setState("Two");


    careTaker.add(org.getMemento());

    std::cout<<"\n State "<<org.getState();

    org.setState("Three");
    careTaker.add(org.getMemento());
    std::cout<<"\n State "<<org.getState();
    org.setState("Four");
    org.setState("Five");
    careTaker.add(org.getMemento());
    std::cout<<"\n State "<<org.getState();

    org.setState("Six");
    std::cout<<"\n State "<<org.getState();
    org.getStateFromMementor(careTaker.get(1));
    std::cout<<"\n State "<<org.getState();



    return 0;
}
