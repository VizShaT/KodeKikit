/*
Name : 394 - Mapmaker
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=330
Solution : http://ideone.com/lZ9PZ0
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct Data {
	int c0, numDimentions;
	vector<int> cValue;
	
	void readData(){
		int baseAddress, elementSize;
		cin >> baseAddress >> elementSize >> numDimentions;
		
		vector<int> upperBound(numDimentions);
		vector<int> lowerBound(numDimentions);
		
		for(int i=0; i<numDimentions; i++){
			int max;
			cin >> lowerBound[i] >> upperBound[i];
		}
		
		cValue.resize(numDimentions);
		
		int pos = numDimentions - 1;
		cValue[pos] = elementSize;
		c0 = baseAddress - cValue[pos] * lowerBound[pos];
		pos--;
		
		for(;pos >=0; --pos){
			cValue[pos] = cValue[pos + 1] * (upperBound[pos + 1] - lowerBound[pos + 1] + 1);
			c0 -= cValue[pos] * lowerBound[pos];
		}
	}
};

int main() {
	int n, r;
	cin >> n >> r;
	map<string, Data> nameData;
	
	string name;
	Data data;
	for(int i=0; i<n; i++){
		cin >> name;
		data.readData();
		nameData[name] = data;
	}
	
	for(int i=0; i<r; i++){
		cin >> name;
		cout << name;
		const Data& usedData = nameData[name];
		int address = usedData.c0;
		
		string sep = "[";
		for(int i=0; i<usedData.numDimentions; ++i){
			int value;
			cin >> value;
			cout << sep << value;
			sep = ", ";
			address += usedData.cValue[i] * value;
		}
		cout << "] = " << address << "\n";
	}
	return 0;
}