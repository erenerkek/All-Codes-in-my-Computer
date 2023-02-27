#include <stdio.h>

int factorial();
/*
int main() {
    int a,b,c;
    printf("Enter your first: ");
    scanf("%d",&a);
    printf("Enter your second: ");
    scanf("%d",&b);
    printf("Enter your third: ");
    scanf("%d",&c);

    if (a>=b&&a>=c)
        printf("first is the biggest.");
    if(b>=a&&b>=c)
        printf("Second is the biggest.");
    if(c>=a&&c>=b)
        printf("third is the biggest.");
}
*//*
int main()
{
    int a,n=1,i;
    printf("Enter your value: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++) {
        n = n * i;
    }
    printf("%d",n);

}*//*
int main(){
    int n;
    for(n=1000;n<=2000;n++)
    {
        if(n%2==0)
            printf("%d",n);
    }
}*//*
int main(){
    int n, rev = 0, digit, num;
    printf("Enter an integer: ");
    scanf("%d", &n);
    num = n;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (num == rev)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);
}*/
int main()
{
    int sum=1,n,i;
    printf("Enter your n value:");
    scanf("%d",&n);
    for (i = 1; i <=n ; i++) {
        sum=sum+n^i/factorial(i);

    }
    printf("%d",sum);
}

int factorial(int i)
{
    int fac=1;
    while(i>0){
        fac=fac*i;
        i--;
    }
    return fac;
}