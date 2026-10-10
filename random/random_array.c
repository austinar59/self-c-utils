#include "random_utils.h"
#include <stdlib.h>
#include <time.h>

int random_array(size_t n, int* ptr, int bnd, int isArrayInit) {
    srand(time(NULL));
    if(isArrayInit) {
        for(size_t i = 0; i < n; i++) {
            ptr[i] = rand() % bnd;
        }
        return 0;
    } else {
        ptr = malloc(n * sizeof(int));
        if(ptr == NULL) {
            return -1; // Memory allocation failed
        }
        for(size_t i = 0; i < n; i++) {
            ptr[i] = rand() % bnd;
        }
        return 0;
    }
}