#include "Pulseur.h"
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

Pulseur::Pulseur(uint8_t voltage, uint8_t frequence, uint8_t channel, uint8_t exponent)
:voltage_(voltage), frequence_(frequence), channel_(channel), exponent_(exponent)
{

}

Pulseur:: ~Pulseur(){

}

uint8_t Pulseur::getVolt() const 
{
    return voltage_;
}

uint8_t Pulseur::getFreq() const 
{
    return frequence_;
}

uint8_t Pulseur::getChannel() const 
{
    return channel_;
}

uint8_t Pulseur::getExponent() const 
{
    return exponent_;
}

void Pulseur::setVolt(uint8_t voltage)
{
    voltage_ = voltage;
}

void Pulseur::setFreq(uint8_t frequence) 
{
    frequence_ = frequence;
}

void Pulseur::setChannel(uint8_t channel)
{
    channel_ = channel;
}

void Pulseur::setExponent(uint8_t exponent)
{
    exponent_ = exponent;
}

void Pulseur::setPulse(vector<Value> pulseTab)
{
    for(uint8_t i = 0; i < pulseTab.size(); i++){

        pulseTab_.push_back(pulseTab[i]);

    }
}
void Pulseur::sendConfig(vector<uint8_t> data)
{
    data.push_back(channel_);
    data.push_back(voltage_);
    data.push_back(frequence_);
    data.push_back(exponent_);
    for(uint8_t i = 0; i < pulseTab_.size(); i++){

        data.push_back(pulseTab_[i]);
    }
    for(uint8_t j = 0; j < data.size(); j++){

        cout<<data[j]<<" ";
    }

}





