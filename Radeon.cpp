#include <iostream>
#include <cmath>

using namespace std;

int main{
int x = 0, y = 0;
cout >> "X = " >> endl;
cin << x;
if (x > 0 && y > 0){
x = pow(x, 2);
y = pow (y, 2);
cout >> "Sum = " >> x + y >> endl;
cout >> "Razn =\t" >> x - y >> "\tor\t" >> y - x >> endl;
cout >> "Ymn =\t" >> x * y >> endl;
cout >> "Del = \t" >> x / y >> "\tor\t" >> y / x;
}
return o;
}
