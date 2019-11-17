#include "myMath.h"
#include <stdio.h>

int main( int argc , char **argv)
{
printf("wellcome to roie's first C program, this program will recive a real number to preform the next calculations for you\n");
printf("Please enter a real number so we can start the calculations\n");



float x ;
scanf("%f" , &x);
int int_x = (int) x ; //cast a float x into int
printf("the first function will be f(x) = e^x+x^3-2\n");
//first we calculate  "e^x+x^3"
//afterward  substruct it with 2.
double ex =Exp(int_x);
float x3 = Pow(x,3);
float ex3x = add(ex,x3);
float ans1 = sub(ex3x , 2);
//flag %g in printf ,uses the shorter version of %e or %f
//answere1 print
printf("the value of f(%0.4f) = e^x+x^3 at the point %0.4f is %0.4f\n" ,x ,x,ans1);
printf("the second function will be f(x) = 3x+2x^2\n");
//first we will calculate 3x , then 2x^2 , and add this values together
//3x
double threeX =  mul(x ,3);
//2x^2
double twoTimesXSquered = mul(Pow(x,2) , 2);
//3x+2x^2ain.c:4:8: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘int’

double ans2 = add( threeX , twoTimesXSquered );
//answere2 print
printf("the value of f(%0.4f) = 3x+2x^2 at the point %0.4f is %0.4f\n" ,x ,x,ans2);
printf("the third function is (4x^3)/5-2x\n");
//first calculate 4x^3,then 5-2x,and then devide them
//4x^3
double fourXcube = mul(Pow(x,3) , 4);
//5-
double divBy5 =div(fourXcube , 5);
double ans3 = sub(divBy5,mul(x,2));
//answere3 print
printf("the value of f(%0.4f) = (4x^3)/5-2x at the point %0.4f is %0.4f\n" ,x ,x,ans3);
printf("hope you had fun!\n");
return 0 ;
}
