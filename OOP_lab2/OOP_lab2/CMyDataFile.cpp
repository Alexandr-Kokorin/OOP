#include "CMyDataFile.h"

CMyDataFile::CMyDataFile() {}
CMyDataFile::CMyDataFile(const char* name) : CFile(name) {}

void CMyDataFile::Read(char* buff, size_t count)
{
	char* tmp = new char[count + 1];

	memset(tmp, 0, count + 1);
	memset(buff, 0, count);

	CFile::Read(tmp, sizeof(char), count);

	char* str = new char[1]{0};
	for (int i = 0; i < count; i++) {
		if (tmp[i] >= '0' && tmp[i] <= '9') {
			char* s1 = new char[2]{tmp[i]};
			char* s2 = str;
			str = new char[strlen(s1) + strlen(s2) + 1];
			strcpy(str, s2);
			strcat(str, s1);
		}
	}

	strcpy(buff, str);
	free(tmp);
	free(str);
}