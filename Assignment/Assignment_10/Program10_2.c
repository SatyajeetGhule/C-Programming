////////////////////////////////////////////////////////////////////////////
//
//  Request Header File 
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////
//
//  Function Name :    RactArea
//  Description   :    Given Width Number and Height Number from user and 
//                     print Total Rectangle Area.
//  Input         :    Float, Float
//  Output        :    Double
//  Author        :    Satyajeet Manohar Ghule
//  Date          :    26/10/2025
//
////////////////////////////////////////////////////////////////////////////
double RectArea(float iNo1, float iNo2)
{
    double Ract = 0.0f;

    Ract = iNo1 * iNo2;
    return Ract;
}
////////////////////////////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter Width\n");
    scanf("%f",&fValue1);

    printf("Enter Height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Total Ractangle Area is : %4f",dRet);
    return 0;
}
////////////////////////////////////////////////////////////////////////////
//
//  Test Cases Successfully Handeld by This Application
//
//  Input   :    5.3,  9.78   Output  :  51.8340
//  Input   :    7.2   3.3    Output  :  23.7600
//  Input   :    10.3  6.3    Output  :  64.8900
//
////////////////////////////////////////////////////////////////////////////