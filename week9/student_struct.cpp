#include <iostream>

using namespace std;

struct student {
	string name;
	string surname;
	string id;
	//more members, like age, gender, etc.
};


int main() {
	struct student s = {
		.name = "Almas",
		.surname = "Kudaibergen",
		.id = "19BD00001"
	};
	cout << s.name << " " << s.surname << " "
         << s.id << endl;


	struct student *students = new struct student[100];
	
	int cmd;
	
	do {
		cout << "Select from menu" << endl;
		cout << "1. Create student" << endl;
		cout << "2. Seach student" << endl;
		cout << "3. Edit student" << endl;
		cout << "4. Delete student" << endl;
		
		cin >> cmd;
		
	} while (cmd > -1);
	

	
	return 0;
}