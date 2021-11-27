#pragma once
#include <iostream>

namespace myClasses{
    class DevisePDPT{
    public:
        DevisePDPT(std::string name, int address);
        ~DevisePDPT();
        void poll();
        float print();
    private:
        std::string m_name;
        int m_address;
        float m_temp, m_pres;
    };
}