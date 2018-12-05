
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int year[10];

    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&year[i]);
    }
     for(i=0;i<n;i++)
     {
    if(year[i]%4 == 0)
    {
        if( year[i]%100 == 0)
        {
        // check for leap year//
        //check for leap year//
        //check for leap year//
        //check for leap year//
        //check for leap year//
            if ( year[i]%400 == 0)
                printf("no\n");
            else
                printf("yes\n");
        }
        else
            printf("yes\n");
    }
    else
        printf("no\n");
     }
    return 0;
}
// print if it is a leAP YEAR
//
