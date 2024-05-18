#include <headers/Thruster.hpp>
// #include <wiringPi.h> // <-- PWM 
#include <iostream>

Thruster::Thruster(int gpioPin){
    this->gpioPin = gpioPin;
}

void Thruster::impart_thrust(int us, const Thruster & t)
{
    // Apply pwm signal to thruster 
    std::cout << "No one man should have all of that power " << STEP / 2 << std::endl;

}