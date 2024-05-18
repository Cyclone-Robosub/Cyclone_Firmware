# Cyclone_Firmware
Firmware for Cyclone, containing interface between T200 thrusters and ROS control features (eventually)

Implements basic thruster abstraction

# .cyc files
Custom file extension for move commands.

See example cyc file for how to set up a set of move instructions

The format is:

ST <-- indicates the start of a move command set
END <-- indicates the end
<x> <y> <z> <r> <p> <y> <-- move command format


We could use these files as a buffer of sorts for move directions sent in by IP

# Deployment: 
Create a static executable which can be easily ran on the Rpi4

Will use CMake for this