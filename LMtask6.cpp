#include <iostream>
using namespace std;
main(){

int mb;
cout<<"Enter the size in megabytes (MB): "<<endl;
cin>>mb;
int bits=mb*1024*1024*8;
cout<<"1024 MB is equivalent to "<<bits<<" bits"<<endl;
}