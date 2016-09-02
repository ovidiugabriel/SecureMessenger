#ifndef SAFE_FORMATIO_H
#define SAFE_FORMATIO_H

struct STR {
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
int StringLength(const char string[], size_t maxlen);

void StringLowerCase(char string[]);
void StringUpperCase(char string[]);
void FillBytes(char buffer[], int startingIndex, size_t numberOfBytes, int value);
void CopyBytes(char targetBuffer[], int targetIndex, char sourceBuffer[], int sourceIndex, size_t numberOfBytes);
void CopyString(char targetString[], int targetIndex, char sourceString[], int sourceIndex, ssize_t maximumBytes);
int CompareBytes(char buffer1[], int buffer1Index, char buffer2[], int buffer2Index, size_t numberOfBytes, int caseSensitive);
int CompareStrings(char string1[], int string1Index, char string2[], int string2Index, int caseSensitive);
int FindPattern(char buffer[], int startingIndex, ssize_t numberOfBytes, char pattern[], int caseSensitive, int startFromRight);

#endif
