#include <iostream>
using namespace std;
main(){

int age;
int shifting;
int average;

cout<<"Enter Person's Age: ";
cin>>age;

cout<<"Enter Number of Times they've moved: ";
cin>>shifting;
shifting=shifting+1;

average=age/shifting;

cout<<"Average Number of Years lived in the same house: "<<average;
	}