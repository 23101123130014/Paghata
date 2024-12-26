//return tru if both of the statement is true
#include <iostream>
using namespace std;
int main()
{
	int x = 21;
	int y = 10;
	cout<<(x > y && y < x);
	cout<<endl;
	cout<<(x >y || x <y);
	cout<<endl;
	cout<<(!((x > y && y < x)));
}
