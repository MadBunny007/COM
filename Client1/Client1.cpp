
#include <iostream>
#include"..\Jio\Jio.h"
#include"..\Jio\Jiofactory.h"
#include"..\SIM\Sim.h"

int main()
{
    std::cout << "Hello World!\n";
    Sim* p = JIOFACTORY::getinstance();
    p->greet()
        ;
}
