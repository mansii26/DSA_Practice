///accept the number and check whether the number is 
///in the range of 10 to 20
///

#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////
// function name :CheckRange
// description:
// input: int 
// output: int 
//author: Mansi Ingle
//date: 29/04/24
/////////////////////////////////////////////////////////////


bool CheckRange(int iNo)
{
  if ((iNo>=10) && (iNo<=20))
  { return true; }
  else
  { return false; }
}

int main()
{
 int iValue=0;
 bool bRet=false;

 printf("enter the number \n");
 scanf("%d", &iValue);

 bRet=CheckRange(iValue);  

 if (bRet==true)
 { printf("%d is in the range ");  }
 else
 { printf("%d is not in the range "); }
 return 0;
}