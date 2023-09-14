// https://www.beecrowd.com.br/judge/en/problems/view/1963
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A, B, increase;
    cin >> A >> B;
    increase = B - A;
    double per = (increase * 100) / A;
    cout << fixed << setprecision(2) << per << "%" << endl;
    return 0;
}