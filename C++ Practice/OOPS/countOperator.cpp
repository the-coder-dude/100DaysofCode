#include <iostream>   
using namespace std;
class OperatorOverload {
private:
	int x;

public:
	OperatorOverload() : x(10) {}
	void operator ++() {
		x = x + 2;
	}
	void Print() {
		cout << "The Count is: " << x;
		}
};
int main() {
	OperatorOverload ov;
	++ov;   
	ov.Print();
	return 0;
}