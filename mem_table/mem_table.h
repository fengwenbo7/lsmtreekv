/*
memory table
在内存中写入操作
*/
#ifndef MEM_TABLE
#define MEM_TABLE

#include <string>
#include "table_format.h"
namespace mem_table{
    class MemTable{
        public:
        //only construct
        explicit MemTable();
        MemTable(const MemTable&)=delete;
        MemTable& operator=(const MemTable&)=delete;

        void Add(SN sn, ValueType type, const std::string& key, const std::string& value);
        bool Get();
    };
}


#endif