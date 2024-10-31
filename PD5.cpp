#include <iostream>
using namespace std;
main(){
string name;
float twl;
int totaldays;
int ttl1kg=15;
cout<<"Enter The Name of the Person: ";
cin>>name;
cout<<"Enter the Target Weight Loss: ";
cin>>twl;
totaldays=twl*15;
cout<<"According to Doctor's recommendation, it will take "<<ttl1kg<<" days to lose"<<" 1 kilogram of weight. "<<endl;
cout<<"( Intake 4000 Calories Per Day )"<<endl<<"( 1 KM walk on daily basis. )"<<endl<<"So Mr/s. "<<name<<"it will take "<<totaldays<<" days to lose "<<twl<<" kilograms of weight" ;  


}