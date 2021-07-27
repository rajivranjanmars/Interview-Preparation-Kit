#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
void minimumBribes(vector<int> q)
{
    int b=0;
    bool f=false;
    for(int  i = q.size()-1;i>= 0; i--){
       if (q[i]==i+1)
       continue;
       else if (q[i-1]==i+1){
       swap(q[i],q[i-1]);
       b++;
       }
       else if (q[i-2]==i+1){
           q[i-2]=q[i-1];
           q[i-1]=q[i];
           q[i]=i+1;
           b+=2;
       }
       else{
           f=true;
           break;
       }
    }
    if (f)
        cout << "Too chaotic\n";
    else
    cout<<b<<endl;
}

int main(){
                 
   ios_base::sync_with_stdio(false);
cin.tie(NULL);               
       int t,b;
       cin >> t;
       vector<int>v;
       while(t--){
            cin >> b;
            v.push_back(b);
       }

      minimumBribes(v);

 return 0;
}