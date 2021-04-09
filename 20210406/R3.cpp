// 创建一个最简单的线程
// Created by Niucong on 2021/4/8.
//

//#include "stdafx.h"
#include <windows.h>
#include <iostream>

using namespace std;

//线程函数
DWORD WINAPI ThreadProc(LPVOID lpParameter)
{
    for (int i = 0; i < 5; ++ i)
    {
        cout << "子线程:i = " << i << endl;
        Sleep(100);
    }
    return 0L;
}

int main()
{
    //创建一个线程
    HANDLE thread = CreateThread(NULL, 0, ThreadProc, NULL, 0, NULL);
    //关闭线程
    CloseHandle(thread);

    //主线程的执行路径
    for (int i = 0; i < 5; ++ i)
    {
        cout << "主线程:i = " << i << endl;
        Sleep(100);
    }

    return 0;
}