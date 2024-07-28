#ifndef DB_IMPL_H
#define DB_IMPL_H
#include "../include/db.h"
namespace db
{
    class DBImpl : public DB{
        public:
        DBImpl(const DBImpl&)=delete;
        DBImpl& operator=(const DBImpl&)=delete;
        ~DBImpl() override;
        util::DB_STATUS Put(const std::string& key,const std::string& value) override;
        util::DB_STATUS Delete(const std::string& key) override;
        util::DB_STATUS Write() override;
        util::DB_STATUS Get(const std::string& key,std::string* value) override;
    };
} // namespace db

#endif