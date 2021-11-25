#include <classes.hpp>

namespace myClasses{
    pressureSensor::pressureSensor(int address, char name) {
        srand(time(0));
        m_address = address;
        m_name = name;
        m_pressure = rand() % (816 - 642 + 1) + 642;
    }
    pressureSensor::~pressureSensor() {}
    std::tuple<char, int, float> pressureSensor::poll(){
        return {m_name, m_address, m_pressure};
    }

    float pressureSensor::print(){
        auto [name, address, pressure] = poll();
        std::cout << "Имя: " << name << "\nАдрес: " << address << "\nДавление: " << pressure << std::endl;
    }


    temperatureSensor::temperatureSensor(int address, char name) {
        srand(time(0));
        m_address = address;
        m_name = name;
        m_temperature = rand() % (100 - 0 + 1) + 100;
    }
    temperatureSensor::~temperatureSensor() {}

    std::tuple<char, int, float> temperatureSensor::poll(){
        return {m_name, m_address, m_temperature};
    }

    float temperatureSensor::print(){
        auto [name, address, temperature] = poll();
        std::cout << "Имя: " << name << "\nАдрес: " << address << "\nТемпература: " << temperature << std::endl;
    }
}