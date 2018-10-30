#include <iostream>
#include <vector>

using namespace std;
int main(){

	typedef std::vector<string>::size_type vec_type;
	cout << " Put out a string ";

	string x;
	vector<string> vs;

	while(cin >> x){
		vs.push_back(x);

}
	double t;
	while(t<vs.size()){
		cout <<  vs.back() << "\n";
		vs.pop_back();


		t++;
	}

}