/*
 * @Author: kongxinglong kongxinglong@uniontech.com
 * @Date: 2022-06-10 09:35:20
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-06-10 14:16:38
 * @FilePath: /1project/complie.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

class complie
{
 private:
    int real;
    int imag;
    /* data */
 public:
   complie(/* args */);
   complie(double r, double i);
   ~complie();

   double get_real();
   double get_imag();
   void set_real(double r);
   void set_imag(double i);
   void get_all();
   complie operator+(const complie& t) const; 
   complie operator-(const complie& t) const; 
   complie& operator=(const complie& t) ; 

   complie& operator++();
   complie operator++(int);

};
