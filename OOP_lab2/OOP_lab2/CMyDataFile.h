#include "CFile.h"

class CMyDataFile: public CFile
{
public:
	CMyDataFile();
	CMyDataFile(const char* name);

	void Read(char* buff, size_t count);
};

