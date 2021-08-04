#include <bits/stdc++.h>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size_of_vector;
    int num_of_rotations;
    int input;
    cin>>size_of_vector>>num_of_rotations;
    vector<int>v1;
    for(int i=0;i<size_of_vector;++i){
        cin>>input;
        v1.push_back(input);
    }
    /*pushes back the first element in vector and
    deletes the first element(which was added to back)         which creates a shift
    */
    for(int i=0;i<num_of_rotations;++i){
        int temp=v1.at(0);
        v1.push_back(temp);
        v1.erase(v1.begin());
    } 
    for(int i=0;i<size_of_vector;++i){
        std::cout<<v1.at(i)<<" ";
    }
     return 0;
}

//try with c++ language
