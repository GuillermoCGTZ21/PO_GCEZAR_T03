//
// Created by el_me on 31/03/2018.
//

#ifndef PO_GCEZAR_T03_FRACCION_H
#define PO_GCEZAR_T03_FRACCION_H


#include <string>

class Fraccion {

protected:
    int numerador;
    int denominador;

public:
//Método to_String
    std::string to_String();

//Constructor
    Fraccion (int numerador, int denominador);

//Métodos de tipo Fraccion
    friend Fraccion operator + (const Fraccion &f1,const Fraccion &f2);
    friend Fraccion operator - (const Fraccion &f1, const Fraccion &f2);
    friend Fraccion operator * (const Fraccion &f1, const Fraccion &f2);
    friend Fraccion operator / (const Fraccion &f1, const Fraccion &f2);

//Métodos de tipo booleano
    friend bool operator < (const Fraccion &f1, const Fraccion &f2);
    friend bool operator > (const Fraccion &f1, const Fraccion &f2);
    friend bool operator <= (const Fraccion &f1, const Fraccion &f2);
    friend bool operator >= (const Fraccion &f1, const Fraccion &f2);
    friend bool operator == (const Fraccion &f1, const Fraccion &f2);
    friend bool operator != (const Fraccion &f1, const Fraccion &f2);







};


#endif //PO_GCEZAR_T03_FRACCION_H
