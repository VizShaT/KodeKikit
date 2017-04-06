/*
Name : 230 - Borrowers
Problem : https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=166
Solution : https://ideone.com/VDQWVG
http://stackoverflow.com/questions/33072293/reading-quoted-string-in-c
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

class book {
	public:
		string title, author;
		bool borrowed, returned;
		book(string t, string a){
			title = t;
			author = a;
			borrowed = returned = false;
		}

};

std::vector<book> books;
string inp, cmd, req;

void shelve(), borrow(), back();

bool cmpa(book a, book b) { return (a.author < b.author); };
bool cmpt(book a, book b) { return (a.title < b.title); };

int main() {
	while(getline(cin, inp), inp != "END"){
		books.push_back(book(inp.substr(0, inp.find_last_of("\"")+1),
			inp.substr(inp.find_last_of("\"") + 1)));
	}

	stable_sort(books.begin(), books.end(), cmpt);
	stable_sort(books.begin(), books.end(), cmpa);

	while (cin >> cmd)
		if (cmd == "BORROW")
			cin.get(), borrow();
		else if (cmd == "RETURN")
			cin.get(), back();
		else if (cmd == "SHELVE")
			cin.get(), shelve();

	return 0;
}

void shelve(){
	for(int i=0, j; i<books.size(); ++i){
		if(books[i].returned == true){
			for(j = i; j>=0; --j){
				if(books[j].borrowed == false)
					break;
			}
			if(j == -1)
				cout << "Put " << books[i].title.c_str() << " first\n";
			else
				cout << "Put " << books[i].title.c_str() << " after " << books[j].title.c_str() << "\n";

			books[i].borrowed = books[i].returned = false;
		}
	}
	cout << "END\n";
}
void borrow(){
	getline(cin, req);
	for(int i=0; i<books.size(); i++){
		if(books[i].title == req){
			books[i].borrowed = true;
			return;
		}
	}
}

void back(){
	getline(cin, req);
	for(size_t i=0; i<books.size(); i++){
		if(books[i].title == req){
			books[i].returned = true;
			return;
		}
	}
}