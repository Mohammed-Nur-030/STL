#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> arr){
    cout<<"Printing Array"<<endl;
    for (auto i:arr)
    {
      cout<<i<<" ";
    }cout<<endl;
    
}
void explainVector(){
    vector<int> v;
    v.push_back(1); //1
    v.push_back(2);//1 2
    v.emplace_back(3);//1 2 3

    vector< pair <int,int>> vec;
    vec.push_back({1,2});// {1,2}
    vec.emplace_back(1,2);// {1,2}

    vector <int> vec1(5,100); //5 positions will occupy 100 ie-> 100 100 100 100 100
    vector <int> vec2(5); //5 positions of vector
    /**************************************
        * After declaring size of vector ,,you can modify it
    **************************************/


    vector <int> v1(5,20); //5 positions will occupy 100 ie-> 100 100 100 100 100
    vector <int> v2(v1); //v2 is copy of v1

    /**************************************
            // Iterators
    **************************************/

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        //  v1.begin()--is address not value
       cout<<(*it)<<" ";
    }cout<<endl;
    
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
       cout<<(*it)<<" ";
    }cout<<endl;

    for (auto it:v1)
    {
       cout<<(it)<<" ";
    }cout<<endl;
    

    vector <int> arr={10,20,30,40};

    printVector(arr);// {10,20,30,40}
    // v.erase(arr.begin()+1);
    printVector(arr);//{10,30,40}

    /**************************************
        *Insertion
    **************************************/
   vector<int> vect(2,100);//{100 100}
   vect.insert(v.begin(),300);// {300 100 100}
   vect.insert(v.begin()+1,2,10);// {300 10 10 100 100}
   vect.size();//5
   vect.pop_back();//{300 10 10 100}


    return ;
}
int main(){
    explainVector();


return 0;
}