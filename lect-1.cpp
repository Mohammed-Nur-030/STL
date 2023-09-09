#include<bits/stdc++.h>
using namespace std;


//pairs
void explianPairs(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second; 
    cout<<endl;

    pair<int, pair<int,int>> pt={1,{2,4}};
    cout<<pt.first<<" "<<pt.second.first<<" "<<pt.second.second; 
    cout<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second;
        cout<<endl;
    }
    

    return;
}
int main(){
    explianPairs();

  


 return 0;
}