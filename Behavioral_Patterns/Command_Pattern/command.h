#ifndef COMMAND_H
#define COMMAN_H


// Command Interface
class ICommand
{
public:
    virtual void execute() = 0;
};

//Receiver Object
class Light
{
public:
    void turnON();

    void turnOFF();
};


class FlipUpCommand : public ICommand
{
    // ICommand interface
public:
    FlipUpCommand(Light *light);
    void execute();

private:
    Light *_light;
};

class FlipDownCommand : public ICommand
{

    // ICommand interface
public:
    FlipDownCommand(Light *light);
    void execute();

private:
    Light *_light;
};


//Invoker
class Switch
{
public:
    Switch(ICommand &open, ICommand &close):_open(open),_close(close){}

    inline void turnON() {_open.execute();}
    inline void turnOFF(){_close.execute();}


private:
    ICommand&    _open;
    ICommand&    _close;
};



#endif

