#include <iostream>
using namespace std;
main(){
float matric;
float intermediate;
float ecat;
string name;
float aggregate;
float matricpercentage;
float intermediatepercentage;
float ecatpercentage;
cout<<"Enter the student's name: "<<endl;
cin>>name;
cout<<"Enter matriculation marks (out of 1100): "<<endl;
cin>>matric;
cout<<"Enter intermediate marks (out of 550): "<<endl;
cin>>intermediate;
cout<<"Enter Ecat marks (out of 400): "<<endl;
cin>>ecat;

matricpercentage=matric/1100*100.0;

intermediatepercentage=intermediate/550*100.0;

ecatpercentage=ecat/400*100.0;

aggregate=ecatpercentage*0.5+matricpercentage*0.1+intermediatepercentage*0.4;

cout<<"Aggregate score for "<<name<<" is: "<< aggregate<<endl;





}