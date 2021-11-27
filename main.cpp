#include <iostream>
#include <classes.hpp>
#include <vector>

int main() {
    std::vector<myClasses::DevisePDPT*> mas;

    myClasses::DevisePDPT* dev = new myClasses::DevisePDPT("test1",  1);
    mas.push_back(dev);

    dev = new myClasses::DevisePDPT("test2", 2);
    mas.push_back(dev);

    for(const auto& device : mas){
        device->poll();
        device->print();
    }
    for(int i = 0; i < mas.size(); i++){
        delete mas[i];
    }
    return 0;
}
