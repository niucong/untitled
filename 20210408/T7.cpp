// 3.四种类型转换。 const_cast     const修饰的 都可以去转换

//const_cast	去掉类型的const或volatile属性
//static_cast	无条件转换，静态类型转换
//dynamic_cast	有条件转换，动态类型转换，运行时检查类型安全（转换失败返回NULL）
//reinterpret_cast	仅重新解释类型，但没有进行二进制的转换

#include <iostream>

using namespace std;

class Person {
public:
    string name = "default";
};

int main() {
    const Person * p1 = new Person();
//     p1->name = "Derry"; // 报错：常量指针，不写修改值

    Person * p2 = const_cast<Person *>(p1); // 转成 非常量指针
    p2->name = "Derry";

    cout << p1->name << endl;

    return 0;
}

