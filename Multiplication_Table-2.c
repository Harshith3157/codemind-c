#include<stdio.h>
int main ()
{
    int n,i,m;
    scanf("%d%d%d",&n,&m);
    for(i=1;i<=m;i++)
    printf("%d x %d = %d
",n,i,n*i);
    
}