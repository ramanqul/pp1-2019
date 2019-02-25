#include <iostream>

using namespace std;
//calendar app which will display and hold info about days in a month

bool isLeapYear(int year) {
	if (year % 4 == 0 &&
			year % 100 == 0) {
				return true;
	}
	
	return false;
}

int main() {
	int daysInMonth[] = {
		31, //jan
		28, //feb
		31, //march
		30, //april
		31, //may
		30, //june
		31, //july
		31, //aug
		30, //sep
		31, //oct
		30, //nov
		31 //dec
	};
	
	int weeks = 52;
	int daysInWeek = 7;
	
	int days[weeks][daysInWeek];
		
	int year;
	cin >> year;
	
	if (year < 0 ) { 
		cout << "You've entered incorrect year!" << endl;
		return 1;
	}
	
	bool isLeap = isLeapYear(year);
	
	int total = 0;
	if (isLeap) {
		total = 366;
	} else {
		total = 365;
	}
	
	
	for (int dayInYear = 1; dayInYear <= total;dayInYear++) {
		int weekNo = dayInYear % 7; //0-6
		int weekInYear = dayInYear / 7;
		int monthNo = 0;
		int daysSum = 0;
		for (int m=0;m<12;m++) {
			daysSum += daysInMonth[m];
			if (daysSum > dayInYear) {
				monthNo = m;
				break;				
			}
		}
		
		int dayInMonth = dayInYear % daysInMonth[monthNo];
		
		days[weekInYear][weekNo] = dayInMonth;

	}


	for (int i=0;i<weeks;i++) {
		for (int j=0;j < 7;j++) {
			
			cout << days[i][j] << " ";
				
		}
		cout << endl;

	}	

	return 0;
}