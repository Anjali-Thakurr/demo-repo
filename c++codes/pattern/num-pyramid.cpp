// 
#include <iostream> 
using namespace std; 

int main()
    {
   int a;
   cout << "Enter :";
   cin>>a;

   for (int i=0; i<a;i++){
    for (int j=0;j<a-i-1;j++){
        cout << " ";
    }
    for(int j=1;j<=i+1 ;j++){
        cout<< j;
    }
    for(int j=i;j>=1;j--){
        cout<< j;
    }
     cout<< endl;
   }
 
      
  return 0;
  }