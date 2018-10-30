#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
typedef std::vector<double>::size_type vec_size;

int main(){
	cout << "Please enter a series of numbers\n";
	std::vector<double> v;
	double x;


	while(cin >> x){

			v.push_back(x);

	}

	for(int i=0; i<v.size(); i++){
		cout << v[i];
	}

	vec_size n = v.size();
	vec_size middle = n/2;


	sort(v.begin(), v.end());
	double median;
	if(n%2==1){
		median = v[middle];
	} else{
		median = (v[middle]+v[middle-1])/2;
	}
	double sum;
	


	for(int i=0; i<n; i++){

			sum += v[i];
		}

		double average = sum/n;


		cout << "\nMedian is " << median << "\n" << "average is: " << average << "\n" ;

	
} 