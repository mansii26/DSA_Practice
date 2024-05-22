#include <stdio.h>
/*
every square has dialgonal so do have r==c
* * * *
*     *
*     *
* * * *
*/


void Display(int iRow, int iCol)
{
    int r=0;
    int c=0;
    for(r=1;r<=iRow;r++){
     for(c=1;c<=iCol;c++){
       
         if((r==1)||(c==1) ||(c==iCol)||(r==iRow))
        {
            printf("*\t",c);
        }
        else
        {
            printf(" \t");
        }
     }
     printf("\n");
    } 
}

int main() {
    int iValue1=0, iValue2=0;
    
    printf("enter the rows");
    scanf("%d",&iValue1);
    
    printf("enter the col");
    scanf("%d",&iValue2);
    
    
    Display(iValue1,iValue2);

    return 0;
}
