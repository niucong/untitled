// 7.�ص���  Java�ĵ�¼ �򵥵� �ӿ�

#include <iostream>
using namespace std;

// ��¼�ɹ���Bean
class SuccessBean {
public:
    string username;
    string userpwd;

    SuccessBean(string username, string userpwd)
    :username(username), userpwd(userpwd) {}
};

// ��¼��Ӧ�Ľӿ�  �ɹ�������
class ILoginResponse {
public:
    // ��¼�ɹ�
    virtual void loginSuccess(int code, string message, SuccessBean successBean) = 0;

    // ��¼ʧ��
    virtual void loginError(int code, string message) = 0;
};

// ��¼��API����
void loginAction(string name, string pwd, ILoginResponse & loginResponse) {
    if (name.empty() || pwd.empty()) {
        cout << "�û���������Ϊ��!" << endl;
        return;
    }

    if ("Derry" == name && "123" == pwd) {
        loginResponse.loginSuccess(200, "��¼�ɹ�", SuccessBean(name, "��ϲ�����"));
    } else {
        loginResponse.loginError(404, "��¼�����û������������...");
    }
}

// дһ��ʵ���࣬�̳нӿ�
// �ӿ�ʵ����
class ILoginResponseImpl : public ILoginResponse {
public:
    // ��¼�ɹ�
    void loginSuccess(int code, string message, SuccessBean successBean) {
        cout << "��ϲ��¼�ɹ� " << "code:" << code << " message:" << message
        << "successBean:" << successBean.username << "," << successBean.userpwd << endl;
    }

    // ��¼ʧ��
    void loginError(int code, string message) {
        cout << " ��¼ʧ�� " << "code:" << code << " message:" << message << endl;
    }
};

int main() {

    // ��ʵ��
    // Allocating an object of abstract class type 'ILoginResponse'
    // ���ڷ����������ΪILoginResponse�Ķ���  ���ܱ�ʵ����
    // ���᣺Ϊʲô������
    // 1.������Java�Ľӿڣ�C++Ҳû�нӿڣ���ֻ����ӿڶ��ѡ�
    // 2.��Ҳ���ǳ����࣬C++Ҳû�г����࣬��ֻ�����������ѡ�
    // 3.���Ǵ��麯�����࣬���������׼��ʵ����  ���۶��� ����ջ��
    /*new ILoginResponse() {
        // ��¼�ɹ�
        void loginSuccess(int code, string message, SuccessBean successBean) {

        }

        // ��¼ʧ��
        void loginError(int code, string message) {

        }
    }*/

    string username;
    cout << "�������û���.." << endl;
    cin >> username;

    string userpwd;
    cout << "����������.." << endl;
    cin >> userpwd;

    ILoginResponseImpl iLoginResponse;
    loginAction(username, userpwd, iLoginResponse);

    return 0;
}

