#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef char cadena[30];

typedef struct
{
    cadena nombre;
    long atr;
    long sig;
    long data;
}Entidad;

typedef struct
{
    cadena nombre;
    int tipo;
    char iskp;
    long sig;
    int tam;
    cadena descripcion;
}Atributo;

void menuPrincipal(FILE *f);
void nuevoDiccionario(FILE *f);
void abrirDiccionario(FILE *f);
void cerrarDiccionario(FILE *f);

//Entidades

void menuEntidades(FILE *f);
void altaEntidad(FILE *f);
Entidad capturaEntidad();
Entidad leeEntidad(FILE  *f,long dir);
long buscaEntidad(FILE *f, cadena entNom);
long escribeEntidad(FILE *f, Entidad ent);
void escribeCabEntidades(FILE *f);
long getCabEntidades(FILE *f);
void insertaEntidad(FILE *f,Entidad nueva, long dir);
void reescribeEntidad(FILE *f, Entidad ent, long dir); //Referencia
void consultaEntidad(FILE *f);
void bajaEntidad(FILE *f);
long eliminaEntidad(FILE *f, cadena nomb);
void modificaEntidad(FILE *f);
void rescribeCabEntidades(FILE *f,long dir);
void pideNomEnt(cadena nombEnt);

//Atributos

void menuAtributos(FILE *f, Entidad entAct, long direntAct);
int opcAtr();
long seleccionaTabla(FILE *f, Entidad *entAct, long *direntAct);
void altaAtributo(FILE *f, Entidad *entAct, long direntAct);
Atributo capturaAtributo();
long buscaAtributo(FILE *f, cadena atrNom, Entidad entAct);
long escribeAtributo(FILE *f, Atributo atr);
void insertaAtributo(FILE *f, Atributo atr, long dir, Entidad *entAct, long direntAct);
Atributo leeAtributo(FILE *f, long dir);
void reescribeAtributo(FILE *f, Atributo atr, long dir);
void bajaAtributo(FILE *f, Entidad *entAct, long direntAct);
long eliminaAtributo(FILE *f, cadena atrNom, Entidad *entAct, long direntAct);
void modificaAtributo(FILE *f, Entidad *entAct, long direntAct);
void consultaAtributo(FILE *f, Entidad entAct);
void pideNombAtr(cadena nombAtr);

//Bloques

int opcBlq();
void menuBloques(FILE *f, Entidad entAct, long direntAct, Atributo *arrAtr, int nAtr, void* b, long tamBloque);
void consultaBloque(FILE *f, Entidad entAct, Atributo *arrAtr, int nAtr, void* b, long tamBloque);
bool existeISKP(FILE *f, Entidad entAct);
long cargaAtributos(FILE *f, Entidad entAct, Atributo *arrAtr, int *nAtr);
double comparaBloques(Atributo *arrAtr, void* b1, void* b2);
void* capturaBloque(Atributo *arrAtr, long tamBloque, int nAtr);
void* capturaBloqueClave(Atributo *arrAtr, long tamBloque, int nAtr);
void insertaBloque(FILE *f, Entidad *entAct, long direntAct, Atributo *arrAtr, void* b, long tamBloque, long dir);
void altaSecuencial(FILE *f, Entidad *entAct, long direntAct, Atributo *arrAtr, int nAtr, long tamBloque);
long eliminaBloque(FILE *f, Entidad *entAct, long direntAct, Atributo *arrAtr, void* b, long tamBloque);
void bajaSecuencial(FILE *f, Entidad *entAct, long direntAct, Atributo *arrAtr, int nAtr, long tamBloque);
void* leeBloque(FILE *f, long dir, long tamBloque);
long escribeBloque(FILE *f, void* b, long tamBloque);
long buscaBloque(FILE *f, Entidad entAct, Atributo *arrAtr, void* b, long tamBloque);
void modificaBloque(FILE *f, Entidad *entAct, long direntAct, Atributo *arrAtr, int nAtr, long tamBloque);
void reescribeBloque(FILE *f, void* b, long dir, long tamBloque);
long existeBloqueDif(FILE *f, Entidad entAct, Atributo *arrAtr, void* b, void* bNuevo, long tamBloque);

#endif