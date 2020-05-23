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


#include <cstdlib>
#include <iostream>
#include "SOUSTAVA.hpp"

using namespace std;


int main(int argc, char** argv) {
    string cislo;
    int soustava;
    Soustava s1;
    Soustava s2("FF", 16);
    Soustava s3(s1);
    Soustava s4(s2);
    cout << "Objekt vytvoreny konstruktorem s parametrem"<<endl;
    cout << "-------------------------------------------"<<endl;
    cout<<"Cislo v dvojkove soustave:"<<s2.getCislo(2)<<endl;
    cout<<"Cislo v desitkove soustave:"<<s2.getCislo(10)<<endl;
    cout<<"Cislo v sestnactkove soustave:"<<s2.getCislo(16)<<endl;
    cout<<"Cislo v osmickove soustave:"<<s2.getCislo(8)<<endl;
    cout << endl;
    cout << "Objekt vytvoreny kopirovacim konstruktorem"<<endl;
    cout << "------------------------------------------"<<endl;
    cout<<"Cislo v dvojkove soustave:"<<s4.getCislo(2)<<endl;
    cout<<"Cislo v desitkove soustave:"<<s4.getCislo(10)<<endl;
    cout<<"Cislo v sestnactkove soustave:"<<s4.getCislo(16)<<endl;
    cout<<"Cislo v osmickove soustave:"<<s4.getCislo(8)<<endl;
    cout << endl;
    cout << "Testovani bude ukonceno zadanim chybne soustavy nebo cisla."<<endl;
 /*   do{
        cout << endl;
        cout<<"Zadejte soustavu:";
        cin>>soustava;
        cout<<"Zadejte cislo:";
        cin>>cislo;
        if(s1.setCislo(cislo, soustava)){
            cout<<"Cislo v dvojkove soustave:"<<s1.getCislo(2)<<endl;
        }

    }while;*/  //nedokončeno
    return 0;
}


