#include<iostream>
#include<vector>
using namespace std;

int main()
{ 
  vector<int> v;
  v.pushback(34);
  v.pushback(23);
  v.pushback(20);
  v.pushback(24);
  
  cout<<v.at(2)<<endl;             ///safer option
 // cout<<v[4]<<endl;                ///We cannnot access it
 
  
  for (int i=0;i<v.size();i++)
  {
        cout<<v[i]<<endl;
        
        }
        
  return 0;     
 }
        
        
