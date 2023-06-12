#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>

int main()
{
    long double a {4}, d {0}, e{0};
    long long int b = 1 , c = 2;

    do
    {
        e = d; //Se busca un valor anterior para poder conseguir una precisión mediante la resta
        if(c % 2 == 0)
        {
            d = d + (a/b);
        } 
        else
        {
            d = d - (a/b);
        }
        b+=2;
        c++;
    } // Serie de leibniz
    while (fabs(d - fabs(e)) > 0.0000001);
     
    cout << "El valor de PI es: " << setprecision(8) << d << endl;
    // setprecision(8) para que no redondé a 93

    return 0;
}

