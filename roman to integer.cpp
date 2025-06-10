//convert roman to integer

#include<iostream>
using namespace std;
#include<map>
int main()
{

    map<int,string>up;
    up.insert({102,"vishal"});
     up.insert({105,"ram"});
      up.insert({107,"pawan"});
      for(auto p:up){
        cout<<p.first<<","<<p.second<<"\n";
      }
}
