#include "BXVector.h"
#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
   int lowbx = 0;
   int highbx = 2;
   int size = 4;
   
   BXVector<int> x(size,lowbx,highbx);
   int k=1;  
   for(int b=x.getFirstBX(); b<=x.getLastBX(); b++){
	for(int a=0;a<x.size(b);a++){
		cout<<"bx: "<<b<<'\t'<<"position: "<<a<<'\t'<<"data: "<<x.at(b,a)<<endl;
		x.set(b,a,rand());
        }
   }

   cout<<"\n";
   for(int b=x.getFirstBX(); b<=x.getLastBX(); b++){
	for(int a=0;a<x.size(b);a++){
		cout<<"Second bx: "<<b<<'\t'<<"position: "<<a<<'\t'<<"data: "<<x.at(b,a)<<endl;
        }
   }

   cout<<"\n";
   
   //---- all of this below is test stuff. If it doesn't make sense let us know.
   
   lowbx = -1;
   highbx = 3;
 
   x.setBXRange(lowbx,highbx);
   x.push_back(x.getFirstBX(),rand()); 
   x.push_back(x.getLastBX(),rand());
 
   //x.addBX();
   //cout<<x.isEmpty(3)<<endl;
   //x.push_back(3,rand());
   //cout<<x.isEmpty(3)<<endl;

   //   x.clearBX(1);
   //   x.push_back(1,4);
   //   x.set(1,0,5);
   //   x.push_back(1,10); 
   //   x.deleteBX(2);
   //   x.addBX();
   //   x.resizeAll(2);

   for(int b=x.getFirstBX(); b<=x.getLastBX(); b++){
	for(int a=0;a<x.size(b);a++){
		cout<<"third bx: "<<b<<'\t'<<"position: "<<a<<'\t'<<"data: "<<x.at(b,a)<<" size: "<<x.size(b)<<endl;
        }
   }

return 0;
}
