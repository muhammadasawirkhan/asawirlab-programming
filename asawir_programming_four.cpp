#include <iostream>
using namespace std;
  
int main() 
{
    float f,c;
    cout << "Type the temperature in fahrenheit "<<endl;
    cin >> f;
    c = 5 * (f - 64) / 9;
    cout << f <<" Fahrenheit is equal to " << c <<" Ce";
    return 0;
}
