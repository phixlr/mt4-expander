#pragma once
#include "expander.h"


const char* WINAPI GetGlobalConfigPathA();
DWORD       WINAPI GetIniKeysA(const char* fileName, const char* section, char* buffer, DWORD bufferSize);
char*       WINAPI GetIniStringA(const char* fileName, const char* section, const char* key, const char* defaultValue = "");
char*       WINAPI GetIniStringRawA(const char* fileName, const char* section, const char* key, const char* defaultValue = "");
const char* WINAPI GetLocalConfigPathA();
BOOL        WINAPI IsGlobalConfigKey(const char* section, const char* key);
BOOL        WINAPI IsIniKeyA(const char* fileName, const char* section, const char* key);
BOOL        WINAPI IsIniSection(const char* fileName, const char* section);
BOOL        WINAPI IsLocalConfigKey(const char* section, const char* key);
