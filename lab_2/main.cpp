#include <iostream>
#include <cmath>

using namespace std;

float MyFunc(float x) {
    if (x*x - 4 <= 0){
        return -9999;
    } 
return log(x*x - 4) / log(4) + 1/x;
}

// x ∈ [-3;2]   ∆x = 0.25   -3 2 0.25
// x ∈ [2;6]   ∆x = 0.5   2 6 0.5
// x ∈ [1;5]  ∆x = 0.2   1 5 0.2

int main(){
    double x, y, x1, x2, h;
    cout << "Enter x1, x2, h: ";
    cin >> x1 >> x2 >> h; 
    cout << "x=[" << x1 << ";" << x2 << "], h=" << h << "\n";
    cout << "============================\n\n";
    cout << " X   |  Y\n";
    cout << "----------------\n";

    for(x = x1; x <= x2; x += h) {
        y = MyFunc(x);
        cout << x << "\t" <<  y << "\n";
    }    
    return 0;
}