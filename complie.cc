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
//    cout<<"make complie"<<endl;
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
//    cout<<"make a complie for have info"<<endl;
}
complie::~complie() {
//    cout <<"delete complie" <<endl;
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