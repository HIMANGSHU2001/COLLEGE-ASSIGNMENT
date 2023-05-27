#include<bits/stdc++.h>
using namespace std;
class Demonstrate
{
	
	public:
	int num;
	int fact;
	Demonstrate(int num)	/* Parameterized Constructor.*/
	{
		this->num = num;
	}
	Demonstrate(Demonstrate &obj)	/* Copy Constructor.*/
	{
		num = obj.num;
	}
	void findFactorial()	/* Member Function.*/
	{
		fact=1;
		for(int i=1;i<=num;i++)
		{
			fact = fact*i;
		}
	}
	virtual ~Demonstrate()	/* Virtual Destructor.*/
	{
		findFactorial();
		cout<<"The factorial of "<<num<<" is : "<<fact<<endl;
	}
};
int main()
{
	int num;
	cout<<"Enter a number to find the factorial : ";
	cin>>num;
	Demonstrate obj(num);
	Demonstrate copy = obj;
	// cout<<"The factorial of "<<num<<" is : "<<copy.findFactorial();
	return(0);
}