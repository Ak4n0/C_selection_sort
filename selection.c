#include <stdlib.h>
#include <string.h>
#include "seleccion.h"
 
void ordenar(void *base, size_t n_elem, size_t tam_elem, int (*compara)(const void* elem_1, const void* elem_2)) {
    unsigned char aux[sizeof(unsigned char) * tam_elem];
    size_t index;
 
    for(size_t i=0; i < n_elem-1; ++i) {
        index = i;
        for(size_t j=i+1; j < n_elem; ++j) {
            if(compara(base+index*tam_elem, base+j*tam_elem) > 0) {
                index = j;
            }
        }
        if(index != i) {
            memcpy(aux, base+i*tam_elem, sizeof(unsigned char)*tam_elem);
            memcpy(base+i*tam_elem, base+index*tam_elem, sizeof(unsigned char)*tam_elem);
            memcpy(base+index*tam_elem, aux, sizeof(unsigned char)*tam_elem);
        }
    }
}
