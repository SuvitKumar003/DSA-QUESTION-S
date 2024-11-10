#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
  unordered_map<string,int> m;
  m["gfg"]=20;
  m["ide"]=30;
  m["courses"]=15;
  for(auto i=m.begin();i!=m.end();i++)
  {
    cout<<i->first<<" "<<i->second<<endl;
  }
  if(m.find("ide")!=m.end())
  {
    cout<<"Found"<<endl;
  }
  else
  {
    cout<<" Not found"<<endl;
  }
}
