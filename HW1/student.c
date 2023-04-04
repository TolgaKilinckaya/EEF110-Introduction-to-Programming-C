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
    
    for(y = HEIGHT; y >= -HEIGHT; y--)// Dikey eksende HEIGHT ile -HEIGHT arasýndaki deðerleri temsil eden 2*HEIGHT+1 satýr oluþturulur
    {
        for(i = 0; i < WIDTH; i++)// Yatay eksende 0 ile WIDTH arasýndaki deðerleri temsil eden sütunlar oluþturulur
        {
            x = (double)i / WIDTH * 2 * M_PI;// x için açý dönüþümü
            sine = sin(x);                   // sinüs hesaplanmasý 
            if(sine * HEIGHT >= y && sine * HEIGHT < y + 1){ // Yükseklik, dikey konuma eþitse * yazdýrlýr
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
    double u = ((x3 - x1) * px + (y3 - y1) * py) / (temp); // C(x3,y3) noktasýnýn doðru parçasý üzerindeki konumu hesaplanýr ve u deðiþkenine atanýr
    if(u > 1){
        u = 1;
    }else if(u < 0){
        u = 0;
    }
    double x = x1 + u * px; // (x3,y3) noktasýnýn doðru parçasý üzerindeki izdüþümünün x koordinatý hesaplanýr
    double y = y1 + u * py; // (x3,y3) noktasýnýn doðru parçasý üzerindeki izdüþümünün y koordinatý hesaplanýr
    double dx = x - x3; 
    double dy = y - y3; 
    double distance = sqrt(dx * dx + dy * dy); // mesafe hesaplama
    return distance;
}
