#include<stdio.h>
#include <iostream>
using namespace std;
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}
int sub(int a, int b)
{
    return a-b;
}
int add(int a, int b)
{
    return a+b;
}
int main()
{   // I separate the (+-*/) and number
    //1. mul & div from back to count number
    //2. add & sub from start to count number
    char s, operation[100], temp[100];//operation for(+*-/) , temp same
    int n, num1, i = 0, number[100], j = 1, temp1[100];//temp1 same as number
    cin >> num1;
    number[0] = num1;
    while( cin >> s >> n )//ex: + 1
    {
        operation[i] = s;
        number[j] = n;
        i++;
        j++;
    }
    int nop = i, nnum = j;//save how many numbers of (+/*-) and number
    // solve for mul & div
    int tem_index = 0, tem1_index = 0, k = 0, check = 0;
    //check is for the first time I don't want to start to check out what if * /
    for(i = 0; i < nnum; i ++)
    {
        temp1[tem1_index] = number[i];//push a number
        if(check > 0)
        {
            if(temp[tem_index - 1] == '*')
            {
                temp1[tem1_index - 1] = mul(temp1[tem1_index - 1], temp1[tem1_index]);
                tem1_index = tem1_index - 1;//renew the index
                tem_index = tem_index - 1;
            }
            else if(temp[tem_index - 1] == '/')
            {
                temp1[tem1_index - 1] = div(temp1[tem1_index - 1], temp1[tem1_index]);
                tem1_index = tem1_index - 1;
                tem_index = tem_index - 1;
            }
        }
        temp[tem_index] = operation[k];
        k++;
        check++;
        tem1_index++;
        tem_index++;

    }
    // solve for add & sub
    tem1_index = 0;
    for(i = 0; i < tem_index; i ++)
    {
        if(temp[i] == '+')
        {
            temp1[0] = add(temp1[0], temp1[tem1_index + 1]);
            tem1_index = tem1_index + 1;
        }
        else if(temp[i] == '-')
        {
            temp1[0] = sub(temp1[0], temp1[tem1_index + 1]);
            tem1_index = tem1_index + 1;
        }
    }
    printf("%d ", temp1[0]);
}
