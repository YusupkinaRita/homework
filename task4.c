#include<stdio.h>
int main(){
    double v1, v2, s, t, s1;
    printf("v1=");scanf("%lf", &v1);
    printf("v2=");scanf("%lf", &v2);
    printf("s=");scanf("%lf", &s);
    printf("t=");scanf("%lf", &t);
    s1=s+(v1+v2)*t;
    printf("s1=");
    printf("%lf",s1);
    return 0;
}