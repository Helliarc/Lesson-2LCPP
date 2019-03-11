#include <iostream>

void funk2();

void funk()
{
	std::cout << "Output from funk \n";
	funk2();
}

void funk2()
{
	std::cout << "Output 1 from funk2 \n";
	funk();
	std::cout << "Output 2 from funk2 \n";
}

int main()
{
	std::cout << "First output from main \n";
	funk();
	funk2();
	std::cout << "Main after funk \n";
	std::cout << "Final Main \n";

	//Why doesn't this program run???  Submit your idea!
	//have to use a forward declaration to call funk2!  Builds and runs correctly!

	return 0;
}