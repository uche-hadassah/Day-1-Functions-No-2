/*Write a function called power that takes as parameters one double x and one integer n
and returns the value of x raised to the power n. (Do not use the built-in function 
pow). Test your function.
For example: power(2.0, 3) should return 8 (i.e. 2.0*2.0*2.0*/
#include <iostream>
using namespace std;
int power(double, int);//Function Prototype
int main()
{
	cout << power(2, 3);
	return 0;
}
int power(double x, int n)
{
	double Power = 1.0;
	while (n > 0)
	{
		Power *= x;
		n--;
	}
	return Power;
}