//***************************************
//** DO NOT SUBMIT THIS FILE
//***************************************
#include <stdio.h>
#include <math.h>

int main()
{
    /*   Q1 */
    // some code to test the function(s)
    generateSine();

    /*   Q2 */
    // some code to test the function(s)
    
    //first edge coordinates of a line segment in form x,y : 0,4
    //second edge coordinates of a line segment in form x,y : 3,0
    //point coordinates in form x,y : 3,4
    double dist=line_segment_distance(0,4,3,0,3,4);
    printf("distance:%lf\n",dist);
    // this printfs 2.4
    getch();
    return 0;
}
