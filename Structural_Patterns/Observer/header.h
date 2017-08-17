#ifndef OBSERVER_H
#define OBSERVER_H

#include <vector>

class IButtonListener
{
public:
    virtual void actionTriggered() = 0;
};


class Button
{
public:
    void click(){
        for(IButtonListener* &ptr : _listeners)
        {
             ptr->actionTriggered();
        }
    }

    inline void addListener(IButtonListener *listener){
        _listeners.push_back(listener);
    }

private:
    std::vector<IButtonListener*> _listeners;

};



#endif
