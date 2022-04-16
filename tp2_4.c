#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct compu{
    int velocidad; //entre 1 y 3 Ghz
    int anio; //entre 2015 y 2022
    int cantidad; //entre 1 y 8
    char *tipo_cpu; //valores del arreglo TIPOS
}PC;

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

void cargarListaDeCompus(PC computadoras[]);
void mostrarListaDeCompus(PC computadoras[]);
void mostrarCompuMasVieja(PC computadoras[]);
void mostrarCompuConMayorVelocidad(PC computadoras[]);

int main(){
    
    srand(time(NULL));
    PC computadoras[5];

    cargarListaDeCompus(computadoras);
    mostrarListaDeCompus(computadoras);
    mostrarCompuMasVieja(computadoras);
    mostrarCompuConMayorVelocidad(computadoras);

    return 0;
}

void cargarListaDeCompus(PC computadoras[]){
    for (int i = 0; i < 5; i++){
        computadoras[i].velocidad = rand() % 3 + 1;
        computadoras[i].anio = rand() % 8 + 2015;
        computadoras[i].cantidad = rand() % 8 + 1;
        computadoras[i].tipo_cpu = *(tipos+i);
    }
}

void mostrarListaDeCompus(PC computadoras[]){
    for (int i = 0; i < 5; i++){
        printf("\nCOMPUTADORA %d\n", i+1);
        printf("Velocidad de procesamiento: %d Ghz\n", computadoras[i].velocidad);
        printf("A%co de fabricaci%cn: %d\n", 164,162,computadoras[i].anio);
        printf("Cantidad de n%ccleos: %d\n", 163,computadoras[i].cantidad);
        printf("Tipo de procesador: %s\n", computadoras[i].tipo_cpu);
    }
}

void mostrarCompuMasVieja(PC computadoras[]){
    PC compuMasVieja;

    for (int i = 0; i < 5; i++){
        if (i == 0){
            compuMasVieja = computadoras[i];
        } else {
            if (computadoras[i].anio < compuMasVieja.anio){
                compuMasVieja = computadoras[i];
            }
        }
    }
    printf("\n-------------------------");
    printf("\nCOMPUTADORA M%cS VIEJA\n", 181);
    printf("Velocidad de procesamiento: %d Ghz\n", compuMasVieja.velocidad);
    printf("A%co de fabricaci%cn: %d\n", 164,162,compuMasVieja.anio);
    printf("Cantidad de n%ccleos: %d\n", 163,compuMasVieja.cantidad);
    printf("Tipo de procesador: %s\n", compuMasVieja.tipo_cpu);    
}

void mostrarCompuConMayorVelocidad(PC computadoras[]){
    PC compuConMayorVelocidad;

    for (int i = 0; i < 5; i++){
        if (i == 0){
            compuConMayorVelocidad = computadoras[i];
        } else {
            if (computadoras[i].velocidad > compuConMayorVelocidad.velocidad){
                compuConMayorVelocidad = computadoras[i];
            }   
        }   
    }
    printf("\n-------------------------");
    printf("\nCOMPUTADORA CON MAYOR VELOCIDAD\n", 181);
    printf("Velocidad de procesamiento: %d Ghz\n", compuConMayorVelocidad.velocidad);
    printf("A%co de fabricaci%cn: %d\n", 164,162,compuConMayorVelocidad.anio);
    printf("Cantidad de n%ccleos: %d\n", 163,compuConMayorVelocidad.cantidad);
    printf("Tipo de procesador: %s\n", compuConMayorVelocidad.tipo_cpu);
}