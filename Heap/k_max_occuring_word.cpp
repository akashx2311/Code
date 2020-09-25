#include<bits/stdc++.h>
using namespace std;
int main(){
	int k;
	//cin>>n>>k;
	string keys[] = {"code", "coder", "coding", "codable", "codec", "codecs", "coded",
		"codeless", "codec", "codecs", "codependence", "codex", "codify",
		"codependents", "codes", "code", "coder", "codesign", "codec",
		"codeveloper", "codrive", "codec", "codecs", "codiscovered"};
		k=4;
	map<string ,int> m;
	for(auto x:keys)
	  m[x]++;
	priority_queue<pair<int,string>> p;
	for(auto i=m.begin();i!=m.end();i++){
	     p.push({i->second,i->first});
	    
	   }  
	   for(int i=0;i<k;i++){
		      cout<<p.top().first<<" "<<p.top().second<<endl;
		      p.pop();
		  }
		  return 0;
	  }
