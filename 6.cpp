#include<bits/stdc++.h>

using namespace std;

const float YEN_PER_DOLLAR = 81.14;
const float EUROS_PER_DOLLAR = 0.7337;

double dollar_to_curr (bool curr, float dollar) {
	if (curr) {
		return dollar * YEN_PER_DOLLAR;
	}
	return dollar * EUROS_PER_DOLLAR;
}


int main() {
	cout << "Please enter the number of dollars that you have ";
	double dollar;
	cin >> dollar;

	cout << "Do you want yen or euro, enter 0 for euro 1 otherwise";
	bool rel;
	cin >> rel;

	cout << fixed << setprecision(2) << dollar_to_curr(rel, dollar);
}