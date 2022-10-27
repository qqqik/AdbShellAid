#include <iostream>
#include <windows.h>
#include <assert.h>
#include <chrono>
#include "Function.h"
#include "Uninstall.h"
#include <thread>
#include <tchar.h>
#include <Urlmon.h>
#include <filesystem>
#pragma comment(lib, "Urlmon.lib")
using namespace std;
int main()
{
    cout << "欢迎使用ADB帮助" << endl;
    system("@echo off");  //隐藏 .bat 命令
    system("chcp 65001"); //设置cmd窗口为GBK编码, 防止中文乱码

    system("pause");
    system("adb.exe devices"); //查看ADB设备连接数量
    system("pause");
    cout << "请选择您要进行的服务:" << endl;
    cout << "1.卸载软件\n2.ADB不可用?尝试修复!\n3.其他工具\n4.ADB驱动官网" << endl;
    int num;
    cin >> num;
    if (num == 1)
    {
        system("pause");
        system("cls");

        this_thread::sleep_for(0.5s);
        Display();   //显示可以进行操作的软件
        uninstall(); //平平无奇的卸载函数
    }
    if (num == 4)
    {
        jump();
    }
    if (num == 2)
    {
        system("adb kill-server");//切断ADB服务
    }
    if (num == 3)
    {
        system("cls");
        cout << "1.查看手机所有已装应用的包名\n2.重启手机\n3.查看屏幕分辨率\n4.查看系统信息\5.获取序列号" << endl;
        if (num == 1)
        {
            system("cls");
            system("adb shell pm list packages");
        }
        else if (num == 2)
        {
            cout << "确认重启?输入202210继续 , 输入exit退出" << endl;
            string Reboot;
            cin >> Reboot;
            if (Reboot == "202210确认继续")
            {
                system("adb reboot");
            }
            else if (Reboot == "exit")
            {
                return 0;
            }
        }
        else if (num == 3)
        {
            system("cls");
            system("adb shell wm size");
        }
        else if (num == 4)
        {
            system("cls");
            system("adb shell dumpsys -h");
        }
        else if (num == 5)
        {
            system("cls");
            system("adb get-serialno");
        }
    }
}