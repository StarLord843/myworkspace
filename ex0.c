#include <stdio.h>
int main (void)
{
    int n,s[100][100];
    printf("Upto how many height you want?\n");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<n-1-i;k++)
            {
                printf(" ");
            }
        for(int j=0;j<=i;j++)
        {
            if(j==0)
            {
             s[i][j]=1;
             printf(" %d",s[i][j]);
            }
            else if(j==i)
            {
              s[i][j]=1;
             printf(" %d",s[i][j]);  
            }
            else
            {
                s[i][j]=s[i-1][j-1]+s[i-1][j];
                printf(" %d",s[i][j]);
            }
        }
        printf("\n");
    }
}
