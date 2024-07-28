#ifndef DB_H
#define DB_H

#include "../util/status.h"
#include <string>

class DB{
    public:
    static util::DB_STATUS Open();
    DB()=default;
    DB(const DB&)=delete;
    DB& operator=(const DB&)=delete;
    virtual ~DB();

    virtual util::DB_STATUS Put(const std::string& key,const std::string& value);
    virtual util::DB_STATUS Delete(const std::string& key);
    virtual util::DB_STATUS Write();
    virtual util::DB_STATUS Get(const std::string& key,std::string* value);
};

#endif