//Parameterized constructior

#include<iostream>
using namespace std;
class MyClass{
    public:
    int c;
    MyClass(int val)
{
    c = val*val;
    cout<<"Square of "<<val<<" is: "<<c<<endl;    
}
};
int main() {
    MyClass obj(8);
    return 0;
}
