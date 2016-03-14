//Inplementation of LRU
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
	int segment_size,page_size,fault=0;
	//int s[100] = {2, 3, 4, 2, 1, 3, 7, 5, 4, 3};
	cout<<"Enter the size of segment: ";
	cin>>segment_size;
	int s[segment_size];
	cout<<"Enter the segment elements: ";
	for(int u =0;u<segment_size;u++)
		cin>>	s[u];
	cin>>page_size;
	vector<int> v;

	for (int i=0;i<segment_size;i++){
		for (int y=0; y<v.size();y++){
			cout<<v[y]<<" ";
		}
		cout<<"\n";
		add(s[i]);
		if (v.size()<page_size){
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
				fault++;
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
	}
	for (int y=0; y<v.size();y++){
		cout<<v[y]<<" ";
	}
	cout<<"\nTotal No. of Foaults: "<<fault<<endl;


	return 0;
}