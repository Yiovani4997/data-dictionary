#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdio.h>
#include <stdlib.h>

#define EMPTY_POINTER -1
#define DATA_BLOCK_SIZE 50

#include <stdio.h>
#include <stdlib.h>
#include "dictionary.h"

typedef struct Node
{
    char name[DATA_BLOCK_SIZE];
    long dataPointer;
    long attributesPointer;
    long nextEntity;
}ENTITY;
int initializeDataDictionary(const char *dictionaryName);


#endif