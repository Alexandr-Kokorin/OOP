#include <iostream>
#include "CMyDataFile.h"

int main()
{
	CMyDataFile file("MyData.txt");
	file.Open("r");

	if (!file.is_open())
		return 1;

	char str[] = "He2llo wor5ld!7";
	int len = strlen(str);

	file.Write(str, sizeof(char), len);

	str[0] = 0;
	file.Close();

	file.Open("r");
	file.Read(str, len);

	std::cout<< str;

	getchar();
}
