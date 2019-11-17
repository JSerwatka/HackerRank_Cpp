#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for(int i = 0; s[i] != NULL; i++){
        if(s[i] == ' ') s[i] = '\n';
    }
    
    /* solution with pointers
    for(char *c = s; *c != NULL; c++){
        if(*c == ' ') *c = '\n';
    }
    */
    
    printf(s);
    return 0;
}