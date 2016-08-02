#ifndef CPLUSPLUS_SUPPORT_HPP_
#define CPLUSPLUS_SUPPORT_HPP_

#include "FreeRTOS.h"

void *operator new(size_t size) {
    return (pvPortMalloc(size));
}

void *operator new[](size_t size) {
    return (pvPortMalloc(size));
}

void operator delete(void *pointer) {
    vPortFree(pointer);
}

void operator delete(void *pointer, size_t size) {
    operator delete(pointer);
}

void operator delete[](void *pointer) {
    vPortFree(pointer);
}

void operator delete[](void *pointer, size_t size) {
    operator delete[](pointer);
}

#endif /* CPLUSPLUS_SUPPORT_HPP_ */