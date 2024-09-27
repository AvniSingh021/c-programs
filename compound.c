#include<stdio.h>
#include<math.h>
int main(){
    double A;
    double p=5;
    double r=5.0/100;
    int n=2;
    int t=10;
    A=p *pow((1+r/n),n*t);
   printf(" value of A:%f\n",A);
   
    return 0;


}