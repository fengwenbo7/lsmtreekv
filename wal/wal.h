/*
write ahead log
功能：仅追加日志，记录操作过程，保证能够还原所有对内存表的写操作，重新顺序执行这些操作，使得内存表恢复到上一次的状态
逻辑：
1.内存表数据写入ss_table后需要将wal中删除，然后创建新的wal；
*/
#ifndef WAL
#define WAL

#endif