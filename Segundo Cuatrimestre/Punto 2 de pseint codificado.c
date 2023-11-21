#include<stdio.h>
#include<math.h>


void Bienvenida (void);
float ingreso_modulo (void);
float ingreso_fase (void);
float real (float,float);
float imag (float,float);
void Mostrar_resultado (float,float);


int main (void){
    Bienvenida ();
    float mod= ingreso_modulo ();
    float fas= ingreso_fase ();
    float numero_real= real (mod,fas);
    float numero_imag= imag (mod,fas);
    Mostrar_resultado (numero_real,numero_imag);
    return 0;
}


void Bienvenida (void){
    printf ("bienvenidos al programa que calcula parte real y parte imaginaria\n");
}

float ingreso_modulo (void){
    float mod;
    printf ("por favor ingrese modulo\n");
    scanf ("%f",&mod);
    return (mod);
    
}
float ingreso_fase (void){
    float fas;
    printf ("por favor ingrese fase\n");
    scanf ("%f",&fas);
    return (fas);
}

float real (float mod, float fas){
    float real;      
    real=mod*cos(fas);
    return (real);
}

float imag (float mod, float fas){
    float imag;
    imag=mod*sin(fas);
    return (imag);
}

void Mostrar_resultado (float real, float imag){
    printf("El numero real dio= %f\n",real);
    printf("El numero imaginario dio= %f\n",imag);
}

