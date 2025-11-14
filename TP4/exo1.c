#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*Question 1*/

void somme(int x, int y, int* pres){
    printf("-----------\nDans somme\n-----------\n x: %d , adresse de x: %p\n",x,&x);
    *pres = x + y;
}


/*Question 2*/
void sommediff(int *px, int* py){
    printf("-----------\nDans sommediff\n-----------\n x: %d , adresse de x: %p\n",*px,px);
/*Compléter ci-dessous*/
    int temp_x = *px;
    *px = *px + *py;
    *py = temp_x - *py;

}

/*Question 3*/

void get_circle_info(double diameter, double* pperimeter, double* parea){
/*Compléter ci-dessous*/
    double radious = 0.5 * diameter;
    *pperimeter = M_PI * diameter;
    *parea = M_PI * radious * radious;    
}


/*Question 4*/
int main(){
    
    int x,y,z;
    double d=12.;
    double peri,surf; 
    x = 10;
    y=7;
 
    printf("-----------\nDans le main\n-----------\n x: %d , adresse de x: %p\n",x,&x);
    // utilisez somme pour mettre dans z le resultat de x+y ICI 
    somme(x,y,&z);
    
    printf("-----------\nDans le main (2)\n-----------\n x: %d , adresse de x: %p\n",x,&x);
    // utilisez sommediff pour mettre dans x le resultat de x+y et dans y le résultat de x-y ICI
    sommediff(&x, &y);
    
    printf("-----------\nDans le main (3)\n-----------\n x: %d , adresse de x: %p\n",x,&x);

    printf("-----------\nValeurs finales de x, y et z\n-----------\nx: %d, y: %d , z: %d\n",x,y,z);
    // résultat attendu: 17 3 17
    
    // utilisez ICI get_circle_info avec le diamètre d pour obtenir le pérmètre dans peri et la surface dans surf 
    get_circle_info(d, &peri, &surf);

    
    printf("\nDiamètre : %lg , périmètre : %lg , surface : %lg\n",d,peri,surf);
    
    return 0;
    
}
