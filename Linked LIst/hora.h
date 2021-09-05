#include <stdlib.h>

typedef struct Hora
{
    int horas;
    int minutos;
}Hora;

Hora *NuevaHora (int horas, int minutos)
{
    Hora *  nuevaHora = (Hora *)malloc(sizeof(Hora));
    nuevaHora->horas = horas;
    nuevaHora->minutos = minutos;
    return nuevaHora;
}