#ifndef INCLUDE_STRUTIL_H
#define INCLUDE_STRUTIL_H

#include <cassert>
#include <cstddef>
#include <cstring>
#include <string>

namespace kvdb
{
    class StrUtil{
        public:
        StrUtil():data_(""),size_(0){}
        StrUtil(const char* d,size_t n):data_(d),size_(n){}
        StrUtil(const std::string& s):data_(s.data()),size_(s.size()){}
        StrUtil(const char* s):data_(s),size_(strlen(s)){}

        StrUtil(const StrUtil&)=delete;
        StrUtil& operator=(const StrUtil&)=delete;

        const char* data() {return data_;}
        size_t size() {return size_;}

        private:
        const char* data_;
        size_t size_;
    };
} // namespace kvdb


#endif