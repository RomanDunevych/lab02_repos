﻿#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double a, z1, z2;
    cout << " a = ";
    cin >> a;

    z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
    z2 = 4 * cos(a / 2) * cos(5.0 / 2.0 * a) * cos(4 * a); 

    cout << " z1 = " << z1 << endl;
    cout << " z2 = " << z2 << endl;
      
    return 0;
}








