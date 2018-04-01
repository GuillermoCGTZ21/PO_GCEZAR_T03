//
// Created by el_me on 31/03/2018.
//

#include "Fraccion.h"

Fraccion::Fraccion(int numerador, int denominador){
    this->numerador = numerador;
    this->denominador = denominador;
}
Fraccion operator + (const Fraccion &f1, const Fraccion &f2){

    int Denominadorf = (f1.denominador * f2.denominador);
    int Numeradorf = ((f1.numerador * f2.denominador)+(f1.denominador*f2.numerador));

    Fraccion resultado = *new Fraccion (Numeradorf, Denominadorf);
}
Fraccion operator - (const Fraccion &f1, const Fraccion &f2){

    int Denominadorf = (f1.denominador * f2.denominador);
    int Numeradorf = ((f1.numerador * f2.denominador)-(f1.denominador*f2.numerador));

    Fraccion resultado = *new Fraccion(Numeradorf,Denominadorf);

}
Fraccion operator * (const Fraccion &f1, const Fraccion &f2){

    int Denominadorf = (f1.denominador * f2.denominador);
    int Numeradorf = (f1.numerador*f2.numerador);

    Fraccion resultado = *new Fraccion (Numeradorf,Denominadorf);
}
Fraccion operator / (const Fraccion &f1, const Fraccion &f2){

    int Denominadorf = (f1.denominador*f2.numerador);
    int Numeradorf = (f1.numerador*f2.denominador);

    Fraccion resultado = *new Fraccion (Numeradorf, Denominadorf);
}
bool operator < (const Fraccion &f1, const Fraccion &f2){

    float DecimalFr1 = float(f1.numerador)/float(f1.denominador);
    float DecimalFr2 = float(f2.numerador)/float(f2.denominador);

    bool comparacion = DecimalFr1<DecimalFr2;

    return comparacion;

}
bool operator > (const Fraccion &f1, const Fraccion &f2){

    float DecimalFr1 = float(f1.numerador)/float(f1.denominador);
    float DecimalFr2 = float(f2.numerador)/float(f2.denominador);

    bool comparacion = DecimalFr1>DecimalFr2;

    return comparacion;
}
bool operator <= (const Fraccion &f1, const Fraccion &f2){

    float DecimalFr1 = float(f1.numerador)/float(f1.denominador);
    float DecimalFr2 = float(f2.numerador)/float(f2.denominador);

    bool comparacion = DecimalFr1<=DecimalFr2;

    return comparacion;
}
bool operator >= (const Fraccion &f1, const Fraccion &f2){

    float DecimalFr1 = float(f1.numerador)/float(f1.denominador);
    float DecimalFr2 = float(f2.numerador)/float(f2.denominador);

    bool comparacion = DecimalFr1>=DecimalFr2;

    return comparacion;
}
bool operator == (const Fraccion &f1, const Fraccion &f2){

    float DecimalFr1 = float(f1.numerador)/float(f1.denominador);
    float DecimalFr2 = float(f2.numerador)/float(f2.denominador);

    bool comparacion = DecimalFr1==DecimalFr2;

    return comparacion;
}
bool operator != (const Fraccion &f1, const Fraccion &f2){

    float DecimalFr1 = float(f1.numerador)/float(f1.denominador);
    float DecimalFr2 = float(f2.numerador)/float(f2.denominador);

    bool comparacion = DecimalFr1!=DecimalFr2;

    return comparacion;
}
std::string Fraccion::to_String(){
    std::string nume;
    std::string deno;

    nume = std::to_string(numerador);
    deno = std::to_string(denominador);

    return nume+"/"+deno;
}