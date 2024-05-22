#include <stdio.h>
#include <stdbool.h>

int PerfectNumber(int iNo) {
  if (iNo <= 1) {
    return false;
  }

  int iSum = 0;
  int iCnt;

  // Updater (modified for efficiency)
  if (iNo < 0) {
    iNo = -iNo;
  }

  // Iterate only up to the square root of iNo
  for (iCnt = 1; iCnt <= iNo / iCnt; iCnt++) {
    if (iNo % iCnt == 0) {
      iSum += iCnt;
      // Perfect square handling
      if (iCnt * iCnt == iNo) {
        iSum -= iCnt;
      }
    }
  }

  return iSum == iNo;
}

int main() {
  int iValue = 0;
  bool bRet = false;

  printf("enter the number\n");
  scanf("%d", &iValue);

  bRet = PerfectNumber(iValue);

  if (bRet == true) {
    printf("%d is a perfect number\n", iValue);
  } else {
    printf("%d is not a perfect number\n", iValue);
  }

  return 0;
}
