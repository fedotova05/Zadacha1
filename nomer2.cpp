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

int main()
{
    cout << kube(5);
    cout << endl;
}
