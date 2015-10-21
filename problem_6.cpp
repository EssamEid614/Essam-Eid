#include <iostream>
#include <string>
using namespace std;



class Move
{
private:
double x;
double y;
public:
Move(double &a, double &b)
{
	x=a;
	y=b;
}
void showmove()
{
	cout << x<<endl;
	cout << y<<endl;

}
Move add(const Move & m) const;

void reset();
{
	x=0;
	y=0;
}	
}
