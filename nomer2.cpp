#include <iostream>
#include <string>

using namespace std;

string summastrok(string s1, string s2, string s3){
    return s1+s2+s3;
}

int kvadrat(int n){
    return n * n;
}
int kube(int n){
    return n * n * n;
}
int pow(int a, int n){
    if(n==0){
         return 1;
    }
    else{
        int res=1;
        for(int i=0;i<n;i++){
            res+=a;
        }
    }
    return 0;
}

int main()
{
    cout << kube(5);
    cout << endl;
}
