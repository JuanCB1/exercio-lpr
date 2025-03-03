#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int cp1, cp2, np1, np2;
    double vu1, vu2, total;
    
    cout <<"-------------" << endl;
    cout <<" Exercício 4 " << endl;
    cout <<"-------------" << endl;

    cout <<"" << endl;

    cout << "Insira o código da peça 1: ";
    cin >> cp1;
    cout << "Insira a quantidade de peças 1: ";
    cin >> np1;
    cout << "Insira o valor unitário da peça 1: ";
    cin >> vu1;
    cout << "Insira o código da peça 2: ";
    cin >> cp2;
    cout << "Insira a quantidade de peças 2: ";
    cin >> np2;
    cout << "Insira o valor unitário da peça 2: ";
    cin >> vu2;

    total = (np1 * vu1) + (np2 * vu2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << " :) " << endl;

    return 0;
}
