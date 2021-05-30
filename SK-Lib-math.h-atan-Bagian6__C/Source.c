// crt_atan.c
// arguments: 5 0.5
#include <math.h>
#include <stdio.h>
#include <errno.h>
#include <conio.h>

/*  Source by Microsoft
    Modified for Learn by Rizky Khapidsyah
    I.D.E : VS2019
*/

int main(int ac, char* av[]){
    double x, y, theta;

    if (ac != 3) {
        fprintf(stderr, "Usage: %s <x> <y>\n", av[0]);
        return 1;
    }

    x = atof(av[1]);
    theta = atan(x);
    
    printf("Arctangent of %f: %f\n", x, theta);
    
    y = atof(av[2]);
    theta = atan2(y, x);
    
    printf("Arctangent of %f / %f: %f\n", y, x, theta);

    _getch();
    return 0;
}