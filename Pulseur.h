#ifndef PULSEUR_H
#define PULSEUR_H

#include <iostream>
#include <vector>
using namespace std;

class Pulseur
{
    public : 


    enum Value{
        H = 0b10,
        L = 0b01,
        Z = 0b00
    };


    Pulseur(uint8_t voltage = 0, uint8_t frequence = 0, uint8_t channel = 0, uint8_t exponent = 0);
    ~Pulseur();
    uint8_t getVolt() const;
    uint8_t getFreq() const;
    uint8_t getChannel() const;
    uint8_t getExponent() const;


    void setVolt(uint8_t voltage);
    void setFreq(uint8_t frequence);
    void setChannel(uint8_t channel);
    void setExponent(uint8_t exponent);
    void setPulse (vector<Value> pulseTab);
    void sendConfig(vector<uint8_t> data); 



    private : 
    uint8_t voltage_;
    uint8_t frequence_;
    uint8_t channel_;
    uint8_t exponent_;
    vector<Value> pulseTab_;


};

#endif