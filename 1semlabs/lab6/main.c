#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[4], *l;
    l = arr;
    arr[0] = 1000;
    arr[1] = 1001;
    arr[2] = 1002;
    arr[3] = 1003;
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
