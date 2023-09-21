#include<stdio.h>
int CountDiff(int iNo1)
{


    int iCnt1=0,iCnt=0,iDigits=0,iDigits1=0;

if(iNo1==0)
{
return 1;
}
if(iNo1<0)
{

    iNo1=-iNo1;
}
while(iNo1>0)
{
iDigits=iNo1%10;
if(iDigits%2==0)
{
    iCnt=iCnt+iDigits;
} 
else
{
    iCnt1=iCnt1+iDigits;
}
iNo1=iNo1/10;

}


return iCnt-iCnt1;

}



int main()
{


int iValue=0;int iRet=0;
printf("enter number :\n");
scanf("%d",&iValue);
iRet=CountDiff(iValue);
printf("%d",iRet);
return 0;
}