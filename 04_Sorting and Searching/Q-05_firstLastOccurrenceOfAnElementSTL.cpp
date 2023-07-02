#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v{1,2,3,4,4,4,4,5,6,7};
   int target = 4;

   vector<int>::iterator low,up;
   low = lower_bound(v.begin(), v.end(), 4);
   up = upper_bound(v.begin(), v.end(), 4);

  
   cout<<"First Occurrence of 4 at position "<<(low - v.begin())<<endl;
   cout<<"Last Occurrence of 4 at position "<<(up - v.begin())<<endl;

}