#include <iostream>
using namespace std;
main(){

	float fruit_price_per_kg;
	float vegetable_price_per_kg;
	int total_weight_of_fruit;
	int total_weight_of_vegetable;
	
	int totalearning;

	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruit_price_per_kg;

	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegetable_price_per_kg;

	cout<<"Enter total kilograms of fruits:";
	cin>>total_weight_of_fruit;

	cout<<"Enter total kilograms of vegetables: ";
	cin>>total_weight_of_vegetable;


	totalearning=fruit_price_per_kg*total_weight_of_fruit + vegetable_price_per_kg*total_weight_of_vegetable;

	cout<<"Total earnings in Rupees (Rps): "<<totalearning;








}
