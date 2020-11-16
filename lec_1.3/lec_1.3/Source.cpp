#include <iostream>

int educlid_gcd(int a, int b)
{
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}

	return a;
};

int main()
{
	int x, y;

	std::cout << "Enter the number. x = ";
	std::cin >> x;

	std::cout << "Enter the number. y = ";
	std::cin >> y;

	std::cout << "GCD(x, y) = " << educlid_gcd(x, y) << std::endl;

	return 0;
}
