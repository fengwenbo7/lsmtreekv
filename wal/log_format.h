#ifndef LOG_FORMAT_H
#define LOG_FORMAT_H

namespace wal
{

enum LogType{
    kFirstRecord=0,
    kMiddleRecord,
    kLastRecord,
    kFullRecord,
};

#define kBlockSize 32 * 1024
#define kHeaderSize 4/*checksum*/+2/*length*/+1/*type*/

} // namespace wal

#endif