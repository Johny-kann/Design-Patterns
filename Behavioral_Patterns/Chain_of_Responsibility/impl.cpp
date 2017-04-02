#include "chain.h"
#include <iostream>

const double PurchasePower::base = 5;

double PurchaseRequest::amount() const
{
return _amount;
}

void PurchaseRequest::setAmount(double amount)
{
_amount = amount;
}

std::string PurchaseRequest::purpose() const
{
return _purpose;
}

void PurchaseRequest::setPurpose(const std::string &purpose)
{
_purpose = purpose;
}


double ManagerPower::getAllowable()
{
    return base * 10;
}

std::__cxx11::string ManagerPower::getRole()
{
    return "Manager";
}

double VicePresidentPower::getAllowable()
{
    return base * 30;
}

std::__cxx11::string VicePresidentPower::getRole()
{
    return "Vice President";
}

double President::getAllowable()
{
    return base * 50;
}

std::__cxx11::string President::getRole()
{
    return "President";
}



void PurchasePower::processRequest(const PurchaseRequest &request)
{
    if(request.amount() < this->getAllowable())
    {
        std::cout<<this->getRole()<<" approved "<<request.amount()<<" amount ";
    }
    else if(this->successor != nullptr)
    {
        this->successor->processRequest(request);
    }

}
