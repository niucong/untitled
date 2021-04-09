// ��Ԫ�� �� С���� ��ImageView ˽�г�Ա  ����ͨ��Class�����ʣ�����Class������native C++���룩
// ���� JDK native���� �о� ��ͬѧ���Լ�ȥ�о���

// ImageView ˽�г�Ա  ���ܷ�������˽�г�Ա�� Class
#include <iostream>

using namespace std;

class ImageView {
private:
    int viewSize;
    friend class Class; // ��Ԫ��
};

// Javaÿ���࣬������һ��Class����Class���Բ��� ImageView˽�г�Ա���о������棩
class Class {
public:
    ImageView imageView;

    void changeViewSize(int size) {
        imageView.viewSize = size;
    }

    int getViewSize() {
        return imageView.viewSize;
    }
};

int main() {
    Class mImageViewClass;

    mImageViewClass.changeViewSize(600);

    cout << mImageViewClass.getViewSize() << endl;

    return 0;
}

