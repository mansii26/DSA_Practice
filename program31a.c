#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
   int iCnt=0;    
   for (iCnt=1; iCnt<=iNo; iCnt++)
   {
    printf("%d\n", iCnt);
   } 
}

int main(){
    int iValue=0;

    printf("enter the number \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
