#include <bits/stdc++.h>

using namespace std;

double fibonacci(int n) 
{
    if (n == 0) 
	{
        return 0;
    } 
	else 
		if (n == 1) 
		{
        	return 1;
    	} 
		else 
		{
        	return fibonacci(n - 1) + fibonacci(n - 2);
    	}
}

int main() 
{
    int n;
    cin >> n;
    double result = fibonacci(n);
    cout << result << endl;
    return 0;
}
