#include <stdio.h>
#include <string.h>
#include "seleccion.h"
 
#define CONTAR_ELEMENTOS(array) (sizeof(array)/sizeof(array[0]))
 
typedef struct {
    char nombre[30];
    unsigned edad;
} persona_t;
 
int comparar_int_ascendente(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
 
int comparar_int_descendente(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}
 
int comparar_float_ascendente(const void *a, const void *b) {
    return *(float*)a - *(float*)b;
}
 
int comparar_float_descendente(const void *a, const void *b) {
    return *(float*)b - *(float*)a;
}
 
int comparar_char_ascendente(const void *a, const void *b) {
    return *(char*)a - *(char*)b;
}
 
int comparar_char_descendente(const void *a, const void *b) {
    return *(char*)b - *(char*)a;
}
 
int comparar_persona_ascendente(const void *a, const void *b) {
    return ((persona_t*)a)->edad - ((persona_t*)b)->edad;
}
 
int comparar_persona_descendente(const void *a, const void *b) {
    return ((persona_t*)b)->edad - ((persona_t*)a)->edad;
}
 
int main() {
    int array_int[] = {-3, 12, 0, -13, -3, 5, 123};
    float array_float[] = {-12.234, 123.1232, -0, 412573843};
    char array_char[] = {'q', 'w', 'i', 'e', 's', 'c'};
    persona_t array_persona[] = {
        {"Juan", 15},
        {"Antonio", 43},
        {"Isabel", 10},
        {"Aura", 60},
        {"Miguel", 43}
    };
 
    /*****************************   ORDENAR ARRAY DE INTS  ********************************/
 
    printf("array_int sin ordenar: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_int); ++i) {
        printf("%d", array_int[i]);
        if(i < CONTAR_ELEMENTOS(array_int) - 1) {
            printf(", ");
        }
    }
 
    ordenar(array_int, CONTAR_ELEMENTOS(array_int), sizeof(int), comparar_int_ascendente);
    
    printf("\narray_int ordenado ascendentemente: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_int); ++i) {
        printf("%d", array_int[i]);
        if(i < CONTAR_ELEMENTOS(array_int) - 1) {
            printf(", ");
        }
    }
 
    ordenar(array_int, CONTAR_ELEMENTOS(array_int), sizeof(int), comparar_int_descendente);
    
    printf("\narray_int ordenado descendentemente: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_int); ++i) {
        printf("%d", array_int[i]);
        if(i < CONTAR_ELEMENTOS(array_int) - 1) {
            printf(", ");
        }
    }
 
    /***************************  ORDENAR ARRAY DE FLOATS  ************************************/
 
    printf("\n\narray_float sin ordenar: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_float); ++i) {
        printf("%f", array_float[i]);
        if(i < CONTAR_ELEMENTOS(array_float) - 1) {
            printf(", ");
        }
    }
 
    ordenar(array_float, CONTAR_ELEMENTOS(array_float), sizeof(float), comparar_float_ascendente);
    
    printf("\narray_flaot ordenado ascendentemente: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_float); ++i) {
        printf("%f", array_float[i]);
        if(i < CONTAR_ELEMENTOS(array_float) - 1) {
            printf(", ");
        }
    }
 
    ordenar(array_float, CONTAR_ELEMENTOS(array_float), sizeof(float), comparar_float_descendente);
    
    printf("\narray_flaot ordenado descendentemente: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_float); ++i) {
        printf("%f", array_float[i]);
        if(i < CONTAR_ELEMENTOS(array_float) - 1) {
            printf(", ");
        }
    }
 
    /***********************  ORDENAR ARRAY DE CHARS  *****************************************/
 
    printf("\n\narray_char sin ordenar: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_char); ++i) {
        printf("%c", array_char[i]);
        if(i < CONTAR_ELEMENTOS(array_char) - 1) {
            printf(", ");
        }
    }
 
    ordenar(array_char, CONTAR_ELEMENTOS(array_char), sizeof(char), comparar_char_ascendente);
    
    printf("\narray_char ordenado ascendentemente: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_char); ++i) {
        printf("%c", array_char[i]);
        if(i < CONTAR_ELEMENTOS(array_char) - 1) {
            printf(", ");
        }
    }
 
    ordenar(array_char, CONTAR_ELEMENTOS(array_char), sizeof(char), comparar_char_descendente);
    
    printf("\narray_char ordenado descendentemente: ");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_char); ++i) {
        printf("%c", array_char[i]);
        if(i < CONTAR_ELEMENTOS(array_char) - 1) {
            printf(", ");
        }
    }
 
    /***********************  ORDENAR ARRAY DE PERSONA  *****************************************/
 
    puts("\n\narray_persona sin ordenar:");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_persona); ++i) {
        printf("   %s de %u annos\n", array_persona[i].nombre, array_persona[i].edad);
    }
 
    ordenar(array_persona, CONTAR_ELEMENTOS(array_persona), sizeof(persona_t), comparar_persona_ascendente);
    
    puts("\narray_persona ordenado ascendentemente:");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_persona); ++i) {
        printf("   %s de %u annos\n", array_persona[i].nombre, array_persona[i].edad);
    }
 
    ordenar(array_persona, CONTAR_ELEMENTOS(array_persona), sizeof(persona_t), comparar_persona_descendente);
    
    puts("\narray_persona ordenado descendentemente:");
    for(size_t i=0; i<CONTAR_ELEMENTOS(array_persona); ++i) {
        printf("   %s de %u annos\n", array_persona[i].nombre, array_persona[i].edad);
    }
}
