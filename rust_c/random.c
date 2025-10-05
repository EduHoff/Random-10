#include <stdio.h>
#include <time.h>

void init_random() {
    srand((unsigned)time(NULL));
}

int random(int num){
    return rand() % num + 1;
}