#ifndef TABLE_FORMAT_H
#define TABLE_FORMAT_H
#include <cstdint>

typedef uint64_t SN;

enum ValueType{
    kTypeAdd=0x0,
    kTypeDelete=0x1,
};

#endif