#include <iostream>
#include <string>
class MyClass
{
public:
	MyClass()
	{
		std::cout << "Creating my class obj" << std::endl;
	}
	~MyClass()
	{
		std::cout << "Deleting my class obj" << std::endl;
	}
};

template <typename T>
class SmartPointer
{
public:
	SmartPointer(T* p)
	{ 
		pointer = p;
		std::cout << &p << std::endl;
	}
	~SmartPointer() { delete pointer; }
private:
	T* pointer;
};
int main()
{
	SmartPointer <MyClass> P(new MyClass);
}