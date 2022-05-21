#include <iostream>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main () {

	cout <<setprecision(1)<< fixed;

		int n,t,pos=0,neg=0;
	cin >> n;

	while (n--) {
		cin >> t;

     if (t>0){
		 pos++;
	 }
	 if (t<0) {
		 neg++;
	 }
			   }
       cout << pos << endl;
	   cout << neg << endl;

	return 0;
}
