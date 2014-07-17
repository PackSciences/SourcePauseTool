#ifndef __SPT_H__
#define __SPT_H__

#ifdef _WIN32
#pragma once
#endif

#include <string>

#define SPT_VERSION "0.5"

extern void ( *EngineLog )( const char *format, ... );
extern void ( *EngineDevLog )( const char *format, ... );
extern void ( *EngineWarning )( const char *format, ... );
extern void ( *EngineConCmd )( const char *cmd );

std::wstring GetFileName( const std::wstring &fileNameWithPath );

#endif // __SPT_H__
