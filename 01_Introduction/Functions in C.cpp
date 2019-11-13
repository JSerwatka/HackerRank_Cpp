#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int arr[4] = {a, b, c, d};
    int current_highest = arr[0];
    for (int i = 0; i < 4; i++){
        if(arr[i] > current_highest)
            current_highest = arr[i];
    }
    return current_highest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}