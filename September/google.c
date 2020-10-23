#include<stdio.h>
int main(void)
{
    int a,b,i=0,sum=0,rem,k=0;
    printf("enter a value");
    scanf("%d",&a);

    b=a+1;
    k=a*b;
    for(i=1;i<=k;i++)
    {
        rem=i%a;
        if(i%a==0)
        {
            continue;
        }
        else if(i%a!=0)
        {
            if(i%b==0)
            {
                continue;
            }
            else if(rem%b==0)
            {
                continue;
            }
            else
            {
                printf("%d\n",i);
                sum=sum+i;
            }
            
            
        }

   
    }
    
    printf("%d",sum);
  return 0;  
}
