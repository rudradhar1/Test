#include<stdio.h>
int main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);// 1358

    int A = num%10;//8
    int B = num/10;//135
    int C = B%10;//5
    int D =  B/10;//13
    int E = D%10;//3
    int F = D/10;//1


    int N = A*1000+ C*100+E*10+F;
    printf("%d",N);

    return 0;
}
