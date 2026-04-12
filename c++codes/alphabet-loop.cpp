// using alphabet in loop
#include <iostream> 
using namespace std; 

int main()
    {
      char a ;
      cout << "enter a number ";
      cin >> a;
      for (char i='A'; i<=a; i++){
         for (char j='A'; j<=a;j++){
            cout << j;
         }
         cout << endl;
      }
      
  return 0;
  }