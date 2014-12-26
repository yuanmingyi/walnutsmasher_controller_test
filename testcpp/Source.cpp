#include <iostream>

class Foo
{
	int value;

public:
	Foo(int v): value(v) {}
	Foo() { this->Foo::Foo(100); }

	Foo(const Foo& f) { this->value = f.value; std::cout << "Foo(const Foo& f) called" << std::endl; }	
	Foo& operator=(const Foo& f) { this->value = f.value; std::cout << "operator= called" << std::endl; }

	void Print()
	{
	}
};

int main(void)
{
	Foo a(100);
	Foo b = a;

	return 0;
}