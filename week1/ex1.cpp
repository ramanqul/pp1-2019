// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    
  {  
    int i = 1;
  }
  int i = 2;
  
  long j = 1;
  
  int intSize = sizeof(int);
  int longSize = sizeof(long);
  int stringSize = sizeof(string);
  
  cout << "intSize=" << intSize << endl;
  cout << "longSize=" << longSize << endl;
  cout << "stringSize=" << stringSize << endl;
  
  cout << "i=" << i << endl;
  cout << "j=" << j << endl;
  cout << "j-i=" << j-i << endl;
  
}
