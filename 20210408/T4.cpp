// TODO unique ����ָ��  ��ƵĹ��򵥣�ÿһ��ô�๦��  [��ռʽ����ָ��]

#include <iostream>
#include <memory> // ����ָ���ͷ�ļ�����

class Person {
public:
    ~Person() {
        std::cout << "Person ��������" << std::endl;
    }
};

int main() {
    Person * person1 = new Person();
//    Person * person2 = new Person();

    std::unique_ptr<Person> uniquePtr1(person1);

    // �ϸ��ֹ
//     std::unique_ptr<Person> uniquePtr2 = uniquePtr1;  // unique��������Ϊ�Ƕ�ռ��

    // shared_ptr �ǿ��Եģ��������������

    return 0;
}


