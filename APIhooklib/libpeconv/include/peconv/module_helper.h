#pragma once

#include <Windows.h>

namespace peconv {

//TODO: implement a class for module management

BYTE* alloc_pe_buffer(size_t buffer_size, DWORD protect, ULONGLONG desired_base=NULL);

// Free loaded module (wrapper)
void free_pe_buffer(BYTE* buffer, size_t buffer_size);

}; //namespace peconv
