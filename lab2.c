#include <stdio.h>
/*
int main() {
    float a[10],sum=0;
    for (int i = 0; i <8 ; ++i) {
        printf("Enter your number: ");
        scanf("%f",&a[i]);
    }

    for (int i = 0; i < 8; ++i) {
        sum=sum+a[i];
    }
    printf("%f",sum/8);
}*//*
int main()
{
    int a[10],i;
    for (int i = 0; i <10 ; ++i) {
        printf("Enter your %d. value: ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d ",a[i]*a[i]);
    }
}*//*
int main()
{
    int n,i=0,digit,a[5],temp,length;
    printf("Enter your number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        temp=temp/10;
        i++;
    }
    length=i;
    i--;
    while(n>0)
    {

        digit=n%10;
        n=n/10;
        a[i]=digit;
        i--;
    }
    for (int i = 0; i <length ; i++) {
        printf("%d ",a[i]);
    }

}*//*
int main() {

    int e;
    printf("Dizinin eleman sayısını giriniz : ");
    scanf("%d" , &e);

    int d[e];

    for(int i = 0 ; i < e ; i++)
    {
        scanf("%d" , &d[i]);
    }
    printf("İlk dizi : ");
    for(int i = 0 ; i < e ; i++)
    {
        printf("%d  " , d[i]);
    }

    int j = e - 1;
    for(int i = 0 ; i < e/2 ; i++)
    {

        int t = d[i];
        d[i] = d[j];
        d[j] = t;

        j--;
    }
    printf("\n");
    printf("Dizinin tersi : ");
    for(int i = 0 ; i < e ; i++)
    {
        printf("%d  " , d[i]);
    }

    return 0;
}*//*
int main()
{
    int n;
    scanf("%d",&n);

    for (int i = 1; i <n*2-1 ; ++i) {
        printf("%d",n);
        for (int j = 0; j < n; ++j) {

        }
    }
}*/