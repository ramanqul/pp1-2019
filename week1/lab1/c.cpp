// Example program
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
    int n;
    cin >> n;
    int d1 = n % 2;
    int d2 = (n / 2) % 2;
    int d3 = (n / 4) % 2;
    int d4 = (n / 8) % 2;

    int result = d1 * 8 + d2 * 4 + d3 * 2 + d4;
    cout << result;
    
    return 0;
}
