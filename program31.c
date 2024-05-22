//////////////////////////////////////////////////////
// function name :CalculateTicket
// description: Check age and ticket price 
// input: int 
// output: int 
//author: Mansi Ingle
//date: 29/04/24
/////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

int FactorOfFour(int iNo)
{
    if((iNo%4)==0)
    { return true;}
    else{ return false;}
}
int main(){
    int iValue=0;
    bool bRet=false;

    printf("enter the number \n");
    scanf("%d" &iValue);

    bRet=FactorOfFour(iValue);
    if (bRet==true)
    {
        printf("yes, it is the factor of 4 \n");
    }
    else
    {
        printf("no, it is  not the factor of 4 \n");
    }

    return 0;
}