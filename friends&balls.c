#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,m,j,q,k,count,l,r,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        a[i]=0;
    }
     scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&l,&r);
        for(j=l;j<=r;j++)
        {
            a[j]++;
        }
    }
    scanf("%d",&q);
    for(k=0;k<q;k++)
    {
        scanf("%d",&x);
        count=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=x)
                count++;
        }
        printf("%d\n",count);
    }
    
    return 0;
}
