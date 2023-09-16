// https://www.beecrowd.com.br/judge/en/problems/view/2234
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
    int H, P;
    double avg;
    cin >> H >> P;
    avg = H / (double)P;
    cout << fixed << setprecision(2) << avg << endl;
    return 0;
}