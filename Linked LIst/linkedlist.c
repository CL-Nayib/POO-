#include <stdio.h>
#include <stdlib.h>
#include "dia.h"
#include <string.h>

//Ya que POO solo nos toca 3 dias entonces solo haré un horario con los dias que corresponden

typedef struct Asignatura {
  char nombre[50];
  Dia *listaSemanal;
}Asignatura;

Asignatura * NuevaAsignatura(){
    Asignatura* Nueva = (Asignatura*)malloc(sizeof(Asignatura));
    return Nueva;
}

int main()
{

//Creamos una nueva asignatura
Asignatura *POO = NuevaAsignatura();

//Le ponemos el nombre
strcpy(POO->nombre, "POO");

//Añadimos un nuevo dia
POO->listaSemanal = NuevoDia();
POO->listaSemanal->diaSemana = 3;
POO->listaSemanal->horario = NuevoHorario();

// horario para el primer dia
POO->listaSemanal->horario->Entrada = NuevaHora(1, 30);
POO->listaSemanal->horario->Salida = NuevaHora(7, 30);

//Creamos el dia a agregar
Dia *nuevoDiaDePOO = NuevoDia();
nuevoDiaDePOO->diaSemana = 1; 
nuevoDiaDePOO->horario = NuevoHorario();
nuevoDiaDePOO->horario->Entrada = NuevaHora(10, 45);
nuevoDiaDePOO->horario->Salida = NuevaHora(5, 30);

//Añadimos el nuevo dia
AnadirDia(&(POO->listaSemanal), nuevoDiaDePOO);

// nuevoDiaDePOO = NuevoDia();
// nuevoDiaDePOO->diaSemana = 6;
// nuevoDiaDePOO->horario = NuevoHorario();
// nuevoDiaDePOO->horario->Entrada = NuevaHora(3, 15);
// nuevoDiaDePOO->horario->Salida = NuevaHora(7, 20);
// AnadirDia(&(POO->listaSemanal), nuevoDiaDePOO);

printf("%s", POO->nombre);

printListaDias(POO->listaSemanal);

//Creamos un nuevo horario
// POO->horario = NuevoHorario();

/*Creamos las nuevas horas dentro del horario
Hora *HoraInicioMartes = NuevaHora();
HoraInicioMartes->horas = 10;
Hora *MinutosInicioMartes = NuevaHora();
MinutosInicioMartes->minutos = 30;
Hora *HoraFinMartes = NuevaHora();

POO->horario->Entrada->horas = 10;
POO->horario->Entrada->minutos = 48;



//Martes

Hora * HoraInicioMartes = NuevaHora();
HoraInicioMartes-> horas = 10;
Hora * MinutosInicioMartes = NuevaHora();
MinutosInicioMartes-> minutos = 30;
Hora * HoraFinMartes = NuevaHora();
HoraFinMartes-> horas = 12;
Hora * MinutosFinMartes = NuevaHora();
MinutosFinMartes-> minutos = 0;
Horario * HorarioMartes = NuevoHorario();
HorarioMartes->Entrada = HoraInicioMartes;
HorarioMartes->Salida = HoraFinMartes;

//Miercoles 

Hora * HoraInicioMiercoles = NuevaHora();
HoraInicioMiercoles-> horas = 11;
Hora * MinutosInicioMiercoles = NuevaHora();
MinutosInicioMiercoles-> minutos = 0;
Hora * HoraFinMiercoles = NuevaHora();
HoraFinMiercoles-> horas = 12;
Hora * MinutosFinMiercoles = NuevaHora();
MinutosFinMiercoles-> minutos = 30;
Horario * HorarioMiercoles = NuevoHorario();
HorarioMiercoles->Entrada = HoraInicioMiercoles;
HorarioMiercoles->Salida = HoraFinMiercoles;

//Viernes

Hora * HoraInicioViernes = NuevaHora();
HoraInicioViernes-> horas = 11;
Hora * MinutosInicioViernes = NuevaHora();
MinutosInicioViernes-> minutos = 0;
Hora * HoraFinViernes = NuevaHora();
HoraFinViernes-> horas = 12;
Hora * MinutosFinViernes = NuevaHora();
MinutosFinViernes-> minutos = 30;
Horario * HorarioViernes = NuevoHorario();
HorarioViernes->Entrada = HoraInicioViernes;
HorarioViernes->Salida = HoraFinViernes;

ImprimirHorario( *Horario);
*/
return 0;
}