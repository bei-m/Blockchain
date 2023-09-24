#ifndef HASH_H
#define HASH_H

#include "mylib.h"

string hash (wstring tekstas)
{
    unsigned long int temp=0, temp_2;
    string t, final, hex="0123456789abcdef";
    unsigned long int sk=0;

    for (int i=0; i<tekstas.length(); i++) 
    {
        temp=temp*29+static_cast<int>(tekstas.at(i))*31;
        sk++;
    }
    temp=temp*(sk+2)+3;
    temp_2=temp;
    
    for (int i=0; i<64; i++) 
    {
        temp+=temp*i*17/10;
        t=t+hex[temp%16];
    };
    swap(t[0], t[34]);

    if (temp_2%4==0)
    { for (int i=0; i<32; i++) {final=final+t[i]+t[63-i];} }
    else if (temp_2%5==0) 
    {for (int i=1; i<64; i=i+2) {final=final+t[i]+t[i-1];} }
    else
    {for (int i=63; i>=0; i--) {final=final+t[i];} }

    return final;
};

#endif