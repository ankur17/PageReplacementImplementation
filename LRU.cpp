#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;
std::vector<int> st;
void add(int num){
	bool yes = false;
	int ind = -99;
	for (int i = 0; i < st.size(); ++i)	
		if(st[i]==num){
			yes = true; ind = i; break;
		}
	if (yes)
		st.erase(st.begin()+ind);
	st.push_back(num);
	
}
int main(){
	int s[10] = {2, 3, 4, 2, 1, 3, 7, 5, 4, 3};
	//stack<int> st;
	vector<int> v;

//	v.push_back(12);
//	v.push_back(22);
//	v.push_back(52);
//	v.push_back(74);
//	v.push_back(89);

	if (find(v.begin(), v.end(), 22)!=v.end()){
		//cout<<"YP";
	}
	for (int i=0;i<10;i++){
		add(s[i]);
		if (v.size()<3){
			if(find(v.begin(), v.end(), s[i])!=v.end()){
				continue;
			}else{
				v.push_back(s[i]);				
			}
		}
		else{
			if(find(v.begin(), v.end(), s[i])!=v.end()){
				continue;
			}else{
				int tm = st[0];
				st.erase(st.begin());
				for(int b=0;b<v.size();b++){
					if (v[b]==tm){
						v[b]=s[i];
						break;
					}
				}
			}
		}
	cout<<"\n";
	for (int y=0; y<v.size();y++){
		cout<<v[y]<<" ";
	}
	}

	cout<<"\nHello kk\n";
	for (int y=0; y<st.size();y++){
		cout<<st[y]<<" ";
	}
	return 0;
}