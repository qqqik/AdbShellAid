#include <iostream>
#include <windows.h>
#include <assert.h>
#include <chrono>
#include <thread>
#include <tchar.h>
#include <Urlmon.h>
#pragma comment(lib, "Urlmon.lib")
using namespace std;
void jump() // 可以跳转到任意URL的函数
{
     HWND hWnd = FindWindow("ConsoleWindowClass", NULL);
     ShowWindow(hWnd, SW_HIDE);
     system("https://adbshell.com/downloads");
}
void col()
{
     for (int i = 0; i < 120; i++)
     {
          cout << "*";
          this_thread::sleep_for(0.01s);
     }
}
void Display()
{
     col();
     cout << "1.智慧搜索   "
          << "2.智慧语音   "
          << "3.智慧识屏   "
          << "4.智慧建议   "
          << "5.智慧助手•今天   "
          << "6.华为音乐   "
          << "7.服务中心   "
          << "8.华为钱包   "
          << "9.天际通   " << endl;
     cout << endl;
     this_thread::sleep_for(0.5s);
     cout << "10.快应用中心  "
          << "11.运动健康   "
          << "12.华为浏览器   "
          << "13.备忘录   "
          << "14.智能检测   "
          << "15.小区广播   "
          << "16.地理围栏服务   "
          << "17.云山动态壁纸   " << endl;
     cout << endl;
     this_thread::sleep_for(0.5s);
     cout << "18.探索动态壁纸   "
          << "19.Sim卡应用   "
          << "20.屏保图片程序   "
          << "21.华为智能建议服务   "
          << "22.用户体验计划   "
          << "23.精品推荐   "
          << "24.AR引擎(测距)   " << endl;
     cout << endl;
     this_thread::sleep_for(0.1s);
     cout << "25.游戏空间   "
          << "26.百度输入法   "
          << "27.隐私空间   "
          << "28.悬浮球   "
          << "29.sim卡管理   "
          << "30.悬浮导航   "
          << "31.花瓣剪辑   "
          << "32.多屏协同   " << endl;
     cout << endl;
     this_thread::sleep_for(0.5s);
     cout << "33.应用商店   "
          << "34.息屏显示   "
          << "35.相机   "
          << "36.畅连   "
          << "37.讯飞语音引擎   "
          << "38.查找手机   "
          << "39.彩信服务   "
          << "40.杂志锁屏   "
          << "41.备份" << endl;
     cout << endl;
     this_thread::sleep_for(0.6s);
     cout << "42.主题   "
          << "43.智能检测   "
          << "44.计算器   "
          << "45.个人紧急信息   "
          << "46.智慧视觉   "
          << "47.时钟   "
          << "48.打印服务   "
          << "49.HiCar智行   "
          << "50.智慧引擎" << endl;
     cout << endl;
     this_thread::sleep_for(0.7s);
     cout << "51.云空间   "
          << "52.华为视频   "
          << "53.阅读   "
          << "54.k歌特效" << endl;
     cout << endl;
     this_thread::sleep_for(0.5s);
     col();
}