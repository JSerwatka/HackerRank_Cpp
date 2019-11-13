#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and_val = 0;
    int or_val = 0;
    int xor_val = 0;
    
    for (int i = 1; i < n; i++){
        for (int j = i + 1; j < (n + 1); j++){
            if (((i & j) < k) && ((i & j) > and_val)) and_val = i & j;
            if (((i | j) < k) && ((i | j) > or_val))  or_val = i | j;   
            if (((i ^ j) < k) && ((i ^ j) > xor_val)) xor_val = i ^ j;
        }
    }
    printf("%d\n%d\n%d", and_val, or_val, xor_val);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
