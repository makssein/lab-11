#pragma once
#include <iostream>

namespace myClasses{
    class pressureSensor{
    public:
        pressureSensor(int address, char name);
        ~pressureSensor();
        std::tuple<char, int, float> poll();
        float print();
    private:
        int m_address;
        char m_name;
        float m_pressure{};
    };

    class temperatureSensor{
    public:
        temperatureSensor(int address, char name);
        ~temperatureSensor();
        std::tuple<char, int, float> poll();
        float print();
    private:
        int m_address;
        char m_name;
        float m_temperature;
    };
}