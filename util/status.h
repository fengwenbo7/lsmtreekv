#ifndef STATUS_H
#define STATUS_H

namespace util
{
    enum class DB_STATUS{
    kOK=0,
    kNotFound,
    kCorruption,
    kNotSupported,
    kInvalidArgument,
    kIOError,
};
} // namespace util

#endif