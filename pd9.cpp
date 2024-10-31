	

	#include <iostream>
	using namespace std;
	main(){
	

	int number;
	int d1;
	int d2;
	int d3;
	int d4;
	int sum;
	
	cout<<"Enter 4 Digit Number: ";
	cin>>number;
 	
	d1=number%10;
	number=number/10;

	d2=number%10;
	number=number/10;

	d3=number%10;
	number=number/10;

	d4=number%10;
	number=number/10;	

	sum=d1+d2+d3+d4;
	
	cout<<"Sum of Individual Digits: "<<sum;
 

	}