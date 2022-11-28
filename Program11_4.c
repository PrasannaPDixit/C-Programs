#include<stdio.h>

int RangeEvenSum(int iNo1, int iNo2)
{
    int iCnt =0,iSum = 0;
    
    if((iNo1 <0) || (iNo2 < 0) || (iNo1>iNo2))
    {
        return -1;
    }
    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;   
}

int main()
{
    int iValue1 =0,iValue2 = 0, iRet = 0;;

    printf("Enter the Range: \n");
    scanf("%d %d",&iValue1,&iValue2);

    iRet = RangeEvenSum(iValue1,iValue2);   

    if(iRet == -1)
    {
        printf("Invalid Range...");
    }
    else
    {
        printf("Sum of Even Range : %d",iRet);
    }  
    
    return 0;
}