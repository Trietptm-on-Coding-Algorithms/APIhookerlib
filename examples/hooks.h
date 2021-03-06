#include <Windows.h>

VOID __stdcall before_hook_CreateFileA(
	_In_     LPCSTR               lpFileName,
	_In_     DWORD                 dwDesiredAccess,
	_In_     DWORD                 dwShareMode,
	_In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	_In_     DWORD                 dwCreationDisposition,
	_In_     DWORD                 dwFlagsAndAttributes,
	_In_opt_ HANDLE                hTemplateFile
);

VOID __stdcall after_hook_CreateFileA(
	_In_     LPCSTR               lpFileName,
	_In_     DWORD                 dwDesiredAccess,
	_In_     DWORD                 dwShareMode,
	_In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	_In_     DWORD                 dwCreationDisposition,
	_In_     DWORD                 dwFlagsAndAttributes,
	_In_opt_ HANDLE                hTemplateFile,
	HANDLE returnValue
);

VOID __stdcall before_hook_CreateFileW(
	_In_     LPWSTR               lpFileName,
	_In_     DWORD                 dwDesiredAccess,
	_In_     DWORD                 dwShareMode,
	_In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	_In_     DWORD                 dwCreationDisposition,
	_In_     DWORD                 dwFlagsAndAttributes,
	_In_opt_ HANDLE                hTemplateFile
);

VOID __stdcall after_hook_CreateFileW(
	_In_     LPWSTR               lpFileName,
	_In_     DWORD                 dwDesiredAccess,
	_In_     DWORD                 dwShareMode,
	_In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	_In_     DWORD                 dwCreationDisposition,
	_In_     DWORD                 dwFlagsAndAttributes,
	_In_opt_ HANDLE                hTemplateFile,
	HANDLE returnValue
);

VOID __stdcall before_hook_ReadFile(
	_In_        HANDLE       hFile,
	_Out_       LPVOID       lpBuffer,
	_In_        DWORD        nNumberOfBytesToRead,
	_Out_opt_   LPDWORD      lpNumberOfBytesRead,
	_Inout_opt_ LPOVERLAPPED lpOverlapped
);

VOID __stdcall after_hook_ReadFile(
	_In_        HANDLE       hFile,
	_Out_       LPVOID       lpBuffer,
	_In_        DWORD        nNumberOfBytesToRead,
	_Out_opt_   LPDWORD      lpNumberOfBytesRead,
	_Inout_opt_ LPOVERLAPPED lpOverlapped,
	BOOL returnValue
);

VOID __stdcall before_hook_WriteFile(
	_In_        HANDLE       hFile,
	_In_        LPCVOID      lpBuffer,
	_In_        DWORD        nNumberOfBytesToWrite,
	_Out_opt_   LPDWORD      lpNumberOfBytesWritten,
	_Inout_opt_ LPOVERLAPPED lpOverlapped
);

VOID __stdcall after_hook_WriteFile(
	_In_        HANDLE       hFile,
	_In_        LPCVOID      lpBuffer,
	_In_        DWORD        nNumberOfBytesToWrite,
	_Out_opt_   LPDWORD      lpNumberOfBytesWritten,
	_Inout_opt_ LPOVERLAPPED lpOverlapped,
	BOOL returnValue
);

VOID __stdcall before_hook_MoveFileA(
	_In_ LPCSTR lpExistingFileName,
	_In_ LPCSTR lpNewFileName
);

VOID __stdcall after_hook_MoveFileA(
	_In_ LPCTSTR lpExistingFileName,
	_In_ LPCTSTR lpNewFileName,
	BOOL returnValue
);

VOID __stdcall before_hook_MoveFileExA(
	_In_ LPCSTR lpExistingFileName,
	_In_ LPCSTR lpNewFileName,
	_In_     DWORD   dwFlags
);

VOID __stdcall after_hook_MoveFileExA(
	_In_ LPCTSTR lpExistingFileName,
	_In_ LPCTSTR lpNewFileName, 
	_In_     DWORD   dwFlags,
	BOOL returnValue
);

VOID __stdcall before_hook_socket(
	int af,
	int type,
	int protocol
);

VOID __stdcall after_hook_socket(
	int af,
	int type,
	int protocol,
	SOCKET ret_value
);

VOID __stdcall before_hook_connect(
	_In_ SOCKET                s,
	_In_ const struct sockaddr *name,
	_In_ int                   namelen
);

VOID __stdcall before_hook_send(
	_In_       SOCKET s,
	_In_ const char   *buf,
	_In_       int    len,
	_In_       int    flags
);

VOID __stdcall before_hook_recv(
	_In_  SOCKET s,
	_Out_ char   *buf,
	_In_  int    len,
	_In_  int    flags
);

int __stdcall after_hook_recv(
	_In_  SOCKET s,
	_Out_ char   *buf,
	_In_  int    len,
	_In_  int    flags,
	int retvalue
);