#include<stdio.h>
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3

int DisplayResult(float fMarks)
{
    if((fMarks <= 0.0f || fMarks >= 100))
    {
        return RET_INVALID;
    }
    if((fMarks >= 0.0f && fMarks<= 35.0f))
    {
        return RET_FAIL;
    }
    else
    {
        return RET_PASS;
    }
}
int main()
{
    float fvalue = 0.0f;
    int iRet = 0;

    printf("Enter the percentage :");
    scanf("%f",&fvalue);

    iRet = DisplayResult(fvalue);

    if(iRet == RET_INVALID)
    {
        printf("your input is invalied");
    }
    else if (iRet == RET_FAIL)
    {
        printf("the students are fail in the exam");
    }
    else if(iRet == RET_PASS)
    {
        printf("The students is pass in the exam");
    }
    return 0;



}