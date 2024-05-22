
#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////
// function name :CalculateTicket
// description: Check age and ticket price 
// input: int 
// output: int 
//author: Mansi Ingle
//date: 29/04/24
/////////////////////////////////////////////////////////////


int CalculateTicket(int iAge)
{
  if ((iAge>=0) && (iAge<=4))
  { return 0; }
  else if((iAge>4)&& (iAge<=10))
  { return 900; }
  else if((iAge>10)&& (iAge<=50))
  { return 2000; }
  else if(iAge>50)
  { return 500; }
}

int main()
{
 int iValue=0;
 int iRet=0;

 printf("enter the age \n");
 scanf("%d", &iValue);

 iRet=CalculateTicket(iValue);  
 printf("Your ticket price is : %d \n", iRet);

 return 0;
}