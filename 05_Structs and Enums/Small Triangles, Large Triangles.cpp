#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void swap(float *xp, float *yp){
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void struct_swap(triangle *strone, triangle *strtwo){
    triangle temp = *strone;
    *strone = *strtwo;
    *strtwo = temp;
}

void bubblesort(float *arr, triangle *tr, int n){
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                struct_swap(&tr[j], &tr[j+1]);
            }
        }
    }
}

void sort_by_area(triangle* tr, int n) {
    float *p = malloc(n * sizeof(float));
    float *S = malloc(n * sizeof(float));
    
    for (int i = 0; i < n; i++){
        p[i] = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        S[i] = sqrt(p[i] * (p[i] - tr[i].a) * (p[i] - tr[i].b) * (p[i] - tr[i].c));
    }
    bubblesort(S, tr, n);
    
    free(p);
    free(S);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}