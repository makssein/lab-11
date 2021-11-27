#include <iostream>
#include <classes.hpp>
#include <vector>

int main() {
    std::vector<myClasses::DevisePDPT*> mas;

    myClasses::DevisePDPT* dev = new myClasses::DevisePDPT("test1",  1);
    mas.push_back(dev);

    dev = new myClasses::DevisePDPT("test2", 2);
    mas.push_back(dev);

    for(auto device : mas){
        device->poll();
        device->print();
    }
    mas.clear();
    return 0;
}
