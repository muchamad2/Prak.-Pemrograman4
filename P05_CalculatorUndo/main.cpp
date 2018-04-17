#include <iostream>
#include "Invoker.h"
using namespace std;

int main()
{
    Invoker *user = new Invoker();
    Operator *opp = new Operator();
    Command *cmd = new Command(opp,'+',5);
    user->Compute(cmd);
    cout<<opp->getCurrent();
    cmd = new Command(opp,'*',2);
    user->Compute(cmd);
    cout<<opp->getCurrent();
    user->Undo();
    cout<<opp->getCurrent();
    return 0;
}
