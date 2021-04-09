//
// Created by Niucong on 2021/4/8.
//

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Report {
private:
    string str;
public:
    Report(const string s) : str(s) {
        cout << "Object created!\n";
    }

    ~Report() {
        cout << "Object deleted!\n";
    }

    void comment() const {
        cout << str << "\n";
    }
};

int main() {

    auto_ptr<Report> aps(new Report("using auto_ptr"));
    aps->comment();

    shared_ptr<Report> sps(new Report("using shared_ptr"));
    sps->comment();

    unique_ptr<Report> ups(new Report("using unique_ptr"));
    ups->comment();

    return 0;
}


