#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    int zero;
    int one;
    int two;
    int three;
    int four;
    int five;
    int six;
    int seven;
    int eight;
    int nine;
} number;

int main() {
    number numbers = {0};
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for(char *c = s; *c != NULL; c++){
        switch(*c){
            case '0':
                numbers.zero += 1;
                break;
            case '1':
                numbers.one += 1;
                break;
            case '2':
                numbers.two += 1;
                break;
            case '3':
                numbers.three += 1;
                break;
            case '4':
                numbers.four += 1;
                break;
            case '5':
                numbers.five += 1;
                break;
            case '6':
                numbers.six += 1;
                break;
            case '7':
                numbers.seven += 1;
                break;
            case '8':
                numbers.eight += 1;
                break;
            case '9':
                numbers.nine += 1;
                break;
            default:
                break;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d", numbers.zero, numbers.one, numbers.two, numbers.three, numbers.four, numbers.five, numbers.six, numbers.seven, numbers.eight, numbers.nine);
    
    /* better solution
    int* nums = (int*) malloc(10 * sizeof(int));
    char c;
    
    for(int i = 0; i < 10; i++)
        *(nums+i) = 0;

    while(scanf("%c", &c) == 1)
        if(c >= '0' && c <= '9')
            (*(nums+(c-'0')))++;
    
    for(int i = 0; i < 10; i++)
        printf("%d ", *(nums+i));
    */
    return 0;
}
