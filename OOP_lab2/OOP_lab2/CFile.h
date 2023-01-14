#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cstdio>

class CFile
{
public:
    CFile();
    CFile(const char* name);
    ~CFile();

    void Open(const char* mode);
    void Close();

    void Read(void* buff, size_t size_of_elem, size_t count);
    void Write(const void* buff, size_t size_of_elem, size_t count);

    int Seek(long offset, int origin);
    int GetPosition();
    int GetLength();

    bool is_open() const { return _is_open; }
    const char* const name() const { return _name; }

private:
    char* _name;
    bool _is_open;
    FILE* p_file;

    char* _cpy_name(const char* src);
    bool _open(const char* name, const char* mode);
};
