#include <iostream>
#include <cmath>

using  namespace std;

int main(void) {
  const double PI = 3.1416;
  double radious = 0.0;
  
  cout << "Enter the radious of a circle : " << endl;
  cin >> radious;
  double area = PI * pow(radious, 2);
  cout << "Area : " << area << " meter square";
  
  return 0;
}