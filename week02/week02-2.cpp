///要使用「命名空間」

#include <iostream>
#include <string>
using namespace std; ///使用std「命名空間」

int main(){
    cout <<"請問你叫什麼名字啊?";
    string name;
    cin >> name;
    cout << name <<"你好，今天教字串哦！";
}
