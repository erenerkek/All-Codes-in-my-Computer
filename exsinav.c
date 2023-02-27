#include <stdio.h>
/*
int main() {
    int exams[4][5]={{1,67,76,55},{2,34,79,76},{3,56,68,57},{4,66,89,65}};
    int sum=0,maxid,maxavg;

    for (int i = 0; i < 4; ++i) {
        sum=0;
        for (int j = 1; j <=3; ++j) {
            sum=sum+exams[i][j];
        }
        sum=sum/3;
        exams[i][4]=sum;
    }
    maxid=exams[0][0];
    maxavg=exams[0][4];
    for (int i = 0; i <4 ; ++i) {
        if(exams[i][4]>maxavg){
            maxavg=exams[i][4];
            maxid=exams[i][0];
        }

    }
    printf("%d\n",maxavg);
    printf("%d",maxid);
}
*/
//sayı sıralama:
/*
int main()
{
    int temp,a[10]={1,4,3,3,6,0};
    for (int i = 0; i < 6; ++i) {
        printf("%d", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 6; ++i) {
        printf("%d",a[i]);
    }
}*/
//Alfabetik sıralama:
int main()
{
    char a[10],temp;
    int k;
    gets( a);
    puts(a);
    for (int i = 0; a[i] !='\0' ; ++i) {
        k++;
    }
    printf("%d",k);
    for (int i = 0; i <k ; ++i) {
        for (int j = 0; j <k ; ++j) {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    puts(a);

}