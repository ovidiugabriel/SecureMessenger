
#include "safestr.h"

struct SAFESTR {
    int mSize;
    int mLength;
    char* mBuffer;
};

safestr_t SAFESTR_Make(int size)
{
    safestr_t safeString;
    safeString.mBuffer = (char*) calloc(size);
    safeString.mSize = (safeString.mBuffer) ? size : 0;
    safeString.mLength = 0;
    return safeString;
}

int SAFESTR_Length(const safestr_t* pSafeString)
{
    return pSafeString->mLength;
}
