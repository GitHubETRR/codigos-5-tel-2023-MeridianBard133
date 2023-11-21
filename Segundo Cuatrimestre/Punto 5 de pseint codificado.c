#include <stdio.h>
#include <math.h>
#define PI 3.14

void Bienvenida (void);
float ingreso_modulo_tension (void);
float ingreso_modulo_corriente (void);
float ingreso_angulo_tension (void);
float ingreso_angulo_corriente (void);
float numero_real_tension (float,float);
float numero_real_corriente (float,float);
float numero_imag_tension (float,float);
float numero_imag_corriente (float,float);
float numero_real (float,float);
float numero_imag (float,float);
float ingreso_frecuencia (void);
float omega (float);
float reactancia_inductiva (float,float);
float reactancia_capacitiva (float);
void Mostrar_resultado_real (float);
void Mostrar_resultado_imag ();
void Mostrar_resultado_reactivo_inductivo (float);
void Mostrar_resultado_reactivo_capacitivo (float);

int main (void){
    Bienvenida ();
    float Mod_T = ingreso_modulo_tension ();
    float Mod_I = ingreso_modulo_corriente ();
    float Ang_T = ingreso_angulo_tension ();
    float Ang_I = ingreso_modulo_corriente ();
    float real_T = numero_real_tension (Mod_T,Ang_T);
    float real_I = numero_real_corriente (Mod_I,Ang_I);
    float imag_T = numero_imag_tension (Mod_T,Ang_T);
    float imag_I = numero_imag_corriente (Mod_I,Ang_I);
    float real = numero_real (real_T,real_I);
    float imag = numero_imag (imag_T,imag_I);
    float freq = ingreso_frecuencia ();
    float omg = omega (freq);
    float RL = reactancia_inductiva (imag,omg);
    float RC = reactancia_capacitiva (omg);
    Mostrar_resultado_real (real);
    Mostrar_resultado_imag (imag);
    if (imag<=0){
    Mostrar_resultado_reactivo_inductivo (RL);
    }else{
    Mostrar_resultado_reactivo_capacitivo (RC);
    if (RL=0){
        printf ("No tiene reactancia inductiva\n");
    }
    if (RC=0){
        printf("No tiene reactancia capacitiva\n");
    }
    return 0;
}

void Bienvenida (void){
    printf ("Bienvenido al programa que calcula la reactancia inductiva o capacitiva con modulos, angulos y numeros complejos\n");
}

float ingreso_modulo_tension (){
    printf ("Por favor ingrese modulo para la tension\n");
    scanf ("%f\n",&Mod_T);
    return (Mod_T);
}

float ingreso_modulo_corriente (){
    printf ("Por favor ingrese modulo para la corriente\n");
    scanf ("%f\n",&Mod_I);
    return (Mod_I);
}

float ingreso_angulo_tension (){
    printf ("Por favor ingrese angulo para la tension\n");
    scanf ("%f\n",&Ang_T);
    return (Ang_T);
}

float ingreso_angulo_corriente (){
    printf ("Por favor ingrese angulo para la corriennten\n");
    scanf ("%f\n",&Ang_I);
    return (Ang_I);
}

float numero_real_tension (float Mod_T,float Ang_T){
    float real_T;
    real_T= Mod_T*cos(Ang_T);
    return (real_T);
}

float numero_real_corriente (float Mod_I,float Ang_I){
    float real_I;
    real_T= Mod_I*cos(Ang_I);
    return (real_I);
}

float numero_imag_tension (float Mod_T,float Ang_T){
    float imag_T;
    imag_T= Mod_T*sin(Ang_T);
    return (imag_T);
}

float numero_imag_corriente (float Mod_I,float Ang_I){
    float imag_I;
    imag_I= Mod_I*sin(Ang_I);
    return (imag_I);
}

float numero_real (float real_T,float real_I){
    float real;
    real= real_T+real_I;
    return (real);
}

float numero_imag (float imag_T,float imag_I){
    
    float imag;
    imag= imag_T+imag_I;
    return (imag);
}

void Mostrar_resultado_real (real){
    printf ("El numero real dio=%f\n",real);
}

void Mostrar_resultado_imag (imag){
    printf ("El numero imaginario dio=%f\n",imag);
}

float ingreso_frecuencia (){
    printf ("Por favor ingrese una frecuencia\n");
    scanf ("%f\n",&freq);
    return (freq);
}

float omega (float freq){
    float omg;
    omg= (2*PI)*freq;
    return (omg);
}

float reactancia_inductiva (float imag, float omg){
    float RL;
    RL= imag/omg;
    return (RL);
}

void Mostrar_resultado_reactivo_inductivo (RL){
    printf ("La reactancia niductiva dio=%f\n",RL);
}

float reactancia_capacitiva (float omg){
    float RC;
    RC=1/omg;
    return (RC);
}

void Mostrar_resultado_reactivo_capacitivo (RC){
    printf ("La reactancia capacitiva dio=%f\n",RC);
}
