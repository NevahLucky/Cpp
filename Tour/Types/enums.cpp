#include <iostream>

int main()
{
	enum class Color
	{
		red,
		blue,
		green
	};
	int x = int(Color::red);
	std::cout << x;
}