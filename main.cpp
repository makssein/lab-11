#include <iostream>
#include <classes.hpp>

int main() {
    myClasses::pressureSensor sensPres(12, 'pres');
    myClasses::temperatureSensor sensTemp(14, 'temp');
    sensPres.print();
    sensTemp.print();
    return 0;
}
