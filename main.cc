/*
 * @Author: kongxinglong kongxinglong@uniontech.com
 * @Date: 2022-06-10 09:34:47
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-10 14:18:24
 * @FilePath: /undefined/home/syam/al/std/cpp/1project/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "complie.h"
#include <fstream>

static const int bufferLen = 2048;

//using namespace std;
/** @brief 检测文件拷贝是否成功
 * @param 源文件名称
 * @param 目标文件名称
 * @return 返回拷贝状态
*/
bool copyfile(const string& src,const string& dst){
    //打开原本的文件和目标文件
    ifstream in(src.c_str(),std::ios::in|std::ios::binary);
    //源文件二进制读的方式打开
    ofstream out(dst.c_str(),std::ios::out|std::ios::binary|std::ios::trunc);

    //目标文件二进制写的方式打开
    if(!in|!out)
        return false;

    //判断文件打开是否成功 ,失败返回false
    char temp[bufferLen];
    while(!in.eof()){
        in.read(temp,bufferLen);
        streamsize count = in.gcount();
        out.write(temp,count);
    }
    //从源文件读取数据,写入目标文件
    //读取源文件的EOF判断读写结束

    //关闭源文件和目标文件
    in.close();
    out.close();
    return true;
}

int main() {
    cout<<copyfile("test_master.mp3","test_new.mp3");
    //  7-12
    return 0;
}