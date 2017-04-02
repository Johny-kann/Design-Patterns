#ifndef CHAIN_H
#define CHAIN_H


#include <string>


class PurchaseRequest
{
public:
    PurchaseRequest(double amount, std::string purpose):_amount(amount),_purpose(purpose){}

    double amount() const;
    void setAmount(double amount);

    std::string purpose() const;
    void setPurpose(const std::string &purpose);

private:
    double          _amount;
    std::string     _purpose;
};


class PurchasePower
{
public:
    void setSuccessor(PurchasePower *successor){ this->successor = successor; }

    void processRequest(const PurchaseRequest &request);


protected:
    static const double base;// = 500.0;
    PurchasePower*   successor;

    virtual double getAllowable() = 0;
    virtual std::string getRole() = 0;


};

class ManagerPower : public PurchasePower
{
public:


    // PurchasePower interface
protected:
    double getAllowable();
    std::__cxx11::string getRole();
};


class VicePresidentPower : public PurchasePower
{
public:


    // PurchasePower interface
protected:
    double getAllowable();
    std::__cxx11::string getRole();
};


class President : public PurchasePower
{
public:


    // PurchasePower interface
protected:
    double getAllowable();
    std::__cxx11::string getRole();
};




#endif

