//check whether even or odd

//question to ask1.unsigned/signed 2.long/short
//there should be no interaction with derived function
//check whethere jar asla tar always boolean use hote


#include <stdio.h>
#include <stdbool.h>

//user is going to enter oonly positive number


//algorithm
/* 
START
   accept one number as NO
   divide this number by 2
   if remainder is 0
   the display result as Even Number
   else display as Odd Number
STOP   
   */

int check_fun(unsigned int iNO)
{
    if ((iNo % 2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }

   
}

int main()
{
  unsigned int iValue=0;
  bool bRet= False;

  printf("Enter the number");
  scanf("%d, &iValue");


  bRet=check_fun(iValue);

  if (bRet==true)
  {
     printf("%d is Even Number\n", iValue);
  }
  else
  {
     printf("%d is Odd Number\n", iValue);
  }

}