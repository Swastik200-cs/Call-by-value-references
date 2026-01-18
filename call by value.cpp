#include<iostream>
using namespace std;
void changevalue(int num) {
    num=num+110;
    cout<<num<<endl;
}
int main(){
    int name=100;
    cout<<name<<endl;
    changevalue(name);
}
