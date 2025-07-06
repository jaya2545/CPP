/* Function overloading is having same function calls/ function names but with different arguments */
#include<iostream>
using namespace std;
void area(int a)
{
 int result = a * a;
cout<<"The area is "<<endl;
}
void area(int a, int b)
{
int result = a * b;
cout << "The area of square is "<<result<<endl;
}
int main()
{
  int a,b;
cout<<"Enter the values of a and b: ";
cin >> a >> b;
area(a);
area(a,b);
return 0;
}
