#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

static const char *strings[] = {"one","two","three","four","five",
                                "six","seven","eight","nine"};

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for (int n = a; n <= b; n++){
        if (n >= 1 && n <= 9)
            printf("%s\n", strings[n-1]);
        
        else{
            if (n % 2 == 0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
    return 0;
}
