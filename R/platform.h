#pragma once
#include <stdlib.h>
/*
 * 这里是平台相关的代码。如果你需要移植到其他系统，请对这里进行更改。
 * 只需要提供少量的C语言标准库信息即可
 */

// 申请内存 malloc(size_t size)
#define RMalloc malloc
// 释放内存 free(void* ptr)
#define RFree   free
// 拷贝内存 memcpy (dst,src,size)
#define RMemcpy memcpy