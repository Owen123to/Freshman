#include<bits/stdc++.h>
using namespace std;
class BigNumber{
public:
    string number;
    string operator + (BigNumber &str)
    {
        string n1,dec1,n2,dec2;
        if(number.find('.') != -1){    //�ˬd�O�_���p��
            n1=number.substr(0,number.find('.'));
            dec1 = number.substr(number.find('.')+1, number.length() - 1 - number.find('.'));
        }
        else{
            n1 = number;
            dec1 = "0";
        }
        if(str.number.find('.') != -1){    //�ˬd�O�_���p��
            n2 = str.number.substr(0, str.number.find('.'));
            dec2 = str.number.substr(str.number.find('.') + 1, str.number.length() - 1 - str.number.find('.'));
        }
        else{
            n2 = str.number;
            dec2 = "0";
        }
        if(dec1.length() >= dec2.length()){    //�ɹs
            for (int i = dec2.length(); i < dec1.length(); i++)
                dec2.append("0");
        }
        else{
            for (int i = dec1.length(); i < dec2.length(); i++)
                dec1.append("0");
        }
        //�p��
        reverse(dec1.begin(),dec1.end());   //½��
        reverse(dec2.begin(),dec2.end());
        int carry = 0;    //�i��
        for (int i = 0; i < dec1.length();i++){ //�p��
            if ((carry + dec1[i] - '0' + dec2[i] - '0') > 9){
                dec1[i] = carry + dec1[i] - '0' + dec2[i]  - '0' -10 +'0';
                carry = 1;
            }
            else{
                dec1[i] = carry + dec1[i] + dec2[i] - '0' - '0' + '0';
                carry = 0;
            }
        }
        reverse(dec1.begin(), dec1.end());
        while(dec1[dec1.length()-1] == '0' && dec1.length() != 1)   //�h�s
            dec1.erase(dec1.length() - 1);
        //���
        reverse(n1.begin(), n1.end());  //½��
        reverse(n2.begin(), n2.end());
        if(n1.length() >= n2.length()){     //�ɹs
            for(int i = n2.length(); i < n1.length(); i++)
                n2.append("0");
        }
        else{
            for(int i = n1.length(); i < n2.length(); i++)
                n1.append("0");
        }
        for(int i = 0; i < n1.length(); i++){   //�p��
            if ((carry + n1[i] - '0' + n2[i] - '0') > 9){
                n1[i] = carry + n1[i] + n2[i] - '0' - '0' -10 + '0';
                carry = 1;
            }
            else{
                n1[i] = carry + n1[i] + n2[i] - '0' - '0' + '0';
                carry = 0;
            }
        }
        if(carry == 1)  //�ˬd�̫�i��
            n1.append("1");
        reverse(n1.begin(), n1.end());  //½�^��
        if(dec1 == "0") //�P�_�n���n�[�p���I
            return n1;
        else
            return n1 + "." + dec1;
    }
    string operator - (BigNumber &str)
    {
        if(str.number > number) //�ˬd�j�p
            return "-" + (str - *this);
        string n1,dec1,n2,dec2;
        if (number.find('.') != -1){    //�P�_�O�_���p��
            n1 = number.substr(0, number.find('.'));
            dec1 = number.substr(number.find('.') + 1, number.length() - 1 - number.find('.'));
        }
        else{
            n1 = number;
            dec1 = "0";
        }
        if(str.number.find('.') != -1){
            n2 = str.number.substr(0, str.number.find('.'));
            dec2 = str.number.substr(str.number.find('.') + 1, str.number.length() - 1 - str.number.find('.'));
        }
        else{
            n2 = str.number;
            dec2 = "0";
        }
        //�p��
        if(dec1.length() >= dec2.length()){    //�ɹs
            for(int i = dec2.length(); i < dec1.length(); i++)
             dec2.append("0");
        }
        else{
            for(int i = dec1.length(); i < dec2.length(); i++)
             dec1.append("0");
        }
        reverse(dec1.begin(), dec1.end());  //½��
        reverse(dec2.begin(), dec2.end());
        int carry = 0;
        for(int i = 0; i < dec1.length(); i++){ //�p��
            if ((dec1[i] - '0') - (dec2[i] - '0') - carry < 0){
                dec1[i] = (dec1[i] - '0') - (dec2[i] - '0') - carry + 10 +'0';
                carry = 1;
            }
            else{
                dec1[i] = (dec1[i] - '0') - (dec2[i] - '0') - carry + '0';
                carry = 0;
            }
        }
        reverse(dec1.begin(), dec1.end());  //½�^��
        while(dec1[dec1.length() - 1] == '0' && dec1.length() != 1) //�h�s
            dec1.erase(dec1.length() - 1);
        // integer operator
        reverse(n1.begin(), n1.end());  //½��
        reverse(n2.begin(), n2.end());
        if(n1.length() >= n2.length()){
            for(int i = n2.length(); i < n1.length(); i++)  //�ɹs
                n2.append("0");
        }
        else{
            for(int i = n1.length(); i < n2.length(); i++)
                n1.append("0");
        }
        for(int i = 0; i < n1.length(); i++){
            if ((n1[i] - '0') - (n2[i] - '0') - carry < 0){
                n1[i] = (n1[i] - '0') - (n2[i] - '0') - carry + 10 +'0';
                carry = 1;
            }
            else{
                n1[i] = (n1[i] - '0') - (n2[i] - '0') - carry + '0';
                carry = 0;
            }
        }
        if(carry == 1)  //�t�ƥ[�t��
            n1.append("-");
        reverse(n1.begin(),n1.end());   //½��^��
        if(dec1=="0")
            return n1;
        else
            return n1 + "." + dec1;
    }
};
int main(){
    BigNumber B1,B2;
    cin >> B1.number >> B2.number;
    if (B1.number[0] != '-' && B2.number[0] != '-'){    //�ҥ�
        cout << B1 + B2 << endl;
        cout << B1 - B2 << endl;
    }
    else if (B1.number[0] != '-' && B2.number[0] == '-'){   //+-
        B2.number.erase(0, 1);
        cout << B1 - B2 << endl;
        cout << B1 + B2 << endl;
    }
    else if (B1.number[0] == '-' && B2.number[0] != '-'){   //-+
        B1.number.erase(0, 1);
        cout << "-" << B1 - B2 << endl;
        cout << "-" << B1 + B2 << endl;
    }
    else{
        B1.number.erase(0, 1);                              //--
        B2.number.erase(0, 1);
        cout << "-" << B1 + B2 << endl;
        cout << "-" << B1 - B2 << endl;
    }
    return 0;
}
