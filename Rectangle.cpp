#include "Rectangle.h"
#include<iostream>

using namespace std;

float Rectangle::calFild() {
    
    sumR = siteA * siteB;
    return sumR;
}

float Rectangle::GetsetSiteA() {
    return siteA;
}

void Rectangle::SetsetSiteA(float siteA) {
    if (siteA >= 0)
        Rectangle::siteA = siteA;
}

float Rectangle::GetsetSiteB() {
    return siteB;
}


void Rectangle::SetsetSiteB(float siteB) {
    if (siteB >= 0)
        Rectangle::siteB = siteB;
}

float Rectangle::calFildSquare()
{
    sumS = siteA * siteA;
    return sumS;
}


Rectangle Rectangle::operator+(const Rectangle& s) const
{
    Rectangle sum;
    sum.sumR = sumR + s.sumS;
    return sum;
}


float  Rectangle::show()const
{
    cout << sumR << endl; 
    return sumR; 
     
}
