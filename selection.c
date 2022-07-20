#ifndef SELECCION_H__
#define SELECCION_H__
 
#include <stddef.h>
 
void ordenar(void *base, size_t n_elem, size_t tam_elem, int (*compara)(const void* elem_1, const void* elem_2));
 
#endif
