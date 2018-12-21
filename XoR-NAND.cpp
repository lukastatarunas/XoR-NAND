#include <iostream>

int main(int argc, char *argv[])
{
	int myresult = (*argv[1] | *argv[2]) & (~*argv[1] | ~*argv[2]);
	std::cout << "XOR operation without XOR operator: " << myresult << std::endl;

	int result = *argv[1] ^ *argv[2];
	std::cout << "XOR operation with XOR operator: " << result << std::endl;

	int nand = ~(~(~(*argv[1] & *argv[2]) & *argv[1]) & ~(~(*argv[1] & *argv[2]) & *argv[2]));
	std::cout << "NAND result is: " << nand << std::endl;
}
