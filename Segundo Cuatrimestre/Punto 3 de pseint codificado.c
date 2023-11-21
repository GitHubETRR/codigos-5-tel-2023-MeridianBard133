#include<stdio.h>
#include<math.h>
#define PI 3.14


void Bienvenida (void);
float ingreso_parte_real_1 (void);
float ingreso_parte_imaginaria_1(void);
float ingreso_parte_real_2 (void);
float ingreso_parte_imaginaria_2 (void);
float real_total (float,float);
float imag_total (float,float);
float mod (float,float);
float fas (float,float);
char eleccion ();
void Mostrar_resultado_polar (float,float);
void Mostrar_resultado_binomica (float,float);


int main (void){
    Bienvenida ();
    float real_1= ingreso_parte_real_1 ();
    float imag_1= ingreso_parte_imaginaria_1 ();
    float real_2= ingreso_parte_real_2 ();
    float imag_2= ingreso_parte_imaginaria_2 ();
    float real= real_total (real_1,real_2); 
    float imag= imag_total (imag_1,imag_2);
    float modulo= mod (real,imag);
    float fase= fas (real,imag);
    int eleccion;
    printf ("Por favor eliga 1 para resultado polar o un 0 para resultado binomico\n");
    scanf(" %d", &eleccion);
    if (eleccion == 1){
    Mostrar_resultado_polar (modulo,fase);
    }else if (eleccion == 0){
    Mostrar_resultado_binomica (real,imag);
    }else{
        printf("La opcion elegida no es aceptable: Por favor elija 1 o 0\n");
    scanf(" %d", &eleccion);
    }
    return 0;
}

void Bienvenida (void){
    printf ("Bienvenido al programa que transforma dos numeros complejos en forma binomica o polar dependiendo lo que usted quiera");
}

float ingreso_parte_real_1 (void){
    float real_1;
    printf ("Por favor ingrese un primer numero real\n");
    scanf ("%f",&real_1);
    return (real_1);
}

float ingreso_parte_real_2 (void){
    float real_2;
    printf ("Por favor ingrese un segundo numero real\n");
    scanf ("%f",&real_2);
    return (real_2);
}

float ingreso_parte_imaginaria_1 (void){
    float imag_1;
    printf ("Por favor ingrese un primer numero imaginario\n");
    scanf ("%f",&imag_1);
    return (imag_1);
}

float ingreso_parte_imaginaria_2 (void){
    float imag_2;
    printf ("Por favor ingrese un segundo numero imaginario\n");
    scanf ("%f",&imag_2);
    return (imag_2);
}

float real_total (float real_1,float real_2){
    float real;
    real= real_1+real_2;
    return (real);
}

float imag_total (float imag_1,float imag_2){
    float imag;
    imag= imag_1+imag_2;
    return (imag);
}
   
float mod (float real,float imag){
    float mod;
    mod=sqrt((real*real)+(imag*imag));
    return (mod);
}

float fas (float imag,float real){
    float fas;
    fas=atan2(imag,real)*180/PI;
    return (fas);
}

void Mostrar_resultado_polar (float mod,float fas){
    printf("El modulo dio= %f\n",mod);
    printf("La fase dio= %f\n",fas);
}

float real (float real_1,float real_2){
    float real;
    real= real_1+real_2;
    return (real);
}

float imag (float imag_1,float imag_2){
    float imag;
    imag= imag_1+imag_2;
    return (imag);
}

void Mostrar_resultado_binomica (float real,float imag){
    printf("El numero real dio= %f\n",real);
    printf("El numero imaginario dio= %f\n",imag);
}

