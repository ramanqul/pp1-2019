#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

pair<int, int> genRandomPoint() {
	int a = rand()%100;
	int b = rand()%100;
	
	return make_pair(a, b);
}

void printPoint(pair<int, int> p) {
	cout << "Point " << p.first << ", " << p.second << endl;
}

bool sortByX(pair<int, int> &p1, pair<int, int> &p2) {
	return p1.first > p2.first;
}	

bool sortByY(pair<int, int> &p1, pair<int, int> &p2) {
	return p1.second > p2.second;
}	

bool sortByXY(pair<int, int> &p1, pair<int, int> &p2) {
	return p1.first > p2.first && p1.second > p2.second;
}	

int main() {
	srand ( time(0) );
	
	vector<pair<int, int> > points(10);
	generate(points.begin(), points.end(), genRandomPoint);

	for_each(points.begin(), points.end(), printPoint);
	//sort by x-axis
	cout << "Sorted by x-axis" << endl;
	
	sort(points.begin(), points.end(), sortByX);
	for_each(points.begin(), points.end(), printPoint);

	cout << "Sorted by y-axis" << endl;
	sort(points.begin(), points.end(), sortByY);
	for_each(points.begin(), points.end(), printPoint);
	
	cout << "Sorted by xy-axis" << endl;
	sort(points.begin(), points.end(), sortByXY);
	for_each(points.begin(), points.end(), printPoint);
	
	return 0;
}