#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	

	cout << "Please enter a number";
	
	int count = 0;
	double sum = 0;


	double x;

while(cin >> x){
++count;
sum += x;

}

//int
int prec = cout.precision();

cout << count << " numbers \n";
if(count > 0){
cout << "average = "<< setprecision(1) << sum/count << setprecision(prec)<<"\n";

}
	
	return 0;
}
