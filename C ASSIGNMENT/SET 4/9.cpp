#include<iostream>
using namespace std;
inline int pow(int n)
{
    return n*n;
}
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    cout<<"The square of "<<n<<" : "<<pow(n);
}