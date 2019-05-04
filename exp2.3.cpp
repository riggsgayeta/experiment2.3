#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
 {
 	int x;
 	float v, y, z;
 	
 	z = 2.50;
 	
 	cout << "enter the value of x: "; cin >> x;
 	cout << "enter the value of y: "; cin >> y;
 	
 	
 	switch (x)
 	{
 		case 1:
 			if((x==1) & (1<y<5))
 				v = x*y*z;
 			if ((x==1) & (y>=5))
 				v = (x+(y/z));
 			break;
 		
 		case 2:
 			if ((x==2) & (y<=5))
 				v = abs((x-y)/z);
 			else if ((x==2) & (y>5))
 				v = x-(sqrt(y+z));
 			break;
 			
 			default: v = x+y+z;
 			break;
 	 }
 	
    _getch();
    return 0;
}
    
    

