/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   prevodySoustav.cpp
 * Author: ucitel
 * 
 * Created on 3. dubna 2020, 12:40
 */

#include "SOUSTAVA.hpp"
#include <cmath>
#include <algorithm>

Soustava::Soustava() {
    this->cislo = 0;
}

Soustava::Soustava(const Soustava& orig) {
    this->cislo = this->prevodDoDec(orig.getCislo(10),10);
}

Soustava::Soustava(string cislo,int Soustava){
    if(kontrolaCisla(Soustava, cislo)){
        this->cislo = prevodDoDec(cislo,Soustava);
    }
    else
        this->cislo = 0;
}

string Soustava::prevodSoustav(int cislo, int Soustava) const{
    string zbytek = "";
    if(cislo == 0)
        return "0";
    while(cislo > 0){
        zbytek += vraceniCifry(cislo % Soustava);
        cislo /= Soustava;
    }
    std::reverse(zbytek.begin(), zbytek.end());
    return zbytek;
}


int Soustava::prevodDoDec(string cislo, int Soustava) const{
    int dec = 0;
    for(int i = 0; i <cislo.length();i++){
        dec += pozice(cislo.substr(i, 1)) * (int)pow(Soustava, cislo.length() - i - 1);
    }
    return dec;
}



string Soustava::getCislo(int Soustava) const{
  return prevodSoustav(this->cislo, Soustava);  
}

bool Soustava::kontrolaSoustavy(int Soustava) const{
    return (Soustava >= 2 && Soustava <= 16);
}



bool Soustava::setCislo(string cislo, int Soustava){
    if(kontrolaCisla(Soustava,cislo)){
        this->cislo = prevodDoDec(cislo, Soustava);
        return true;
    }
    else
        return false;
}


int Soustava::pozice(string cifra) const{
    string cifry = "0123456789ABCDEF";
    return cifry.find(cifra);
}

string Soustava::vraceniCifry(int index) const{
    string cifry = "0123456789ABCDEF";
    return cifry.substr(index, 1);
}

Soustava::~Soustava() {
}