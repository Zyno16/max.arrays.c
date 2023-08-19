#include <stdio.h>
#include <stdlib.h>


int main()
{int i,max;
    int t[10];
    for(i=0;i<10;i++){
    printf("enter t[%d]",i+1);
    scanf("%d",&t[i]);
    }
    max=t[0];
    for(i=1;i<10;i++){
        if(max<t[i])
            max=t[i];
    }
    printf("max=%d",max);

    return 0;
}
