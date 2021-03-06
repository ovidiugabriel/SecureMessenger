#ifndef SAFESTR_H
#define SAFESTR_H

struct SAFESTR;
typedef struct SAFESTR safestr_t;

/** 
 * Allocates space for the string.
 * If allocation fails, NULL is returned.
 * When allocation is successful, pSafeString is returned.
 */
safestr_t* SAFESTR_Make(safestr_t* pSafeString, int size);

//
// Initial Source: https://zone.ni.com/reference/en-XX/help/370051V-01/cvi/libref/cviformatting_and_io_library_functi/
//

int SAFESTR_GetLength(const safestr_t* pStr);

int SAFESTR_LowerCase(safestr_t* dest, const safestr_t* src);
int SAFESTR_UpperCase(safestr_t* dest, const safestr_t* src);
int SAFESTR_FillBytes(safestr_t* buffer, int startingIndex, int numberOfBytes, unsigned char value);
int SAFESTR_CopyBytes(safestr_t* target, int tagetIndex,
    const safestr_t* source, int sourceIndex, int numberOfBytes );
int SAFESTR_CopyString(safestr_t* target, int targetIndex,
    const safestr_t* source, int sourceIndex, int maximumBytes);
int SAFESTR_CompareBytes(safestr_t* buffer1, int buffer1Index,
    const safestr_t* buffer2, int buffer2Index, int numberOfBytes, int caseSensitive);
int SAFESTR_CompareStrings(const safestr_t* string1, int string1Index,
    const safestr_t* string2, int string2Index, int caseSensitive);
int SAFESTR_FindPattern(const safestr_t* buffer, int startingIndex, int numberOfBytes,
    const safestr_t* pattern, int caseSensitive, int startFromRight);

#endif
