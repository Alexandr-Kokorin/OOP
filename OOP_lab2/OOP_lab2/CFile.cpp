#include "CFile.h"

CFile::CFile() : _name(0) {}

CFile::CFile(const char* name)
{
    _name = _cpy_name(name);
}

CFile::~CFile()
{
    Close();
    if (_name) free(_name);
}

void CFile::Open(const char* mode)
{
    _is_open = _open(_name, mode);
}

void CFile::Close()
{
    if (p_file)
    {
        fclose(p_file);
        p_file = 0;
    }
}

char* CFile::_cpy_name(const char* src)
{
    char* name = new char[strlen(src) + 1];
    assert(name);
    strcpy(name, src);
    return name;
}

bool CFile::_open(const char* name, const char* mode)
{
    p_file = fopen(name, mode);
    return p_file;
}

void CFile::Read(void* buff, size_t size_of_elem, size_t count)
{
    fread(buff, size_of_elem, count, p_file);
}

void CFile::Write(const void* buff, size_t size_of_elem, size_t count)
{
    fwrite(buff, size_of_elem, count, p_file);
}

int CFile::Seek(long offset, int origin)
{
    return fseek(p_file, offset, origin);
}

int CFile::GetPosition()
{
    return ftell(p_file);
}

int CFile::GetLength()
{
    Seek(0, SEEK_END);
    int len = GetPosition();
    rewind(p_file);
    return len;
}
