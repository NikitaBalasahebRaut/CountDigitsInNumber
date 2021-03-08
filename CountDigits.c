//program to calculate the number of digits in given number

#include<stdio.h>

int CountDigit(int iValue)
{
  int iCnt = 0;
  
  while(iValue != 0)
  {
    iValue = iValue / 10;
	iCnt++;
  }
  return iCnt;
}

int main()
{
 int iNo = 0;
 int iRet = 0;
 
 printf("Enter The Number \n");
 scanf("%d",&iNo);
 
 iRet = CountDigit(iNo);
 printf("No of digits are : %d",iRet);
 
return 0;
}

/*
output

Enter The Number
12345
No of digits are : 5

*/