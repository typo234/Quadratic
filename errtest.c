#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void main(int argc,char *argv[]){

float a = 93101.0;
int b = 2;
float c = 2.0;
int d = 0;
float ans = a/b;
float ans2 = c/d;
float quad = ((0-b)+sqrt((b*b)-(4*a*c))/(2*a));

unsigned int u_ans1;
u_ans1 = (unsigned int) ans;
char output[9];

// test for NaN
printf("ans a/b: %.2f\n",ans);

//test for inf
//printf("ans2 c/d: %f\n",ans2);

//test +nan
printf("ans3 b/a: %.2f\n",(b/a));

//testing quad
printf("quad: %.3f\n",quad);

//testing unsigned int
sprintf(output,"%08x\n",u_ans1);
printf("hex: %s\n",output);
}