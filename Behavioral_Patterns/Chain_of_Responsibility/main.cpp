#include "chain.h"

int main(int argv, char *argc[])
{
    ManagerPower        manager;
    VicePresidentPower  vicePresident;
    President           president;

    manager.setSuccessor(&vicePresident);
    vicePresident.setSuccessor(&president);

    manager.processRequest(PurchaseRequest(5,"General"));
    manager.processRequest(PurchaseRequest(60,"General"));
    manager.processRequest(PurchaseRequest(80,"General"));
    manager.processRequest(PurchaseRequest(200,"General"));


    return 0;
}
