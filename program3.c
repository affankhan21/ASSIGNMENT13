#include<stdio.h>
   int CountOdd(int iNo1)
 {

int iCnt=0,iDigits=0;

if(iNo1==0)
{
return 1;
}
if(iNo1<0)
{

    iNo1=-iNo1;
}
while(iNo1 > 0)
{
iDigits=iNo1%10;
if(iDigits==3||iDigits==4||iDigits==5||iDigits==6||iDigits==7)
{
    iCnt++;
} 
iNo1=iNo1/10;


}

return iCnt;


 }
int main()
{
int iAns=0,iRet=0;
printf(" ENTER A NUMBER:\n");
scanf("%d",&iAns);


iRet=CountOdd(iAns);

printf("number of digits between 3 and 7 are :%d\n",iRet);

return 0;

}