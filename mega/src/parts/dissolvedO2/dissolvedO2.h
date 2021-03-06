#ifndef dissolvedO2_h
#define dissolvedO2_h
// Dissolved Oxygen sensor
#include "Arduino.h"


// Declared dissolvedO2 class (initiate)
class dissolvedO2Class{
  public:
    //function
    dissolvedO2Class();
    void SETUP();
    float DISSOLVEDO2();
    void serialEvent();
    void serialEvent3();

    // variables
    String inputstring = "";                              //a string to hold incoming data from the PC
    String sensorstring = "";                             //a string to hold the data from the Atlas Scientific product
    boolean input_string_complete = false;                //have we received all the data from the PC
    boolean sensor_string_complete = false;               //have we received all the data from the Atlas Scientific product
    float DO;                                             //used to hold a floating point number that is the DO                                           //used to hold a floating point number that is the DO


};

extern dissolvedO2Class dissolvedO2;

#endif
