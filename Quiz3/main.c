#include <stdio.h>

void CreateScreen(char**,int,int);
void DestroyScreen(char*);
void PrintScreen(char*,int,int);

void MixCoordinates(float (*)[2],float[2],float[2],float);
void GenerateCurve(char**,int,int,float[2],float[2],float[2],float[2]);

int main()
{
    char* screen=0;
    // int w=10;
    // int h=10;
    int w=30;
    int h=30;
    CreateScreen(&screen,w,h);
    // float pos1[2]={6,0};
    // float pos2[2]={0,7};
    // float pos3[2]={6,8};
    // float pos4[2]={6,6};
    float pos1[2]={18,0};
    float pos2[2]={0,21};
    float pos3[2]={18,24};
    float pos4[2]={18,18};
    GenerateCurve(&screen,w,h,pos1,pos2,pos3,pos4);
    PrintScreen(screen,w,h);
    DestroyScreen(screen);
    return 0;
}
