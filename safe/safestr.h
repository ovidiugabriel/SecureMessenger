#ifndef SAFESTR_H
#define SAFESTR_H

struct SAFESTR {
    int mSize;
    int mLength;
    char* buffer;
};

//
// Initial Source: https://zone.ni.com/reference/en-XX/help/370051V-01/cvi/libref/cviformatting_and_io_library_functi/
//

/** 
 * Similar with strnlen() except that
 * if the terminating null byte is not encountered before maxlength,
 * the returned value is not equal with maxlength.
 * 
 * But a negative number will be returned instead.
 */
int safe_StringLength(const char string[], int maxlen);
int SAFESTR_Length(const struct SAFESTR* pStr);

int safe_StringLowerCase(char* destString, int destStringSize,
    const char* sourceString, int sourceStringSize );
int SAFESTR_LowerCase(struct SAFESTR* dest, const struct SAFESTR* src);
    
int safe_StringUpperCase(char* destString, int destStringSize,
    const char* sourceString, int sourceStringSize );
int SAFESTR_UpperCase(struct SAFESTR* dest, const struct SAFESTR* src);

int safe_FillBytes(char* buffer, int bufferSize, int startingIndex, int numberOfBytes, unsigned char value);
int SAFESTR_FillBytes(struct SAFESTR* buffer, int startingIndex, int numberOfBytes, unsigned char value);

int safe_CopyBytes(char* targetBuffer int targetBufferSize, int targetIndex, 
    const char* sourceBuffer int sourceBufferSize, int sourceIndex, int numberOfBytes);
int SAFESTR_CopyBytes(struct SAFESTR* target, int tagetIndex,
    const struct SAFESTR* source, int sourceIndex, int numberOfBytes );

int safe_CopyString(char* targetString int targetStringSize, int targetIndex, 
    const char* sourceString, int sourceStringSize, int sourceIndex, int maximumBytes);
int SAFESTR_CopyString(struct SAFESTR* target, int targetIndex,
    const struct SAFESTR* source, int sourceIndex, int maximumBytes);

int safe_CompareBytes(const char* buffer1 int buffer1Size, int buffer1Index, 
    const char* buffer2, int buffer2Size, int buffer2Index, int numberOfBytes, int caseSensitive);
int SAFESTR_CompareBytes(struct SAFESTR* buffer1, int buffer1Index,
    const struct SAFESTR* buffer2, int buffer2Index, int numberOfBytes, int caseSensitive);

int safe_CompareStrings(const char* string1, int string1Size, int string1Index, 
    const char* string2, int string2Size, int string2Index, int caseSensitive);
int SAFESTR_CompareStrings(const struct SAFESTR* string1, int string1Index,
    const struct SAFESTR* string2, int string2Index, int caseSensitive);
    
int safe_FindPattern(const char* buffer, int bufferSize, int startingIndex, int numberOfBytes, 
    const char* pattern, int patternSize, int caseSensitive, int startFromRight);
int SAFESTR_FindPattern(const struct SAFESTR* buffer, int startingIndex, int numberOfBytes,
    const struct SAFESTR* pattern, int caseSensitive, int startFromRight);

#endif
