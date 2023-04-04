//***************************************
//** SUBMIT ONLY THIS FILE
//** DO NOT CHANGE ANYTHING
//** ONLY ADD THE IMPLEMENTATION
//***************************************
#include <stdio.h>
#include <math.h>

//****************** Q1 ******************
#define WIDTH 14
#define HEIGHT 2

void generateSine()
{
    //implementation goes here
    int i, j, y;
    double x, sine;
    
    for(y = HEIGHT; y >= -HEIGHT; y--)// Dikey eksende HEIGHT ile -HEIGHT aras�ndaki de�erleri temsil eden 2*HEIGHT+1 sat�r olu�turulur
    {
        for(i = 0; i < WIDTH; i++)// Yatay eksende 0 ile WIDTH aras�ndaki de�erleri temsil eden s�tunlar olu�turulur
        {
            x = (double)i / WIDTH * 2 * M_PI;// x i�in a�� d�n���m�
            sine = sin(x);                   // sin�s hesaplanmas� 
            if(sine * HEIGHT >= y && sine * HEIGHT < y + 1){ // Y�kseklik, dikey konuma e�itse * yazd�rl�r
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//****************** Q2 ******************
double line_segment_distance(int x1,int y1,int x2,int y2,int x3,int y3)
{
    //implementation goes here
    double px = x2 - x1; 
    double py = y2 - y1; 
    double temp = px * px + py * py;  
    double u = ((x3 - x1) * px + (y3 - y1) * py) / (temp); // C(x3,y3) noktas�n�n do�ru par�as� �zerindeki konumu hesaplan�r ve u de�i�kenine atan�r
    if(u > 1){
        u = 1;
    }else if(u < 0){
        u = 0;
    }
    double x = x1 + u * px; // (x3,y3) noktas�n�n do�ru par�as� �zerindeki izd���m�n�n x koordinat� hesaplan�r
    double y = y1 + u * py; // (x3,y3) noktas�n�n do�ru par�as� �zerindeki izd���m�n�n y koordinat� hesaplan�r
    double dx = x - x3; 
    double dy = y - y3; 
    double distance = sqrt(dx * dx + dy * dy); // mesafe hesaplama
    return distance;
}
