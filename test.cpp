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
   for(int b=lowbx; b<=highbx; b++){
	for(int a=0;a<x.size(b);a++){
		cout<<"bx: "<<b<<'\t'<<"item: "<<a<<'\t'<<"data: "<<x.at(b,a)<<endl;
		x.set(b,a,2);
        }
   }

   cout<<"\n";
   for(int b=lowbx; b<=highbx; b++){
	for(int a=0;a<x.size(b);a++){
		cout<<"Second bx: "<<b<<'\t'<<"item: "<<a<<'\t'<<"data: "<<x.at(b,a)<<endl;
        }
   }

   cout<<"\n";

   lowbx = 1;
   highbx = 3;
 
  //The function below is not working it throws errors that are unpredictable for different cases of the lowbx/highbx. 
   x.setBXRange(lowbx,highbx);

  //   x.clearBX(1);
  //   x.push_back(1,4);
  //   x.set(1,0,5);
  //   x.push_back(1,10);
   
   //x.resizeAll(2);

   for(int b=lowbx; b<=highbx; b++){
	for(int a=0;a<x.size(b);a++){
		cout<<"third bx: "<<b<<'\t'<<"item: "<<a<<'\t'<<"data: "<<x.at(b,a)<<endl;
        }
   }

return 0;
}
