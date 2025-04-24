
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int a , b ,c , k;

        cin>>a>>b>>c>>k;

        int sum = a + b + c;

        int tempMin = min(a, b);
        int extactMin = min(tempMin , c);

      //  cout<<extactMin<<endl;

        int xSum = (a - extactMin) + ( b - extactMin) +  (c - extactMin);
        //cout<<xSum<<endl;
        bool flag = false;

        if(xSum % k == 0) {
            flag = true;
        }



        if (sum % 3 == 0 && flag) {
           cout<< "Case "<<i<<": Peaceful"<<endl;
        }else{
           cout<< "Case "<<i<<": Fight"<<endl;
        }
    }

}
