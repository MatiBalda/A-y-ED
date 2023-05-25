#include<iostream>
#include<iomanip>
using namespace std;

main()
{
long double a {1}, d {0};
long long int b = 1 , c = 2;

while(b<2000000)
{
if(c % 2 == 0){
                d = d + (a/b);
} 
            else {
                d = d - (a/b);
                 }
b+=2;
c++;
}

cout << "El valor de PI es: " << setprecision(7) << d*4 << endl;

    return 0;
}
