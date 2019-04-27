#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

struct student {
	string name;
	int score;
	
	bool operator<(const student& s) {
		return score > s.score;
	}
};

bool compareStudents(student &s1, student &s2) {
	return s1.score > s2.score;
}

void printStudent(student s) {
	cout << "Student " << s.name << " has score " << s.score << endl;
}


int main() {
	
	vector<student > students;
	student s1 = {
		.name = "Student 1",
		.score = 10
	};
	
	student s2 = {
		.name = "Student 2",
		.score = 20
	};
	
	student s3 = {
		.name = "Student 3",
		.score = 30
	};
	
	students.push_back(s1);
	students.push_back(s2);
	students.push_back(s3);
	
	for_each(students.begin(), students.end(), printStudent);

	cout << "Sorted by score" << endl;
	
	sort(students.begin(), students.end());
	for_each(students.begin(), students.end(), printStudent);

	return 0;
}