#include <stdlib.h>
#include <stdio.h>

void DestroyScreen(char* screen)
{
    // implementation goes here
    free(screen);
}
void CreateScreen(char** screen, int w, int h) {
    int i;
    *screen = malloc(w * h * sizeof(char*));
    for (i = 0; i < w * h; i++) {
        (*screen)[i] = '.';
    }
}
void PrintScreen(char* screen, int w, int h) {
    int i, j;
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            printf("%c", screen[i * w + j]);
        }
        printf("\n");
    }
}

void MixCoordinates(float (*c)[2],float a[2],float b[2],float t)
{
    // implementation goes here
    (*c)[0] = (1 - t) * a[0] + t * b[0];
    (*c)[1] = (1 - t) * a[1] + t * b[1];
}

void GenerateCurve(char* *screen,int w,int h,float p0[2],float p1[2],float p2[2],float p3[2])
{
    // implementation goes here
    float a[2], b[2], c[2], d[2], e[2], n[2], t;
    for (t = 0; t <= 1; t += 0.01) {
        MixCoordinates(&a, p0, p1, t);
        MixCoordinates(&b, p1, p2, t);
        MixCoordinates(&c, p2, p3, t);
        MixCoordinates(&d, a, b, t);
        MixCoordinates(&e, b, c, t);
        MixCoordinates(&n, d, e, t);
        int x = (int)(n[0]);
        int y = (int)(n[1]);
        if (x >= 0 && x < w && y >= 0 && y < h) {
             (*screen)[h*w - (y * w) + x] = '+';
        }
    }
    (*screen)[w*h -((int)(p0[1])*w)+(int)(p0[0])] = 'x';
    (*screen)[w*h -((int)(p1[1])*w)+(int)(p1[0])] = 'x';
    (*screen)[w*h -((int)(p2[1])*w)+(int)(p2[0])] = 'x';
    (*screen)[w*h -((int)(p3[1])*w)+(int)(p3[0])] = 'x';
}
