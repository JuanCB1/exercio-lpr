#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int nf;
    double ht, vph, salario;

    cout <<"-------------" << endl;
    cout <<" Exercício 3 " << endl;
    cout <<"-------------" << endl;

    cout <<"" << endl;

    cout << "Coloque o número do funcionário: ";
    cin >> nf;
    cout << "Coloque o número de horas trabalhadas: ";
    cin >> ht;
    cout << "Coloque o valor por hora: ";
    cin >> vph;
 
    salario = ht * vph;

    cout << "NUMBER = " << nf << endl;
    cout << "SALARY = R$ " << fixed << setprecision(2) << salario << endl;
    
    return 0;
}
