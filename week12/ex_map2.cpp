#include <iostream>
#include <map>

using namespace std;



int main() {
	//14BD0001 -> 90
	
	map<string, int> studentScores;
	
	studentScores["14BD001"] = 100;
    studentScores["14BD002"] = 80;
    studentScores["14BD003"] = 90;

	
	//pair
	pair<string, int> student1Score = 
		make_pair("14DB004", 99);
		
		
	studentScores.insert(student1Score);	
	//alternative to studentScores["14DB004"] = 99;
	
	
	for (map<string, int>::iterator it = studentScores.begin(); 
		it != studentScores.end();
		it++) {
			
		pair<string, int> entry = *it;	
			
		cout << entry.first << "=" << entry.second << endl;
	
	}
		
	

	return 0;
}