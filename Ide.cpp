#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //declaring a vector
    vector<int>ve;
    ve.push_back(10);
    ve.push_back(20);
    ve.push_back(30);
    ve.emplace_back(40);
    for(auto it: ve)
    {
        cout<<it<<endl;
    }
    //2d-arrays
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    //vector with pair elemts
    vector<pair<int,int>>v;
    v.push_back({4,5});//{{4,5}}
    v.emplace_back(7,8);//{{4,5},{7,8}}
    for(auto x: v)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }
    //vector of size 5
    //every one as 10
    vector<int>vat(5,10);//{10,10,10,10,10}
    vector<int>vt(5);//{0,0,0,0,0}
    vector<int>vet(5,13);
    //copy one vector into another
    vector<int>vet1(vet);//vet1={13,13,13,13,13}
}