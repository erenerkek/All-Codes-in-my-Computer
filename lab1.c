#include <stdio.h>
/*
int main() {
    int a= 0;
    int b =0;
    scanf("%d %d",&a,&b);
    printf("%d",a+b);
    return 0;
}
*/
/*
int main(){

    int a,b,temp;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);

    temp=b;
    b=a;
    a=temp;
    printf("%d %d",a,b);
}*//*
int main(){

    int stID;
    float final, vize;
    float result;
    printf("Enter your student ID: ");
    scanf("%d",&stID);
    printf("Enter your midterm mark: ");
    scanf("%f",&vize);
    printf("Enter your final mark: ");
    scanf("%f",&final);

    result= (vize*0.6)+(final*0.4);

    printf("%d %f",stID,result);

}*//*
int main(){
    int choice,r;
    float pi = 3.14;
    printf("Enter your radius: ");
    scanf("%d",&r);
    printf("Enter your process:\n1-cevre 2- alan ");
    scanf("%d",&choice);
    if(choice==1)
        printf("%f",2*pi*r);

    else if(choice==2)
        printf("%f",pi*(r*r));
    else
        printf("Wrong input");
}*//*
int main()
{
    int p,hun=0,fif=0,twe=0,ten=0;
    printf("Enter your money value:(it must be 10x) ");
    scanf("%d",&p);
    if(p>=100)
    {
        hun = p/100;
    }
    p=p%100;
    if(p>=50){
        fif= p/50;
    }
    p=p%50;
    if(p>=20)
        twe=p/20;
    p=p%20;
    if(p>=10)
        ten=p/10;
    p=p%10;
    printf("%d %d %d %d",hun, fif,twe,ten);


}*/
int main(){
    int sum=0,sub=0,mul=1,div=1;
    int a;
    while(a!= -1)
    {
        scanf("%d",&a);
        sum=sum+a;
        sub=sub-a;
        mul=mul*a;
        div=div/a;


    }
        printf("%d %d %d %d",sum,sub,mul,div);

}