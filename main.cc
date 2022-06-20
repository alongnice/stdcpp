/*
 * @Author: kongxinglong kongxinglong@uniontech.com
 * @Date: 2022-06-10 09:34:47
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-10 14:18:24
 * @FilePath: /undefined/home/syam/al/std/cpp/1project/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "complie.h"
//using namespace std;
int main() {
    int a;
    int index=0;
    while(cin>>a){
        cout<<a<<endl;
        index++;
        if(index==5)
            break;;
    }
    cin.ignore(1024,'\n');  //清空缓存区脏数据
    char ch;
    cin>>ch;
    cout<<"last char  "<<ch;
    //  7-9
    return 0;
}