/*
 * @Author: kongxinglong kongxinglong@uniontech.com
 * @Date: 2022-06-10 09:34:47
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-10 14:18:24
 * @FilePath: /undefined/home/syam/al/std/cpp/1project/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "complie.h"
using namespace std;
int main() {
    complie a(3, 4);
    complie b(1, 2);
    complie c;
    c=a+b;
    c.get_all();
    c=c-b;
    c=c-b;
    c.get_all();
    return 0;
}