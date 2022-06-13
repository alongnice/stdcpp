/*
 * @Author: kongxinglong kongxinglong@uniontech.com
 * @Date: 2022-06-10 09:35:09
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-10 14:25:39
 * @FilePath: /1project/complie.cc
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "complie.h"
using namespace std;

complie::complie(/* args */) {
    real=0.0;
    imag=0.0;
    cout<<"make complie"<<endl;
}
/**
 * @brief complie::complie带参数构造函数
 * @param r 实部
 * @param i 虚部
 * @return 无
 */
complie::complie(double r, double i) {
    real=r;
    imag=i;
    cout<<"make a complie for have info"<<endl;
}
complie::~complie() {
    cout <<"delete complie" <<endl;
}


/**
 * @brief 返回对象实部
 * @param 无
 * @return 实部值
 */
double complie::get_real() {
    return real;
}
/**
 * @brief 返回对象虚部
 * @param 无
 * @return 虚部值
 */
double complie::get_imag() {
    return imag;
}

/// @brief 设置实部
/// @param r 实部
/// @return 无
void complie::set_real(double r) {
    real = r;
}
/** @brief 设置虚部
 * @param i 虚部
 * @return 无
 */
void complie::set_imag(double i) {
    imag = i;
}
/** @brief 返回对象实部和虚部
 * @param 无
 * @return 实部和虚部
 */
void complie::get_all() {
    cout <<"real:" <<real <<" imag:" <<imag <<endl;
}

/** @brief 重载了复数对象的+号
 *  @param 传入第二个对象
 *  @return 传回复数对象存储结论
*/
complie complie::operator+(const complie &t) const{
    return  complie(this->real + t.real, this->imag + t.imag);
}


/** @brief 重载了复数对象的-号
 *  @param 传入第二个对象
 *  @return 传回复数对象存储结论
*/
complie complie::operator-(const complie &t) const{
    return  complie(this->real - t.real, this->imag - t.imag);
}

/** @brief 重载了复数对象的=号
 * @param 传入第二个对象
 * @return 传回复数对象存储
*/
complie& complie::operator=(const complie &t) {
    if(this!= &t){   //如地址重合直接返回,取地址,const,引用关键知识点
    this->real=t.real;
    this->imag=t.imag;
    }
    return *this;
}

/** @brief 对复数对象的++i符号 进行运算符重载
 *  @param 无输入参数
 *  @return 返回对象this指针的引用
*/
complie& complie::operator++(){   //前置++
    real++;
    imag++;
    return *this;
}

/** @brief 对附属对象i++ 符号  进行运算符重载
 *  @param  (int)用来区分后置,无传入参数
 *  @return 返回对象指针的引用
*/
complie complie::operator++(int){  //后置++
    complie tmp(*this);
    real++;
    imag++;
    return tmp;
}
