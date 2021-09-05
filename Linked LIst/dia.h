#include <stdio.h>
#include <stdlib.h>
#include "horario.h"

typedef struct Dia
{
    int diaSemana;
    Horario * horario;
    struct Dia *SiguienteDia
}Dia;

Dia *NuevoDia(void)
{
    Dia* dia = (Dia *)malloc(sizeof(Dia));
    dia->SiguienteDia = NULL;
}

void printListaDias(Dia * dia){
    Dia * auxiliar = dia;
    while (auxiliar != NULL)
    {   
        printf("\nDia de la semana %d\n", dia->diaSemana);
        ImprimirHorario(dia->horario);
        auxiliar = auxiliar->SiguienteDia;
    }
    
}

void AnadirDia(Dia **listaDeDias, Dia *NuevoDia)
{

    Dia *auxiliar = (*listaDeDias);
    if ((*listaDeDias)->diaSemana > NuevoDia->diaSemana)
    {
        NuevoDia->SiguienteDia = *listaDeDias;
        *listaDeDias = NuevoDia;
    }
    else{
    while (auxiliar->SiguienteDia != NULL || auxiliar->diaSemana <= NuevoDia->diaSemana)
    {
        auxiliar = auxiliar->SiguienteDia;
    }
    Dia *auxiliarNextDia = auxiliar->SiguienteDia;
    NuevoDia->SiguienteDia = auxiliarNextDia;
    auxiliar->SiguienteDia = NuevoDia;}
}
