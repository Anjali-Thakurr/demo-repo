// To print n number factorial
#include <iostream> 
using namespace std; 

int main()
    {
      int a , sum=1;
      cout << "enter a number ";
      cin >> a;
      for (int i= 1; i<=a; i++){
        sum= i*sum;
         
      }
      cout << sum << endl;

  return 0;
  }