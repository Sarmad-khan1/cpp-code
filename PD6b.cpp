#include <iostream>
using namespace std;
main(){


int size;
float cost;
float per_square_feet;
float costpound;
float persqfoot;

	
	cout<<"Enter size of the fertilizer bag in pounds: "<<endl;
	cin>>size;

	cout<<"Enter the cost of fertilizer Bag (In Pkr): "<<endl;
	cin>>cost;
	
	cout<<"Area covered by fertilizer bag in square feet: "<<endl;
	cin>>per_square_feet;

	costpound=cost/size;
	persqfoot=cost/per_square_feet;

	cout<<"Cost of fertilizer bag per pounds (pkr): "<<costpound<<endl;
	cout<<"Cost of fertilizer for per square feet area (pkr): "<<persqfoot<<endl;




}