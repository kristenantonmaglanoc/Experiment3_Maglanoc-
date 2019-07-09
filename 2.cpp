#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int arr [22], x=1, y=1, z=1, n;
	cout<< "Input Temperature: ";
	
	for (n = 1; n<22; n++){
		cin>> arr [n];
	}
	
	for (n = 1; n<8; n++){
		cout<< "Province A, day "<< x << ": " << arr [n]<< endl;
		x++;
	}
	
	for (n = 8; n<15; n++){
		cout<< "Province B, day "<< y << ": " << arr [n]<< endl;
		y++;
	}
		
	for (n= 15; n<22; n++){
		cout<< "Province C, day "<< z << ": " << arr [n]<< endl;
		z++;
	}

getch();
return 0;
}