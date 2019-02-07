// Example program
#include <iostream>
#include <string>

using namespace std;

int fact(int a) {
    int result = 1;
    
    /*
    
    for (int i=1;i<=a;i++) {
        result = result * (i + 1);
    }
    
    
    */
    for (int i=1;i<=a;i++) {
        result = result * i;
    }
    
    return result;
}

int main()
{
    int a = 2.0;
    int b = 5.0;
    int sum = a + b;
    int sub = a - b;
    int mult = a * b;
    float div = a / b;
    int f = fact(10);
    
    cout << "sum=" << sum << endl;
    cout << "sub=" << sub << endl;
    cout << "mult=" << mult << endl;
    cout << "div=" << div << endl;
    printf("\n%.6f\n", div);
    cout << "fact(3)=" << f << endl;
    
    return 0;
}
