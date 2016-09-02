
#include "safestr.h"

struct SAFESTR {
    int mSize;
    int mLength;
    char* mBuffer;
};

safestr_t* SAFESTR_Make(safestr_t* pSafeString, int size)
{
    pSafeString->mBuffer = (char*) calloc(size);
    pSafeString->mSize = (pSafeString->mBuffer) ? size : 0;
    pSafeString->mLength = 0;
    if (pSafeString->mBuffer) {
        return pSafeString;
    }
    return NULL;
}

int SAFESTR_Length(const safestr_t* pSafeString)
{
    return pSafeString->mLength;
}
