#include<stdio.h>
int DisplayMult(int iNo1)
{
int iCnt=1,iDigits=0;

if(iNo1==0)
{
return 1;
}
if(iNo1<0)
{

    iNo1=-iNo1;
}
while(iNo1!= 0)
{

iDigits=iNo1%10;
if(iDigits==0)
{
    iDigits=1;
}
iCnt=iCnt*iDigits;
iNo1=iNo1/10;


}

return iCnt;



}
int main()
{


    int iValue=0,iRet=0;
    printf("enter number :\n");
    scanf("%d",&iValue);
    iRet=DisplayMult(iValue);
    printf("multiplication is %d",iRet);
    return 0;
}