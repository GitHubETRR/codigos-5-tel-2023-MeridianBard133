#include <stdio.h>
#include <math.h>
#define PI 3.14

void Bienvenida (void);
float ingreso_parte_real (void);
float ingreso_parte_imaginaria (void);
float ingreso_frecuencia (void);
float omega (float);
float inductor (float,float);
float capacitor (float);
void Mostrar_resultado_hernios (float);
void Mostrar_resultado_faradios (float);

int main (void){
    Bienvenida ();
    float real= ingreso_parte_real ();
    float imag= ingreso_parte_imaginaria ();
    float freq= ingreso_frecuencia ();
    float omg= omega (freq);
    float ind= inductor (imag,omg);
    float cap= capacitor (omg);
    if (imag>0){
    Mostrar_resultado_hernios (ind);
    }else{
    Mostrar_resultado_faradios (cap);
    }
    if (ind=0){
        printf ("No tiene inductancia\n");
    }
    if (cap=0){
        printf("No tiene capacitancia\n");
    }
    return 0;
}

void Bienvenida (void){
    printf ("bienvenidos al programa que calcula el capacitor y/o inductor a partir de numeros complejos\n");
}

float ingreso_parte_real (void){
    float real;
    printf ("por favor ingrese la parte real\n");
    scanf ("%f",&real);
    return (real);
    
}
float ingreso_parte_imaginaria (void){
    float imag;
    printf ("por favor ingrese la parte imaginaria\n");
    scanf ("%f",&imag);
    return (imag);
}

float ingreso_frecuencia (void){
    float freq;
    printf ("Por favor ingrese la frecuencia\n");
    scanf ("%f",&freq);
    return (freq);
}

float omega (float freq){
    float omg;
    omg = (2*PI)*freq;
    return (omg);
}
float inductor (float imag,float omg){
    float ind;
    ind=imag/omg;
    return(ind);
}

void Mostrar_resultado_hernios (float ind){
    printf ("La inductancia dio=%f\n",ind);
}

float capacitor (float omg){
    float cap;
    cap=1/omg;
    return (cap);
}

void Mostrar_resultado_faradios (float cap){
    printf ("La capacitancia dio=%f\n",cap);
}