// 3.��̬���麯������   ��̬��̬������ĽǶ��ϣ������������ڼ����ȷ�������ĸ���ĺ��� == ��̬��̬�ķ��룩

// Java����Ĭ��֧�ֶ�̬
// C++Ĭ�Ϲرն�̬����ô������̬�� �麯��  �ڸ����ϸ��������� virtual�ؼ���

#include <iostream>
using namespace std;

// Android��׼
class BaseActivity {
public:
     virtual void onStart() {
        cout << "BaseActivity onStart" << endl;
    }
};

class HomeActivity : public BaseActivity {
public:
    void onStart() { // ��д����ĺ���
        cout << "HomeActivity onStart" << endl;
    }
};

class LoginActivity : public BaseActivity {
public:
    void onStart() { // ��д����ĺ���
        cout << "LoginActivity onStart" << endl;
    }
};

// �ڴ˺��� ��ϵ��̬�����磺�㴫��HomeActivity���ҾͰ�������HomeActivity
void startToActivity(BaseActivity * baseActivity) {
    baseActivity->onStart();
}

int main() {
    // TODO ��һ�汾
    HomeActivity *homeActivity = new HomeActivity();
    LoginActivity *loginActivity = new LoginActivity();

    startToActivity(homeActivity);
    startToActivity(loginActivity);

    if (homeActivity && loginActivity) delete homeActivity; delete loginActivity;


    cout << endl;


    // TODO �ڶ����汾
    BaseActivity * activity1 = new HomeActivity();
    BaseActivity * activity2 = new LoginActivity();
    startToActivity(activity1);
    startToActivity(activity2);


    // TODO �׿� C++ �׿�Java �ȵȣ�����ʲô�Ƕ�̬�� ���������ָ��֮��Ķ���ͬһ�������в�ͬ��ʵ�֣���д����̬��̬����   ����(��̬��̬)

    return 0;
}
