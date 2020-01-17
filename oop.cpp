#include <iostream>
using namespace std;
class calculator{
public:
    int a = 5, b = 10, sum;
    int add()
    {
        sum = a + b;
        cout << "The sum is " << sum;
    }
};
int main()
{
    calculator myCal;
    myCal.add();
    return 0;
}
