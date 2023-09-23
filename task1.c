#include<stdio.h>
int main(){
    double a;
    double b;
    scanf("%lf %lf", &a,&b);
    if (a==0 || b==0) 
    printf("Error");
    else{
        printf("%lf\n", a+b);
        printf("%lf\n", a-b);
        printf("%lf\n", a*b);
        printf("%lf\n", a/b);
}
return 0;
   }