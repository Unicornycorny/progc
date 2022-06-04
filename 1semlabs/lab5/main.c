#include <stdio.h>

int main() {
    int arr[] = {77, 12, 74, 23, 56, 12, 48};
    for(int i = 0; i < 7; i++) {
        printf("%d %d \n", i, arr[i]);
    }
    int a[2][2], b[2][2], c[2][2];
    a[0][0] = 1;
    a[0][1] = 0;
    a[1][0] = 1;
    a[1][1] = 4;
    b[0][0] = 1;
    b[0][1] = 2;
    b[1][0] = 0;
    b[1][1] = 1;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            c[i][j] = 0;
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
