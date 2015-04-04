#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){
int a=1; 
cout << "pick a number\n";
cin >> a; 


if (a<5)
{
	cout << "goodnight world\n";
}
else if (a>5)
{
	cout << "hello world\n"; 
}
else if (a==5)
{
	cout << "good afternoon\n";
}
	return 0;
}
