#include <iostream>
#include <vector>


using namespace std;
int main(){

	cout << "Put in a string";

	double x;
	string s;
	string largest;
	int countLetter=0;
	while(cin >> s){
		++countLetter;

		if (s.size()>largest.size()){
				largest = s;
		}

	}



	cout << "Numbers of words are " << countLetter << "\n";
	cout << "The longest word is " << largest << "\n";

	return 0;
}