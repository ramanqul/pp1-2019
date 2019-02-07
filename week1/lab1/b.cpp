// Example program
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
    
    int n;
    int k;
    cin >> n;
    cin >> k;

    int k1 = k / 100;
    int k3 = k % 10;
    int k13 = k1 + k3;
    
    
    cout << n + k13;
    
  
    
    
    return 0;
}
