// figuraPrzeciazenieOperatora.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    cout << "Obliczenia sum pol figur - przeciazenie opertarow" << endl;

    //definicja i obiczanie dla prostokata i kwadratu
    
    Rectangle re(5, 2);
    Rectangle sq(5, 5);
    float A, B;
    
    cout << "Prostokat, podaj bok A:";
   cin >> A;
    cout << "Prostokat, podaj bok B:";
    cin >> B;
         
    sq.SetsetSiteA(A);
    sq.SetsetSiteB(B);
    cout << "Pole prostokatach o bokach = (" << re.GetsetSiteA() << ", " << re.GetsetSiteB() << ") = " << re.calFild();
    cout << endl << endl;


    cout << "Kwadrat, podaj bok A:";
    cin >> A;
    B = A; 
    cout << "Pole kwadratu o bokach = (" << sq.GetsetSiteA() << ", " << sq.GetsetSiteA() << ") = " << sq.calFildSquare();
    cout << endl << endl;


    cout << "suma = ";
   
   
    Rectangle total;
    total = re + sq;
    cout << "Suma pol figor = ";
    //total.GetsetSiteA();
   //total.GetsetSiteB();
    total.show();
   
    return 0;
}

