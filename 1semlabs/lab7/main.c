#include<stdio.h>
#include<math.h>


enum lamps {
    daylamp, glowlamp, halogenous
};
struct coordinates {
    int x, y, fisrtside,  secondside;
};

union MP3 {
    unsigned int x;
    struct {
        unsigned int Play: 1, Pause: 1, Record: 1;
    };
};

int main() {
    printf("%d\n", halogenous);
    struct coordinates rect;
    rect.x = 1;
    rect.y = 1;
    rect.fisrtside = 2;
    rect.secondside = 3;
    int perimetr = 2 * rect.fisrtside + 2 * rect.secondside;


    printf("%d\n", perimetr);
    union MP3 k;
    scanf("%u", &k.x);
    printf("NumLock : %d\nCapsLock : %d\nScrollLock : %d", k.Play, k.Pause, k.Record);

    return 0;
}
