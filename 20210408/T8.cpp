// 3.四种类型转换。 static_cast   指针相关的操作 可以用 static_cast

//const_cast	去掉类型的const或volatile属性
//static_cast	无条件转换，静态类型转换
//dynamic_cast	有条件转换，动态类型转换，运行时检查类型安全（转换失败返回NULL）
//reinterpret_cast	仅重新解释类型，但没有进行二进制的转换

#include <iostream>

using namespace std;

class FuClass {
public:
    void show() {
        cout << "fu show" << endl;
    }
};

class ZiClass : public FuClass {
public:
    void show() {
        cout << "zi show" << endl;
    }
};

int main() {
    int n = 88;
    void *pVoid = &n;
    int *number = static_cast<int *>(pVoid);
    cout << *number << endl;

    // ====================

    FuClass *fuClass = new FuClass;
//    fuClass->show();

    // static_cast(编译期) 看左边 ZiClass *
    ZiClass *ziClass = static_cast<ZiClass *>(fuClass);
    ziClass->show();

    delete fuClass; // 回收规则：一定是谁new了，我就delete谁

    return 0;
}

