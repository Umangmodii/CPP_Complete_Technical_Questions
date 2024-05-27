// C++ program to 
// Find LCM of two numbers 
#include <iostream> 
using namespace std; 

long long gcd(long long int a, long long int b) 
{ 
	if (b == 0) 
		return a; 
	return gcd(b, a % b); 
} 

// Function to return LCM of two numbers 
long long lcm(int a, int b) 
{ 
	long long result = (a / gcd(a, b)) * b; 
	return result; 
} 

int main() 
{ 
	int a = 24, b = 13; 
	cout << "LCM : " << lcm(a, b); 
	return 0; 
}
