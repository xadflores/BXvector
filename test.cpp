#include "BXVector.h"
#include <iostream>

using namespace std;

main(){
   
   BXVector<int> x(5,0,4);
   int k=1;  
for(int b=0; b<=4; b++)
        {
        cout<<b<<'\t'<< x.size(b) <<endl;
        }


   x.push_back(1,k);

   for(int b=0; b<=4; b++)
	{
	cout<<b<<'\t'<< x.size(b) <<endl;
	}  

}
