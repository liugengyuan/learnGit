//
//  main.cpp
//  LearnGitDemo
//
//  Created by 刘庚源 on 2020/3/5.
//  Copyright © 2020 刘庚源. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class A{
public:
    A(){};
    void fun(){
        cout<<"fuck u"<<endl;
    }
};

class LazySingleton{
private:
    LazySingleton(){}
private:
    static LazySingleton* _LazySingleton;

    std::vector<A> _myArr;
public:
    static LazySingleton* GetIntance()
    {
        if (_LazySingleton == NULL) {
            _LazySingleton = new LazySingleton();
        }
         return _LazySingleton;
    }
    std::vector<A>& GetVector()
    {
        return _myArr;
    }
};
LazySingleton* LazySingleton::_LazySingleton = NULL;

int main(int argc, const char * argv[]) {
    
    A a;
    for(int i = 0;i<10;i++)
    {
        LazySingleton::GetIntance()->GetVector().push_back(a);
    }
    
    int size = LazySingleton::GetIntance()->GetVector().size();
    cout<<size<<endl;
    return 0;
}
