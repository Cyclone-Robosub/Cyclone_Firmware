/*
* Author: Sam Asbell
* Date: 5/17/24
* Purpose: Abstraction for entire sub's state. Will contain information pertaining to each thruster, gyroscope, etc.
*/

#pragma once
#include <Thruster.hpp>

#define NUM_THRUSTERS


class Sub
{
    public:

    private:
        Thruster thrusters[NUM_THRUSTERS]; // id is encoded into index
        

};