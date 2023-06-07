#include<iostream>
using namespace std;

int main () 
{
  int x, y;
  cout << "Insert the value for variable X and Y : ";
  
cin >> x >> y;
  
    if (x > 0 && y > 0)
    
 
cout << "point " << x << ", " << y << " lies in the First quadrant\n";

    else if (x < 0 && y > 0)
    
 
cout << "point " << x << ", " << y << " lies in the Second quadrant\n";

    else if (x < 0 && y < 0)
    
 
cout << "point " << x << ", " << y << " lies in the Third quadrant\n";
  
    else if (x > 0 && y < 0)
    
cout << "point " << x << "," << y << "lies in the Fourth quandrant\n";
  
    else if (x == 0 && y == 0)
    
cout << "point " << x << ", " << y << " on x-axix\n";
  
    else if (y == 0 && x != 0)
    
cout << "point " << x << ", " << y << " on x-axix\n";
  
    else if (x == 0 && y != 0)
    
cout << "point " << x << ", " << y << "on at y-axix\n";
  
return 0;
}
