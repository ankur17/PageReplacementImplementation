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
	cout<<endl;
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
	int falut=0,page=0,slen=0,chance=0;
	cout<<"Enter the size of page: ";
	cin>>page;
	cout<<"Size of string: ";
	cin>>slen;
	cout<<"Enter string: ";
	int s[100];
	for (int i=0;i<slen;i++) cin>>s[i];
//	cout<<"Hello ji\n"<<endl;

	
	for(int i=0;i<slen;i++){
		if (v.size()<page){
			if (!see(v,s[i])){
				v.push_back(s[i]);
				falut++;
				cout<<"FAULT No."<<falut<<"\t";
				Print(v);
	//			cout<<endl;
			}else
			Print(v);cout<<endl;				
		}else{
			if(!see(v,s[i])){
				//v.push_back(s[i]);
				//v.erase(v.begin());
				v[chance%page] = s[i];
				chance++;
				falut++;
				cout<<"FAULT No."<<falut<<"\t";
				Print(v);
			}else
			Print(v);cout<<"\t"<<endl;				
		}
	}
	cout<<"Number Of Faults: "<<falut<<endl;
	return 0;
}
