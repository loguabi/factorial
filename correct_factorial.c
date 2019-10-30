#include<stdio.h>
int main()
{
    int n,i;
    unsigned long long factorial=1;
    scanf("%d",&n);

    for(i=2;i<=n;++i) // Loop should start from 2 and not 0
    {
        factorial*=i;
    }

    printf("%d= %llu",n,factorial);
    
    return 0;
}
