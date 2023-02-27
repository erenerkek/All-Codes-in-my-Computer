#include <stdio.h>
/*
int main() {

    int a,b;
    printf("Enter your first number");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);

    printf("%d",a+b);
}
*//*
int main()
{
    float r, area, pi=3.14;

    printf("Enter your radius: ");
    scanf("%f",&r);
    area=pi*(r*r);
    printf("%f",area);
}
*//*
int main() {
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
}
*//*
int main()
{
    int temp;
    printf("Enter your temp");
    scanf("%d",&temp);
    if(temp>0)
        printf("above freeze point");
    else if(temp==0)
        printf("at freeze point");
    else
        printf("below freeze point");
}
*//*
int main()
{
    float san,fah;

    printf("Enter your celcius: ");
    scanf("%d",&san);
    fah=san*1.8+32;
    printf("%d",fah);
}
*//*
int main()
{
    float feet, cm;
    printf("Enter your feet value: ");
    scanf("%f",&feet);
    cm=feet*30.48;
    printf("%f",cm);
}
*/
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) {
        if (a > c)
            printf("%d is the biggest", a);
    }
    else if(b>a) {
        if (b > c)
            printf("%d is the biggest", b);
    }
    else {
        printf("%d is the biggest", c);
    }
}