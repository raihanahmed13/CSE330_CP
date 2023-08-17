//Link: https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/in-love-with-primes/

#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int num;
		cin>>num;
		cout<<(checkPrime(num)? "Arjit" : "Deepa")<<endl;
	}
}
