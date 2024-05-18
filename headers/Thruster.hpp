/*
Author: Sam Asbell
Date: 5/17/24
Purpose: Header file for T200 thruster abstraction
*/

#pragma once

#define ZERO_THRUST 1500
#define FORWARD_THRUST_BOUND 1900
#define REVERSE_THRUST_BOUND 1100
#define STEP 50

/*
    Thruster enum for our implementation - > 
    <FRONT|BACK><TOP|BOTTOM><LEFT|RIGHT>
*/
extern enum Thrusters_Orientation
{
    FTL, BTL, BTR, FTR, FTL, BBL, BBR, FBR
};

class Thruster {

    private:

        int gpioPin; // pin for thruster you will write to

    public:

        Thruster (int gpioPin);

        ~Thruster();

        void impart_thrust(int us, const Thruster & t);





};