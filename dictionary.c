#include "dictionary.h"

int initializeDataDictionary(const char *dictionaryName) {
    long mainHeader = EMPTY_POINTER;

    printf("Initializing Data Dictionary...\n");

    FILE *dictionary = fopen(dictionaryName, "w+");

    fwrite(&mainHeader, sizeof(mainHeader), 1, dictionary);

    return EXIT_SUCCESS;
}


int appendEntity(FILE *dataDictionary, ENTITY newEntity){

}

void reorderEntities(FILE* dataDictionary){

}