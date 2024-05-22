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
   divide this number by 3
   if remainder is 0
   divide the number by 5 
   if remainder is 0
   the display result as divisible by 3 and 5
   else display as not
STOP   
   */

int check_fun(unsigned int iNO)
{
    if ((iNo % 3)==0)&& ((iNo % 5)==0)
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
     printf("%d is divisible by 3 & 5\n", iValue);
  }
  else
  {
     printf("%d is not divisible by 3 & 5\n", iValue);
  }
  return 0;
}

/*
  logical && operator 

  first second result   ||(Or)
  true   true    treu    t
  f      f        f       f  

  t       f        f       t
  f       t        f       t
*/





