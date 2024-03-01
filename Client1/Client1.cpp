
#include <iostream>
//#include"..\Jio\Jio.h"
#include"factory.h"
//#include"..\Airtel\Airtel.h"

int main()
{
   /* std::cout << "Hello World!\n";
    Sim* p = FACTORY::getinstance();
    p->greet();
        */

    /*Airtel obj1;
    obj1.greet();*/

    ICalculator* pcal = FACTORY::getCalculator();
    pcal->add();
    IMobile* pmob = FACTORY::getMobile();
    pmob->makeCall();
    ICalculator* pc = (ICalculator*)pmob;
    pc->add();
    /*IMobile* pcal = FACTORY::getMobile();
    pcal->makeCall();*/
}
