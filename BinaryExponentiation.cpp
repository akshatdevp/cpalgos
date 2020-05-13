#include<bits/stdc++.h>
using namespace std;
long long binexp(long long number, long long power)
{
	if(power==0)
		return 1;
	long long result=binexp(number,power/2);
	if(power%2!=0)
		return result*result*number;
	else
		return result*result;
}
int main()
{
	cout<<"ENTER THE NUMBER AND POWER"<<endl;
	long long number,power;
	cin>> number>> power;
	long long answer=binexp(number,power);
	cout<<"THE ANSWER IS"<<endl;
	cout<<answer;
	return 0;
}
