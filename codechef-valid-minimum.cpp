 # Valid Minimum - https://www.codechef.com/submit/VALIDMIN


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--){
        cin>>a>>b>>c;
        if(a==b && b==c){
            cout<<"Yes"<<endl;
        }
        else if(a!=b && b!=c && c!=a){
            cout<<"No"<<endl;
        }
        else{
          // cout<<"Here I am"<<endl;
           int v[3];
           int counter=0;
           int maxx = max(a,b);
           maxx = max(maxx,c);
          // cout<<"maxx = "<<maxx<<endl;
           v[0]=maxx-a;
           v[1]=maxx-b;
           v[2]=maxx-c;

          // cout<<"v[0],v[1],v[2] = "<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

           for(int i=0;i<3;i++){
             if(v[i]==0){
                counter++;
             }
           }
          // cout<<"Counter = "<<counter<<endl;
           if(counter>=2){
            cout<<"No"<<endl;
           }else{
            cout<<"Yes"<<endl;
           }
        }
	}

	return 0;
}
