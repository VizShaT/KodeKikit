/*
http://ideone.com/xE3Anq
1.2.3.5
Given the distinct and valid birthdates of n people as triples (DD, MM, YYYY), order
them first by ascending birth months (MM), then by ascending birth dates (DD), and
finally by ascending age.
*/

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int, int> ii;
typedef pair<ii, int> iii;

int main() {
	iii A = make_pair(ii(5, 18), -1982);
	iii B = make_pair(ii(5, 18), -1980);
	iii C = make_pair(ii(11, 13), -1983);
	
	vector<iii> birthdays;
	birthdays.push_back(A);
	birthdays.push_back(B);
	birthdays.push_back(C);
	
	for(int i=0; i<birthdays.size(); i++)
		cout << birthdays[i].first.first << "-" << birthdays[i].first.second << birthdays[i].second << "\n";
	
	cout << "\nAfter Sort:\n";
	sort(birthdays.begin(), birthdays.end());
	for(int i=0; i<birthdays.size(); i++)
		cout << birthdays[i].first.first << "-" << birthdays[i].first.second << birthdays[i].second << "\n";
	
	return 0;
}