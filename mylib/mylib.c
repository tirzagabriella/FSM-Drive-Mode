#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void state(int s0, int s1, int b1, int b2, int* S0, int* S1){
    // s0 = a, s1 = b, b1 = c, b2 = d
    int i = !b2 & s1;
    int j = !b1 & s0 & !s1;
    int k = !b1 & !s0 & s1;
    *S0 = i | j | k;
    int l = !b2 & !s1;
    int m = !s0 & !s1;
    int n = !b2 & !s0;
    int o = !b1 & s0;
    *S1 = l | m | n | o;
}

void output(int s0, int s1, int* o0, int* o1, int* o2){
    *o0 = !s0 & s1;
    *o1 = s0 & s1;
    *o2 = s0 & !s1;
}
