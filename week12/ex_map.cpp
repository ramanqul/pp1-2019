#include <iostream>
#include <map>


using namespace std;

int main() {
	
    map<char, string> mymap; //declaration

    mymap['n'] = "Mr. Anderson";
    mymap['r'] = "Mr. Buzaubakov";

    cout << mymap['n'] << endl;
    
    return 0;
}