/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   prevody.hpp
 * Author: ucitel
 *
 * Created on 3. dubna 2020, 12:40
 */

#ifndef SOUSTAVA_HPP
#define SOUSTAVA_HPP
#include <string>
using std::string;

class Soustava {
public:
    Soustava();
    Soustava(const Soustava& orig);
    Soustava(string, int);
    bool setCislo(string,int);
    string getCislo(int) const;
    virtual ~Soustava();
private:
    int cislo;
    int prevodDoDec(string, int)const;
    string prevodSoustav(int,int)const;
    bool kontrolaSoustavy(int)const;
    bool kontrolaCisla(int,string)const;
    string vraceniCifry(int)const;
    int pozice(string)const;
};

#endif /* SOUSTAVA_HPP */


