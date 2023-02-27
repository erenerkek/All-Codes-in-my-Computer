#include <stdio.h>
#include <string.h>
/*int square(int a)
{
    return a*a;
}

int main() {
    int a;
    printf("Enter your value: ");
    scanf("%d",&a);
    printf("%d",square(a));
}*//*
int average(int a,int b,int c,int d,int e,int f)
{
    return (a+b+c+d+e+f)/6;
}
int main()
{
    int a=1,b=2,c=3,d=4,e=5,f=3;
    printf("%d",average(a,b,c,d,e,f));
}*/
/*
int eoo(int a)
{
    if(a%2==0)
        printf("cift");
    else
        printf("tek");
}
int main()
{
    int a=2;
    eoo(a);
}*//*
int armstrong(int n)
{
    int temp,r,sum;
    temp = n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
        return 1;
    else
        return 0;
}
int prime(n)
{
    int flag=0;
    for (int i = 0; i <= n ; ++i) {
        if (n%i==0) {

            flag=1;
            return 0;
        }
    }
    if(flag==0)
        return 1;
}

int main()
{
    int n,a,p;
    printf("enter: ");
    scanf("%d",&n);
    a = armstrong(n);
    p= prime(n);
    if(a==1&&p==1)
        printf("Prime and armstrong");
    else if(a==1&&p==0)
        printf("armstrong");
    else
        printf("prime");

}*/
int wordc(char cumle[])
{
    int sayac = 1;
    for (int i = 0; i < strlen(cumle); ++i) {
        printf("%c",cumle[i]);
        if(cumle[i]==' ') {
            printf("\n");
            sayac++;
        }
    }
    return sayac;


}

int main()
{
    char cumle[100];
    printf("Bir cumle giriniz: ");
    gets(cumle);
    printf("\n %d",wordc(cumle));

}
