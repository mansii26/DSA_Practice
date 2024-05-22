#include <stdio.h>
#include <stdbool.h>

int PrimeNumber(int iNo) {
  int iSum = 0;
  int iCnt;

  // Handle negative numbers (optional)
  if (iNo < 0) {
    return false;  // Negative numbers are not prime
  }

  // Efficient loop: iterate only up to the square root of iNo
  for (iCnt = 1; iCnt <= iNo; iCnt++) {
    if (iNo % iCnt == 0) {
      iSum++;

      // Exit early if more than 2 factors found (not prime)
      if (iSum > 2) {
        return false;
      }
    }
  }

  // Prime if exactly 2 factors found (1 and itself)
  return iSum == 2;
}

int main() {
  int iValue = 0;
  bool bRet = false;

  printf("enter the number\n");
  scanf("%d", &iValue);

  bRet = PrimeNumber(iValue);

  if (bRet == true) {
    printf("%d is a prime number\n", iValue);
  } else {
    printf("%d is not a prime number\n", iValue);
  }

  return 0;
}

