#include <stdlib.h>
// #include <.\Linked LIst\hora.h>
#include "hora.h"

typedef struct Horario
{
    Hora * Entrada;
    Hora * Salida;

}Horario;

Horario * NuevoHorario (void)
{
    return (Horario *)malloc(sizeof(Horario));
}

void ImprimirHorario(Horario *Horario)
{
    printf("Entrada: %d:%d , Salida: %d:%d" ,Horario->Entrada->horas, Horario->Entrada->minutos, Horario->Salida->horas, Horario->Salida->minutos);
}