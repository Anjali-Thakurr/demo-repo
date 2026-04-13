// print number in sequence and different line
#include <iostream> 
using namespace std; 

int main()
    {
      int a,num=1, i , j ;
      cout << "enter a number ";
      cin >> a;
      for (i=0; i<a; i++){
         for ( j=0; j<a;j++){
            cout << num ;
            num++;
         }
         cout << endl;
      }
      
  return 0;
  }