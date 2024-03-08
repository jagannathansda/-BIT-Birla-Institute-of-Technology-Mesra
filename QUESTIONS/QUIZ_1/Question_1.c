#include <stdio.h>

int main()
{
    int i,j,s,b,sum3,sum4;
    printf("Enter the Size of the Matrix : ");
    scanf("%d",&s);
    b=s-1;
    int a[s][s];
    int sum1[s],sum2[s];
    for(i=0;i<s;i++)
    {
        sum1[i]=0;
        sum2[i]=0;
        printf("\n\n");
        printf("Enter the value of Row %d \n",i);
        for(j=0;j<s;j++)
        {
            printf("Enter the value of Column %d ",j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n");
    sum3=0;
    sum4=0;
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("%d ",a[i][j]);
            sum1[i]=sum1[i]+a[i][j];
            sum2[j]=sum2[j]+a[i][j];
            if(j==i)
            {
                sum3=sum3+a[i][j];
                if(j==b)
                {
                sum4=sum4+a[i][j];
                }
            }
            else if(j==b)
            {
                sum4=sum4+a[i][j];
            }
        }
        printf("\n");
        b--;
    }
    printf("\n\n");
    printf("Sum of Prime Diagonal : %d \n\n",sum3);
    printf("Sum of Secondary Diagonal : %d \n\n",sum4);
    int count,count2,count3;
    count=0,count2=0,count3=0;
    for(i=0;i<s;i++)
    {
        printf("The Sum of Row %d : %d \n\n",i,sum1[i]);
        printf("The Sum of Column %d : %d \n\n",i,sum2[i]);
        for(j=0;j<s;j++)
        {
            if(a[i][j]%2==0)
            {
                count2++;
            }
            else
            {
                count3++;
            }
        }
        if(sum1[i]==sum2[i] && sum3==sum4)
        {
            count++;
        }
    }
    if(count==(s))
    {
        printf("Sum of Each Row , Column and Diagonal are the same in the Above Matrix \n\n");
    }
    else
    {
        printf("Sum of Each Row, Column and Diagonal are Not the Same in the Above Matrix \n\n");
    }
    printf("Number of Even Element in the Above Matrix : %d \n\n",count2);
    printf("Number of Odd Element in the Above Matrix : %d \n\n",count3);
    
}