#include <stdio.h>
void main()
{
    int a,b,c;
    printf("\nEnter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        { 
            printf("%d",a);
        }
        else
        {
            printf("%d",c);
        }

        else
        {
            printf("%d",b);
        }
        
    }
    
    if(b>c)
    {
        printf("%d",b);
    
    else
    {
        printf("%d",c);
    }
    }
}