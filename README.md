# Exp-12-Constructors-and-Destructors
# Aim
Write a c++ program:
1. To define constructor.
2. Using parameterized constructior.
3. Using copy constructor.
4. For default argument.
5. To calculate area of rectangle using class.
6. Using destructor.

# Software Used
VS Code and c++ online compiler.
# Theory
Constructors and destructors are special member functions in C++ classes that play a crucial role in resource management, particularly when dealing with dynamic memory allocation and object lifecycle management.

A constructor is a special member function that is automatically called when an object of a class is created. Its primary purpose is to initialize the object’s attributes.
They ensure that objects are initialized to valid states, allowing for resource allocation and setup.

A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly deleted. Its primary purpose is to free resources that the object may have acquired during its lifetime (e.g., dynamic memory).
A destructor has the same name as the class but is preceded by a tilde (~).
They ensure that resources are properly released, preventing memory leaks and other resource management issues.

# Program Code
```
//Define constructor

#include<iostream>
using namespace std;
class MyClass{
    public:
    string a;
MyClass(){

    cout<< "Enter your name: "<<endl;
    cin>>a;
    cout<<"Hello "<<a<< " from constructor !!"<<endl;
}
};
int main(){
    MyClass obj;
    return 0;
}
```
```
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
```
```
//Copy constructor

#include<iostream>
using namespace std;
class MyClass{
    private:
    int value;
    public:
    MyClass(int val){
        value = val;
        cout << "Pink Floyd were established in the year "<<value<<endl;

    }
    MyClass(const MyClass &obj){
        value = obj.value;
        cout<<"Second Indo-Pak war happened in the year "<<value<<endl;
    }
};
int main(){
    MyClass obj1(1965);
    MyClass obj2 = obj1 ;
    return 0;
    }
```
```
//Default argument

#include<iostream>
using namespace std;
class MyClass{
    private:
    int value1;
    int value2;
    string str1;
    public:
    
    MyClass( int val1= 0, int val2= 0, string a = "none"){
        str1 = a;
        value1= val1;
        value2 = val2;
        cout<<str1<<" played "<<value1<<" ODI matches."<<endl;
        cout<<"He scored "<< value2 << " centuries."<<endl;

    }
};
int main()
{
   
    MyClass obj1(463,49, "Sachin");
    return 0;
    }
```
```
//Area of rectangle

#include<iostream>
using namespace std;
class MyClass{
    private:
    int l;
    int b;

    public:
int s,w;
void getinput()
         { 
            cout<<"Enter length and breadth: "<<endl;
            cin>>s>>w;
         }
         void display()
         { int a;
         l=s;
         b=w;   
            a = l*b;
         cout<<"Area of rectangle is: "<< a<< endl;
         }
};
int main(){
    
    MyClass obj1;
    obj1.getinput();
    obj1.display();

    return 0;
}
```
```
//Destructor

#include<iostream>
using namespace std;
class MyClass{
    public:
    ~MyClass(){
        cout<<"Destructor called! "<< endl;
    }
    MyClass(){
        cout<<"Constructor called!"<<endl;
    }
    };
    int main(){
        MyClass obj;
        return 0;
    }
```

# Output
### Define constructor
![image](https://github.com/user-attachments/assets/85f6ef74-e6ab-4cc1-9b92-a655cf3f0343)
### Parameterized constructior
![image](https://github.com/user-attachments/assets/f1c5e988-fa57-439c-91f7-bb576355d41e)
### Copy constructor
![image](https://github.com/user-attachments/assets/37c6ecb9-ea2d-45df-8a17-5ef1c1c6ae39)
### Default argument
![image](https://github.com/user-attachments/assets/1e18b715-bc2e-4988-84f1-8f099a46746f)
### Area of rectangle
![image](https://github.com/user-attachments/assets/ea6f3ee4-b863-48e1-a2d4-988a0228b9d8)
### Destructor
![image](https://github.com/user-attachments/assets/790dea56-7a45-48a8-8f74-64c6c7c35e44)

# Conclusion
We learnt to define constructor, prameterized constructor, copy constructor, default arguments and destructor.
