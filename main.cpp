#include <iostream>
using namespace std;

int erasesubstring(string s,string t, string u,string v){

    int i1 = s.find(t);
    string s1,s2,s3;
    if(i1==-1){
        return s.length();
    }
    else{
        s1=s.erase(i1,t.length());
    }
    int i2 = s1.find(u);
    if(i2==-1){
        return s1.length();
    }
    else{
        s2 = s1.erase(i2,u.length());
    }
    int i3 = s2.find(v);
    if(i3==-1){
        return s2.length();
    }
    else{
        s3 = s2.erase(i3,v.length());
        s =s3;
        return erasesubstring(s,t,u,v);
    }

}

int main() {

  string s,t,u,v;
  int result;
  cout<<"Enter a stirng"<<endl;
  cin>>s;
  cout<<"Enter another String"<<endl;
  cin>>t;
    cout<<"Enter another String"<<endl;
    cin>>u;
    cout<<"Enter another String"<<endl;
    cin>>v;
    result = erasesubstring(s,t,u,v);
    cout<<result;

    return 0;
}
