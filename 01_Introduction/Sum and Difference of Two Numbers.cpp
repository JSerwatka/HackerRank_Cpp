#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x_1;
    int x_2;
    float y_1;
    float y_2;
    
    scanf("%d %d", &x_1, &x_2);
    scanf("%f %f", &y_1, &y_2);
    printf("%d %d\n", x_1+x_2, x_1-x_2);
    printf("%.1f %.1f", y_1+y_2, y_1-y_2);
    return 0;
}