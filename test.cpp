#include "BXVector.h"
#include "iostream"

using namespace std;

main(){
   

   BXVector<int> x(3,2,4);
//   cout<< x.getLastBX()<<endl;

   for(int b=2; b<=4; b++)
	{
	cout<<b<<'\t'<< x.size(b) <<endl;
	cout<<x.push_back(3,"int")<<endl;
	}  
   


}
