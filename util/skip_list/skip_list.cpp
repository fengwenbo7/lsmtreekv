#include "skip_list.h"
#include "../server.h"
#include <cmath>

namespace store_data_struct{
    template<typename K,typename V>
    skip_list<K,V>::skip_list(int max_level){
        max_skip_level_=max_level;
        current_skip_level_=0;
    }

    //1/2概率返回1，1/4概率返回2，1/8概率返回3...
    template<typename K,typename V>
    int skip_list<K,V>::radom_level(){
        int level_num=1;
        while (Math.random()<SKIPLIST_P&&level<MAX_SKIP_LEVEL)
        {
            level_num+=1;
        }
        return level_num;
    }

// Insert given key and value in skip list 
// return 1 means element exists  
// return 0 means insert successfully
/* 
                           +------------+
                           |  insert 50 |
                           +------------+
level 4     +-->1+                                                      100
                 |
                 |                      insert +----+
level 3         1+-------->10+---------------> | 50 |          70       100
                                               |    |
                                               |    |
level 2         1          10         30       | 50 |          70       100
                                               |    |
                                               |    |
level 1         1    4     10         30       | 50 |          70       100
                                               |    |
                                               |    |
level 0         1    4   9 10         30   40  | 50 |  60      70       100
                                               +----+
                                        update[0]     current

*/
    template<typename K,typename V>
    void skip_list<K,V>::insert_element(K key,V value){
        //1.判断索引层数
        //2.寻找插入位置
        //3.建立索引
        //4.插入数据
    }

    template<typename K,typename V>
    void skip_list<K,V>::delete_element(K key){
        //1.索引寻找目标数据
        //2.依次删除索引以及数据
    }
}