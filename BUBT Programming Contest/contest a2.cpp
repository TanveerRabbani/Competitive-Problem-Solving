
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int a , b ,c ;
        cin>>a>>b>>c;
        int sum = a + b + c;
        if (sum % 3 == 0) {
           cout<< "Case "<<i<<": Peaceful"<<endl;
        }else{
           cout<< "Case "<<i<<": Fight"<<endl;
        }
    }

}
