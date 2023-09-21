#include<stdio.h>
   int CountEven(int iNo1)
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
if(iDigits%2==0)
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


iRet=CountEven(iAns);

printf("number of even digits are :%d\n",iRet);

return 0;

}