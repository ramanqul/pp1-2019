// Example program
#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
    
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    
    string s3 = s1 + " " + to_string(123);//can't append int to str
    string s4 = s2 + '!';//can append char to str
    string s5 = s1 + to_string(true);
    
    cout << "s3=" << s3 << endl;
    cout << "s4=" << s4 << endl;
    cout << "s5=" << s5 << endl;
    
    return 0;
}
