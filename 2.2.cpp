#include <iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int MAX(float x, float y, float z)
{
        float w;
        if (x < y)
        {
                w = y;
                y = x;
                x = w;
        }
        else
                x = x;
        if (x < z)
        {
                w = z;
                z = x;
                x = w;
        }
        else
                x = x;
        return(x);
}
int main()
{
        float a, b, c;
        float S;
        float phi;
        cout << "�����������ε����߳���" << endl;
        cin >> a >> b >> c;
        MAX(a, b, c);
        if (b + c <= a)
                cout << "���ܹ���������" << endl;
        else
        {
                phi = (a + b + c) / 2.0;
                S = sqrt(phi *(phi - a)*(phi - b)*(phi - c));
        }
        cout << "�����ε����Ϊ" << S << endl;
        system("pause");
}
