#include<stdio.h>
#include<math.h>
#define Pi 3.14

void Bienvenida (void);
float ingreso_parte_real (void);
float ingreso_parte_imaginaria (void);
float mod (float,float);
float fas (float,float);
void Mostrar_resultado (float,float);


int main (void){
    Bienvenida ();
    float real= ingreso_parte_real ();
    float imag= ingreso_parte_imaginaria ();
    float modulo= mod (real,imag);
    float fase= fas (real,imag);
    Mostrar_resultado (modulo,fase);
    return 0;
}


void Bienvenida (void){
    printf ("bienvenidos al programa que calcula modulo y fase\n");
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

float mod (float real,float imag){
    float mod;
    mod=sqrt((real*real)+(imag*imag));
    return (mod);
}

float fas (float imag,float real){
    float fas;
    fas=atan2(imag,real)*180/Pi;
    return (fas);
}

void Mostrar_resultado (float mod,float fas){
    printf("El modulo dio= %f\n",mod);
    printf("La fase dio= %f\n",fas);
}

