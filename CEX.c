#include <stdio.h>
#include <string.h>
#include <math.h>

/*
int main()
{
    int a[100], counter1=0,size,temp,temp2;
    printf("Enter your size of array: ");
    scanf("%d",&size);
    for (int i = 0; i <size ; ++i) {
        printf("Enter your %d. element: ",i);
        scanf("%d",&a[i]);
    }
    for (int k = 0; k <size ; ++k) {
        temp =a[k];
        counter1=0;
        for (int j = 0; j <size ; ++j) {
            if(temp == a[j])
                counter1++;
        }
        printf("a[%d] = %d\n",k,counter1);
    }
}*//*
int average(int a[100],int size)
{
    int avg=0;
    for (int i = 0; i < size; ++i) {
            avg = avg + a[i];
    }
    avg = avg/size;
    return avg;
}
int main()
{
    int a[100],avg,size,b[50],c[50],j=0,k=0;
    printf("Enter your size of array: ");
    scanf("%d",&size);
    for (int i = 0; i < size; ++i) {
        printf("Enter your %d. element: ",i);
        scanf("%d",&a[i]);
    }
    avg = average(a[100],size);
    for (int i = 0; i < size; ++i) {
        if(a[i]>avg) {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }

    }

}*/
/*
int main()
{
    int a[10],temp=0,flag=0;
    for (int i = 0; i < 10; ++i) {
        printf("Enter your %d. element: ",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i <10; ++i) {
        temp = a[i];
        flag=0;
        for (int j = 0; j <10; ++j) {
            if (temp>=a[j]) {
                flag++;
            }
            if(flag==10)
                printf("En buyuk1: %d\n",a[i]);

            if(flag==9)
                printf("En buyuk2: %d",a[i]);

        }
    }

}*//*

char ch[50];
void Order() {
    int i, j;
    char tem;
    int Length = strlen(ch);
    for (i = 0; i < Length - 1; i++) {
        for (j = i + 1; j < Length; j++) {
            if (ch[i] > ch[j]) {
                tem = ch[i];
                ch[i] = ch[j];
                ch[j] = tem;
            }
        }
    }
}
int main() {
    printf("\n Enter a string that you want to be arranged in alphabetical order : ");
    fgets(ch, 50, stdin);
    Order();
    puts(ch);
    return 0;
}*//*
int main()
{
    char str[100];
    int i,count = 0;

    scanf("%s",str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if( str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||
            str[i] == 'u')
        {
            count++;
        }
    }
    printf("vowel count = %d\n",count);

    return 0;
}*//*
int a(int a[])
{

}
int main()
{
    int a[]={1,2,3,5,6};
    int temp, b=4;
    for (int i = 0; i !='\n' ; ++i) {
    a(a);
    }
}*//*
void Square(int a[], int b[])
{
    for (int i = 0; i < 10; ++i) {
        b[i]=a[i]*a[i];
    }

}
void Root(int a[],float c[])
{
    for (int i = 0;i<10;++i)
    {
        c[i]= pow(a[i],0.5);
    }
}
int main()
{
    int a[10], b[10];
    float c[10];
    for (int i = 0; i < 10; ++i) {
        printf("Enter your value: ");
        scanf("%d",&a[i]);
    }
    Square(a,b);
    for (int i = 0; i < 10; ++i) {
        printf("%d ",b[i]);
    }
    Root(a,c);
    for (int i = 0; i < 10; ++i) {
        printf("%f ",c[i]);
    }
}*//*
void fun(int a[])
{
    for (int i = 0; i < 10; ++i) {
        a[9-i]=a[i]*-1;

    }
}
int main()
{
    int a[10];
    printf("Enter your values: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d.:",i);
        scanf("%d",&a[i]);
    }
    fun(a);
    for (int i = 0; i < 10; ++i) {
        printf("%d ",a[i]);
    }
}*/