#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[4], *l;
    l = arr;
    *l = 1000;
    *(l+1) = 1001;
    *(l+2) = 1002;
    *(l+3) = 1003;
    for(int i = 0; i < 4; i++) {
        printf("%d ", *(l + i));
    }
    printf("\n");
    unsigned n;
    scanf("%d", &n);
    int *r;
    r = (int *) malloc(n * sizeof(int));
    *r = 1000;
    *(r + 1) = 1001;
    *(r + 2) = 1002;
    *(r + 3) = 1003;
    for(int i = 0; i < n; i++) {
        printf("%d ", *(r + i));
    }
    free(r);
    return 0;
}
