//paragon
#include <iostream>
#include <string>
using namespace std;
int main() {
    float a,x,p,netto,VAT,brutto;
    cout << "Podaj cene jednostkowa netto: " << endl;
    cin >> a;
    cout << "Podaj liczbe zakupionych sztuk towaru: " << endl;
    cin>>x;
    cout << "Podaj wysokosc VAT w procentach: " << endl;
    cin>>p;

    netto = a * x;
    VAT = (netto * p)/100;
    brutto = netto + VAT;

    printf("Wartosc netto: %.1f\n", netto);
    printf("Wartosc VAT: %.1f\n", VAT);
    printf("Wartosc brutto: %.1f\n", brutto);
    return 0;
}

