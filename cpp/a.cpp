#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    int a=1;
    std::vector<int> v = {8, 4, 5, 9};
    std::sort(v.begin(),v.end());
    std::cout<<a<<std::endl;
    return 0;
}