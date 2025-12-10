#include <iostream>
#include <cmath>

using namespace std;

int main() {

float a, b, c, d, x1, x2;
    
a = 1, b = -3, c = 3; 
    
d = b*b - 4*a*c;

//перевірка дискримінанта
cout << d << endl;

x1 = (-b - sqrt(d))/(2*a);
x2 = (-b + sqrt(d))/(2*a);

if ( d < 0 ) {
    cout << "No real roots" << endl;
    return 1;
}
cout << "x1 = " << x1 << endl;
cout << "x2 = " << x2 << endl;

return 0;
}