//Implementing FIFO page segmentation
#include <stdio.h>
#include <iostream>
//#include <algorithm>
#include <vector>
using namespace std;
//int ar[3];
vector<int> v;
void Print(std::vector<int> v){
	for(std::vector<int>::iterator it = v.begin();it!=v.end();it++){
		cout<<*it<<"\t";
	}
	//cout<<endl;
}
bool see(std::vector<int> v, int num){
	for(std::vector<int>::iterator it = v.begin();it!=v.end();++it){
		if (*it==num) {
			return true;
			break;
		}
	}
	return false;
}
int main(){
	int falut=0,page=0,slen=0;
	cout<<"Size of string: ";
	cin>>slen;
	cout<<"Enter string: ";
	cout<<"Enter the size of page: ";
	cin>>page;
	int s[100];
	for (int i=0;i<slen;i++) cin>>s[i];
//	cout<<"Hello ji\n"<<endl;

	
	for(int i=0;i<slen;i++){
		if (v.size()<page){
			if (!see(v,s[i])){
				v.insert(v.begin(),s[i]);
				Print(v);
				cout<<endl;
			}else
			Print(v);cout<<endl;				
		}else{
			if(!see(v,s[i])){
				//v.push_back(s[i]);
				//v.erase(v.begin());
				v.insert(v.begin(),s[i]);
				v.pop_back();
				Print(v);
				falut++;
				cout<<"FAULT No."<<falut<<"\n";
			}else
			Print(v);cout<<endl;				
		}
	}
	cout<<"Number Of Faluts: "<<falut<<endl;
	return 0;
}
