//***************************************
//** SUBMIT ONLY THIS FILE
//** ONLY PUT THE IMPLEMENTATION
//***************************************
#include <stdio.h>
#include <math.h>

#define MAX 10
float mem[2*MAX];
int count=0;

void print()
{
    // add implementation here
    printf("Bellek:\n");
    int i;
    for (i = 0; i < count; i++) {
        printf("%.2f+%.2fi\n", mem[2*i], mem[2*i+1]);
    }
    printf("\n");
}

void print_polar()
{
    // add implementation here
    printf("(Polar)Bellek:\n");
    int i;
    for (i = 0; i < count; i++) {
        float re = mem[2*i];
        float im = mem[2*i+1];
        float r = sqrt(re*re + im*im);
        float angle = atan2(im, re);
        printf("%.6f[+%.3fdeg]\n", r, angle*180/M_PI);
    }
    printf("\n");
}

void push(float re,float im)
{
    // add implementation here
    if (count < MAX) {   // Bellek kapasitesi henüz dolmadýysa
        mem[2*count] = re;
        mem[2*count+1] = im;
        count++;
        printf("%.2f+%.2fi sisteme eklendi!\n", re, im);
    }
    else {   // Bellek kapasitesi dolduysa
        printf("Bellek dolu!\n");
    }
}

void pop()
{
    // add implementation here
    if (count > 0) {   // Bellekteki kompleks sayý sayýsý sýfýrdan büyükse
        mem[2*(count-1)] = 0.0f;
        mem[2*(count-1)+1] = 0.0f;
        count--;
    }
    else {   // Bellekteki kompleks sayý sayýsý zaten sýfýrsa
        printf("Bellek bos!\n");
    }
}

void sort() {
     // add implementation here
     printf("Siralama yapildi!\n\n");
     int i, j;
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (mem[i * 2] > mem[j * 2]) {
                float temp_re = mem[i * 2];
                float temp_im = mem[i * 2 + 1];
                mem[i * 2] = mem[j * 2];
                mem[i * 2 + 1] = mem[j * 2 + 1];
                mem[j * 2] = temp_re;
                mem[j * 2 + 1] = temp_im;
            } else if (mem[i * 2] == mem[j * 2]) {
                if (mem[i * 2 + 1] > mem[j * 2 + 1]) {
                    float temp_re = mem[i * 2];
                    float temp_im = mem[i * 2 + 1];
                    mem[i * 2] = mem[j * 2];
                    mem[i * 2 + 1] = mem[j * 2 + 1];
                    mem[j * 2] = temp_re;
                    mem[j * 2 + 1] = temp_im;
                }
            }
        }
    }
}

void sort_polar()
{
     // add implementation here
     printf("Polar siralama yapildi!\n\n");
     int i, j;
    for (i = 0; i < count - 1; i++) {
        for (j = i + 1; j < count; j++) {
            if (mem[i * 2 + 1] > mem[j * 2 + 1]) {
                float temp_re = mem[i * 2];
                float temp_im = mem[i * 2 + 1];
                mem[i * 2] = mem[j * 2];
                mem[i * 2 + 1] = mem[j * 2 + 1];
                mem[j * 2] = temp_re;
                mem[j * 2 + 1] = temp_im;
            } else if (mem[i * 2 + 1] == mem[j * 2 + 1]) {
                if (mem[i * 2] > mem[j * 2]) {
                    float temp_re = mem[i * 2];
                    float temp_im = mem[i * 2 + 1];
                    mem[i * 2] = mem[j * 2];
                    mem[i * 2 + 1] = mem[j * 2 + 1];
                    mem[j * 2] = temp_re;
                    mem[j * 2 + 1] = temp_im;
                }
            }
        }
    }
}
int main()
{
    push(2,2);
    push(-2,3);
    push(1,1);
    push(1,-1);
    print();
    sort();
    print();

    sort_polar();
    print();
    print_polar();
    getch();
    pop();
    sort();
    print();
    return 0;
}
