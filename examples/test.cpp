#include <stdio.h>
#include <Windows.h>

int main() {
	//MessageBoxA(NULL, "HI!", "", 0);
	HANDLE hFile = CreateFileA("file.txt", GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	LPSTR str = "testingtesting";
	DWORD n;
	WriteFile(hFile, str, strlen(str), &n, NULL);
	CloseHandle(hFile);

	hFile = CreateFileA("file.txt", GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	BYTE buffer[1024];
	buffer[0] = 0;
	ReadFile(hFile, buffer, 1024, &n, NULL);
	buffer[n] = 0;
	printf("Slave read \"%s\"\n", buffer);
	CloseHandle(hFile);

	MoveFileExA("file.txt", "newfile.txt", 0);
}