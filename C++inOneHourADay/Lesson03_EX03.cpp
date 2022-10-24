/*

3. Write a program to calculate the area and circumference of a circle where the radius is
supplied by the user.

"A área de um círculo é dada pelo produto de π e do quadrado do raio. Seja A a área do círculo, temos a seguinte fórmula:

A = π·r²"

" Seja C o comprimento da circunferência, temos a seguinte fórmula:"

Veja mais sobre "Comprimento da Circunferência e Área de um Círculo" em: 

C=2*Pi*raio

*/

#include <iostream>

 using namespace std;

 int main() 
{

    const double Pi = 3.1416;

    double raio = 0;

    cout << " Informe o raio do círculo: " ;

    cin >> raio ;

    double area = (raio*raio)*Pi;
    double circunferencia = (2*Pi)*raio;

    cout << " A área do círculo para o raio informado é: " << area << endl;

    cout << " O comprimento da circunferência para o raio informado é: " << circunferencia << endl;

    return 0;


}