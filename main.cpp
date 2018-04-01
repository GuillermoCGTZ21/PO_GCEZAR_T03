#include <iostream>
#include "Fraccion.h"
int main() {
    //Aquí declaro las dos fracciones.
    Fraccion fra1 (5,12);
    Fraccion fra2 (9,4);

    //Aquí declaro las operaciones aritméticas.
    Fraccion frasum = fra1 + fra2;
    Fraccion frarest = fra1 - fra2;
    Fraccion framul = fra1 * fra2;
    Fraccion fradiv = fra1 / fra2;

    //Mensaje en pantalla para las operaciones aritméticas.

    std::cout<<"Fracciones utilizadas\n";
    std::cout<<"PRIMERA FRACCIÓN          SEGUNDA FRACCIÓN\n";
    std::cout<<"      "+fra1.to_String()+"                       "+fra2.to_String()+"\n";
    std::cout<<"SUMA\n";
    std::cout<<frasum.to_String()+"\n";
    std::cout<<"RESTA\n";
    std::cout<<frarest.to_String()+"\n";
    std::cout<<"MULTIPLICACIÓN\n";
    std::cout<<framul.to_String()+"\n";
    std::cout<<"DIVISIÓN\n";
    std::cout<<fradiv.to_String()+"\n";

    //Aquí declaro los booleans.
    bool comp;


    //Declaración de salida de pantalla de booleans.
std::cout<<"DECLARACIÓN DE BOOLS\n";
    if(fra1<fra2){ //comparación fracción 1 es menor que fracción 2
        comp=true;
    }else{
        comp=false;
    }
    std::cout<<fra1.to_String()+" < "+fra2.to_String()+" = "<<comp<<"\n";

    if(fra1>fra2){ //comparación fracción 1 es mayor que fracción 2
        comp=true;
    }else{
        comp=false;
    }
    std::cout<<fra1.to_String()+" > "+fra2.to_String()+" = "<<comp<<"\n";

    if(fra1<=fra2){ //comparación fracción 1 es menor/igual que fracción 2
        comp=true;
    }else{
        comp=false;
    }
    std::cout<<fra1.to_String()+" <= "+fra2.to_String()+" = "<<comp<<"\n";

    if(fra1>=fra2){ //comparación fracción 1 es mayor/igual que fracción 2
        comp=true;
    }else{
        comp=false;
    }
    std::cout<<fra1.to_String()+" >= "+fra2.to_String()+" = "<<comp<<"\n";

    if(fra1==fra2){  //comparación fracción 1 es igual que fracción 2
        comp=true;
    }else{
        comp=false;
    }
    std::cout<<fra1.to_String()+" == "+fra2.to_String()+" = "<<comp<<"\n";

    if(fra1!=fra2){ //comparación fracción 1 es diferente que fracción 2
        comp=true;
    }else{
        comp=false;
    }
    std::cout<<fra1.to_String()+" != "+fra2.to_String()+" = "<<comp<<"\n";

}
