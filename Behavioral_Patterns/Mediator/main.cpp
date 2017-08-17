#include <string>
#include <iostream>

class ChatRoom;

class User
{
public:
    User(const std::string &user):_user(user){}

    void sendMessage(std::string message);

    std::string getName(){
        return _user;
    }

private:
    std::string _user;

};

class ChatRoom
{
public:
    static void dispMessage(std::string str, User &user)
    {
        std::cout<<"\nMessage from "<<user.getName()<<'\t'<<str;
    }
};

int main()
{
    User user1("Johny");
    User user2("Mythili");

//    ChatRoom::dispMessage("Hello",user1);

    user1.sendMessage("Hi all");
    user2.sendMessage("Hi all");

    return 0;
}

void User::sendMessage(std::__cxx11::string message){
    ChatRoom::dispMessage(message, *this);
}
