//***************************************
//** SUBMIT ONLY THIS FILE
//** DO NOT CHANGE ANYTHING
//** ONLY ADD THE IMPLEMENTATION
//***************************************
#include <stdio.h>
#include <math.h>

//****************** Q1 ******************
#define WIDTH 140
#define HEIGHT 20

void generateSine()
{
    //implementation goes here
    int i, j, y;
    double x, sine;
    
    for(y = HEIGHT; y >= -HEIGHT; y--)// Dikey eksende HEIGHT ile -HEIGHT arasındaki değerleri temsil eden 2*HEIGHT+1 satır oluşturulur
    {
        for(i = 0; i < WIDTH; i++)// Yatay eksende 0 ile WIDTH arasındaki değerleri temsil eden sütunlar oluşturulur
        {
            x = (double)i / WIDTH * 2 * M_PI;// x için açı dönüşümü
            sine = sin(x);                   // sinüs hesaplanması 
            if(sine * HEIGHT >= y && sine * HEIGHT < y + 1){ // Yükseklik, dikey konuma eşitse * yazdırlır
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
    double u = ((x3 - x1) * px + (y3 - y1) * py) / (temp); // C(x3,y3) noktasının doğru parçası üzerindeki konumu hesaplanır ve u değişkenine atanır
    if(u > 1){
        u = 1;
    }else if(u < 0){
        u = 0;
    }
    double x = x1 + u * px; // (x3,y3) noktasının doğru parçası üzerindeki izdüşümünün x koordinatı hesaplanır
    double y = y1 + u * py; // (x3,y3) noktasının doğru parçası üzerindeki izdüşümünün y koordinatı hesaplanır
    double dx = x - x3; 
    double dy = y - y3; 
    double distance = sqrt(dx * dx + dy * dy); // mesafe hesaplama
    return distance;
}
