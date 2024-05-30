/*
跳表
逻辑：
1.一个原始链表，维护全部数据
2.多层索引，随机抽取n/(2^k)个元素作为k级索引=>插入新元素时，通过一个概率函数来决定该元素是否需要添加进多级索引中，且该元素有1/2的概率成为一级索引，有1/4的概率成为二级索引，有1/8的概率成为三级索引，...，
实现一个函数，这个函数随机生成1-MAX——LEVEL之间的数，且有1/2概率返回1，1/4概率返回2，1/8概率返回3...返回1时无需建索引，返回2时建立一级索引，返回3时建立二级索引，返回4时建立三级索引...
3.实现k级索引时，那么1～k的索引都需要建立索引，从而保证了概率的问题
*/
#ifndef SKIP_LIST
#define SKIP_LIST

namespace store_data_struct{
    template<typename K,typename V>
    class skip_list{
        public:
        skip_list(int max_level);
        ~skip_list();
        void insert_element(K key,V value);
        void delete_element(K data);

        private:
        int radom_level();
        int max_skip_level_;
        int current_skip_level_;
    };
}

#endif