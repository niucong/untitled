// 5.���麯����Java������ࣩ
// C++���麯��(C++û�г�����)  �൱�� Java�ĳ�����  Ϊ�˸������

#include <iostream>
using namespace std;

// ������/���麯���� ��Ϊ��1.��ͨ������ 2.������/���麯��
class BaseActivity {
private:
    void setContentView(string layoutResID) {
        cout << "XmlResourceParser���������ļ���Ϣ... ����" << endl;
    }

public:
    // 1.��ͨ����
    void onCreate() {
        setContentView(getLayoutID());

        initView();
        initData();
        initListener();
    }

    // ���麯���Ǳ���̳еģ��������û����д���麯����������ǳ����ࣩ�� �麯���ǲ��ǲ������

    // 2.������/���麯��
    // virtual string getLayoutID(); // �麯��
    virtual string getLayoutID() = 0; // ���麯��
    virtual void initView() = 0;
    virtual void initData() = 0;
    virtual void initListener() = 0;
};

// ���� MainActivity
class MainActivity : public BaseActivity { // MainActivity���û�����¸���Ĵ��麯�����Լ����൱�� ��������

    string getLayoutID() {
        return "R.layout.activity_main";
    }

    void initView()  {
        // Button btLogin = findViewById(R.id.bt_login);
        // Button btRegister = findViewById(R.id.bt_register);
        // TextView tvInfo = findViewById(R.id.tv_info);
        // ... ʡ��
    }

    void initData() {
        // tvInfo.setText("info...");
        // ... ʡ��
    }

    void initListener() {
        /*btLogin.setOnClickListener(new View.OnClickListener() {
                   @Override
                   public void onClick(View v) {
                       // ���������
                   }
               });*/
        // ... ʡ��
    }
};

// ���� HomeActivity
class HomeActivity : public BaseActivity { // MainActivity���û�����¸���Ĵ��麯�����Լ����൱�� ��������

    string getLayoutID() {
        return "R.layout.activity_home";
    }

    void initView()  {
        // Button btLogin = findViewById(R.id.bt_login);
        // Button btRegister = findViewById(R.id.bt_register);
        // TextView tvInfo = findViewById(R.id.tv_info);
        // ... ʡ��
    }

    void initData() {
        // tvInfo.setText("info...");
        // ... ʡ��
    }

    void initListener() {
        /*btLogin.setOnClickListener(new View.OnClickListener() {
                   @Override
                   public void onClick(View v) {
                       // ���������
                   }
               });*/
        // ... ʡ��
    }
};

// ���� LoginActivity
class LoginActivity : public BaseActivity { // MainActivity���û�����¸���Ĵ��麯�����Լ����൱�� ��������

    string getLayoutID() {
        return "R.layout.activity_login";
    }

    void initView()  {
        // Button btLogin = findViewById(R.id.bt_login);
        // Button btRegister = findViewById(R.id.bt_register);
        // TextView tvInfo = findViewById(R.id.tv_info);
        // ... ʡ��
    }

    void initData() {
        // tvInfo.setText("info...");
        // ... ʡ��
    }

    void initListener() {
        /*btLogin.setOnClickListener(new View.OnClickListener() {
                   @Override
                   public void onClick(View v) {
                       // ���������
                   }
               });*/
        // ... ʡ��
    }
};

int main() {

    // ���󣺳������� MainActivity ���Բ���ʵ����
    // MainActivity mainActivity;

    // �����˸������еĴ��麯��
    MainActivity mainActivity;

    return 0;
}
