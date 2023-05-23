#include <stdio.h>

#pragma startup init_func
#pragma exit cleanup_func

void init_func() {
    printf("Initializing...\n");
}

void cleanup_func() {
    printf("Cleaning up...\n");
}

int main() {
    printf("Inside main()\n");
    return 0;
}
