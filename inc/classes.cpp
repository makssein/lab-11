#include <classes.hpp>

namespace myClasses{
    DevisePDPT::DevisePDPT(std::string name, int address) {
        m_name = name;
        m_address = address;
        m_pres = 0;
        m_temp = 0;
    }
    DevisePDPT::~DevisePDPT() {}
    void DevisePDPT::poll(){
        srand(time(0));
        if (m_address == 1){
            m_temp = rand() % (200 - 0 + 1) + 100;
            m_pres = rand() % (750 - 680 + 1) + 680;
        } else if (m_address == 2){
            m_temp = rand() % (200 - 0 + 1) + 100;
            m_pres = rand() % (750 - 680 + 1) + 680;
        }
    }
    float DevisePDPT::print(){
        std::cout << "Имя: " << m_name << "\nАдрес: " << m_address << "\nДавление: " << m_pres << "\nТемпература: " << m_temp << std::endl;
    }
}