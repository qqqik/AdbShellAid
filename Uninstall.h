#include <iostream>
#include <windows.h>
#include <assert.h>
#include <chrono>
#include <thread>
#include <tchar.h>
using namespace std;
int uninstall() //别看了 , shi山预警
{
    while (true)
    {
        int num_1;
        cout << "请输入需要卸载的应用(填序号):";
        cin >> num_1;
        if (num_1 == 1)
        {
            system("adb shell pm uninstall --user 0 com.huawei.search");
            cout << "[智慧搜索]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 2)
        {
            system("adb shell pm uninstall --user 0 com.huawei.vassistant");
            cout << "[智慧语音]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 3)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hitouch");
            system("adb shell pm uninstall --user 0 com.huawei.hiaction");
            system("adb shell pm uninstall --user 0 com.android.documentsui");
            system("adb shell pm uninstall --user 0 com.huawei.contentsensor");
            cout << "[智慧识屏]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 4)
        {
            system("adb shell pm uninstall --user 0 com.huawei.ohos.suggestion");
            cout << "[智慧建议]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 5)
        {
            system("adb shell pm uninstall --user 0 com.huawei.intelligent");
            cout << "[智慧助手]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 6)
        {
            system("adb shell pm uninstall --user 0 com.android.mediacenter");
            system("adb shell pm uninstall --user 0 com.huawei.music");
            cout << "[华为音乐]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 7)
        {
            system("adb shell pm uninstall --user 0 com.huawei.ohos.famanager");
            cout << "[服务中心]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 8)
        {
            system("adb shell pm uninstall --user 0 com.huawei.wallet");
            cout << "[华为钱包]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 9)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hiskytone");
            system("adb shell pm uninstall --user 0 com.huawei.skytone");
            cout << "[天际通]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 10)
        {
            system("adb shell pm uninstall --user 0 com.huawei.fastapp");
            cout << "[快应用中心]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 11)
        {
            system("adb shell pm uninstall --user 0 com.huawei.health");
            system("adb shell pm uninstall --user 0 com.huawei.ohos.health");
            cout << "[运动健康]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 12)
        {
            system("adb shell pm uninstall --user 0 com.huawei.browser");
            system("adb shell pm uninstall --user 0 com.android.browser");
            cout << "[华为浏览器]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 13)
        {
            system("adb shell pm uninstall --user 0 com.example.android.notepad");
            cout << "[备忘录]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 14)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hwdetectrepair");
            cout << "[智能检测]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 15)
        {
            system("adb shell pm uninstall --user 0 com.android.cellbroadcastreceiver");
            cout << "[小区广播]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 16)
        {
            system("adb shell pm uninstall --user 0 com.huawei.spaceservice");
            cout << "[地理围栏服务]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 17)
        {
            system("adb shell pm uninstall --user 0 com.huawei.livewallpaper.paradise");
            cout << "[云山动态壁纸]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 18)
        {
            system("adb shell pm uninstall --user 0 com.huawei.livewallpaper.mountaincloud");
            cout << "[探索动态壁纸]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 19)
        {
            system("adb shell pm uninstall --user 0 com.android.stk");
            cout << "[sim卡程序]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 20)
        {
            system("adb shell pm uninstall --user 0 com.android.dreams.basic");
            cout << "[屏保图片程序]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 21)
        {
            system("adb shell pm uninstall --user 0 com.huawei.pengine");
            cout << "[华为智能建议服务]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 22)
        {
            system("adb shell pm uninstall --user 0 com.huawei.bd");
            cout << "[用户体验计划]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 23)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hifolder");
            cout << "[精品推荐]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 24)
        {
            system("adb shell pm uninstall --user 0 com.huawei.vrservice");
            system("adb shell pm uninstall --user 0 com.huawei.arengine.service");
            cout << "[AR引擎]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 25)
        {
            system("adb shell pm uninstall --user 0 com.huawei.gameassistant");
            cout << "[游戏空间]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 26)
        {
            system("adb shell pm uninstall --user 0 com.baidu.input_huawei");
            cout << "[百度输入法]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 27)
        {
            system("adb shell pm uninstall --user 0 com.huawei.privatespace");
            cout << "[隐私空间]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 28)
        {
            system("adb shell pm uninstall --user 0 com.huawei.motionservice");
            cout << "[悬浮球]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 29)
        {
            system("adb shell pm uninstall --user 0 com.huawei.dsdscardmanager");
            system("adb shell pm uninstall --user 0 com.android.stk");
            cout << "[sim卡管理]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 30)
        {
            system("adb shell pm uninstall --user 0 com.huawei.android.FloatTasks");
            cout << "[悬浮导航]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 31)
        {
            system("adb shell pm uninstall --user 0 com.huawei.videoeditor");
            cout << "[花瓣剪辑]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 32)
        {
            system("adb shell pm uninstall --user 0 com.huawei.controlcenter");
            cout << "[多屏协同]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 33)
        {
            cout << "卸载应用商店可能会有重大BUG(死循环开机) , 确定删除吗?(按1退出 , 按10086继续)" << endl;
            int Dangers = 0;
            cin >> Dangers;
            if (Dangers == 1)
            {
            }
            else if (Dangers == 10086)
            {
                system("adb shell pm uninstall --user 0 com.huawei.appmarket");
                cout << "[应用商店]卸载完成!" << endl;
                system("pause");
            }
            else
            {
                cout << "输入未识别 , 自动退出..." << endl;
                system("pause");
            }
        }
        else if (num_1 == 34)
        {
            system("adb shell pm uninstall --user 0 com.huawei.aod");
            cout << "[息屏显示]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 35)
        {
            system("adb shell pm uninstall --user 0 com.huawei.camera");
            cout << "[相机]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 36)
        {
            system("adb shell pm uninstall --user 0 com.huawei.meetime");
            system("adb shell pm uninstall --user 0 com.huawei.hwvoipservice");
            cout << "[畅连]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 37)
        {
            system("adb shell pm uninstall --user 0 com.sohu.sohuvideo.emplayer	");
            system("adb shell pm uninstall --user 0 com.iflytek.speechsuite");
            cout << "[讯飞语音引擎]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 38)
        {
            system("adb shell pm uninstall --user 0 com.huawei.android.findmyphone");
            cout << "[查找手机]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 39)
        {
            system("adb shell pm uninstall --user 0 com.android.mms.service");
            cout << "[彩信服务]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 40)
        {
            system("adb shell pm uninstall --user 0 com.huawei.magazine");
            cout << "[杂志锁屏]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 41)
        {
            system("adb shell pm uninstall --user 0 com.huawei.localBackup");
            cout << "[备份]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 42)
        {
            system("adb shell pm uninstall --user 0 com.huawei.android.thememanager");
            cout << "[主题]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 43)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hwdetectrepair");
            cout << "[智能检测]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 44)
        {
            system("adb shell pm uninstall --user 0 com.android.calculator2");
            cout << "[计算器]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 45)
        {
            system("adb shell pm uninstall --user 0 com.android.emergency");
            cout << "[个人紧急信息]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 46)
        {
            system("adb shell pm uninstall --user 0 com.huawei.scanner");
            cout << "[智慧视觉]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 47)
        {
            system("adb shell pm uninstall --user 0 com.android.deskclock");
            cout << "[时钟]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 48)
        {
            system("adb shell pm uninstall --user 0 com.huawei.printservice");
            system("adb shell pm uninstall --user 0 com.android.printspooler");
            cout << "[打印服务]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 49)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hicar");
            cout << "[HiCar智行]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 50)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hiai");
            cout << "[华为智慧引擎]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 51)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hidisk");
            system("adb shell pm uninstall --user 0 com.huawei.hicloud");
            cout << "[云空间]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 52)
        {
            system("adb shell pm uninstall --user 0 com.huawei.himovie");
            cout << "[华为视频]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 53)
        {
            system("adb shell pm uninstall --user 0 com.huawei.hwireader");
            system("adb shell pm uninstall --user 0 com.huawei.hwreader.al");
            system("adb shell pm uninstall --user 0 com.huawei.hnreader");
            system("adb shell pm uninstall --user 0 com.huawei.hwread.al");
            system("adb shell pm uninstall --user 0 com.huawei.hwireader");
            cout << "[阅读]卸载完成!" << endl;
            system("pause");
        }
        else if (num_1 == 54)
        {
            system("adb shell pm uninstall --user 0 com.huawei.android.karaoke");
            cout << "[K歌特效]卸载完成!" << endl;
            system("pause");
        }
        if (num_1 == 20221027)
        {
            return 0;
        }
    }
}