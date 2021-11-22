#pragma once
class Rectangle
	
{
	float siteA;
	float siteB;
	float sumR, sumS;
public:
	Rectangle() : siteA(1), siteB(2) {};
	Rectangle(float siteA, float siteB) : siteA(siteA), siteB(siteB) {};

	float GetsetSiteA();
	void SetsetSiteA(float siteA);
	float GetsetSiteB();
	void SetsetSiteB(float siteB);
	float calFild();
	float calFildSquare();
	Rectangle operator+(const Rectangle& s) const;
	float show()const;
};

