//Write a program non-recursive and recursive program to calculate Fibonacci numbers and 
//analyze their time and space complexity.:fib -assign1

#include<bits/stdc++.h>
using namespace std;

/*class Solution{
		
	public:
	int fib(int n)
	{
		
		
		int f[n + 2];
		int i;
	
		
		f[0] = 0;
		f[1] = 1;
	
		for(i = 2; i <= n; i++)
		{
			f[i] = f[i - 1] + f[i - 2];
		}
		return f[n];
	}
	
	int fibRec(int n)
	{
	    if (n <= 1)
	        return n;
	    return fib(n - 1) + fib(n - 2);
	}
};


int main ()
{
	Solution g;
	int n = 5;
	
	cout << g.fibRec(n);
	return 0;
}*/

int fib(int n){
	if(n<=1){
		return n;
	}
	return fib(n-1)+fib(n-2);
	
}

int fib_nonrec(int n){
	int f[n+2];
	f[0]=0;
	f[1]=1;
	for(int i=2;i<n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	return f[n];
}

int main(){
	int n=9;
	cout<<fib(7)<<endl;
	cout<<fib(9);
	return 0;
}
