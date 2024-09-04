#include<bits/stdc++.h>
using namespace std;
int main(){

	// pairing integer and integer
	pair<int,int>p={1,2};
	cout<<p.first<<" "<<p.second;    //->1 2
	cout<<endl;

	// pairing char and integer
	pair<int,char>p1={1,'a'};
	cout<<p1.first<<" "<<p1.second;  //->1 a
	cout<<endl;

	// pairing char and string
	pair<char,string>p2={'a',"hi"};
	cout<<p2.first<<" "<<p2.second;  // ->a hi
	cout<<endl;

	//pairing can be done for string and string
	//                        char and char
	//                        string and int

	// pairing int and pair
	pair<int,pair<int,int>>p3={1,{2,3}};
	cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second;  //->1 2 3
	cout<<endl;

	// pairing in array
	pair<int,int>arr[]={{1,3},{4,5}};
	cout<<arr[0].first<<" "<<arr[0].second;     //->1 3
	cout<<endl;
     
     //pairing string and string in array
	pair<string,string>srr[]={{"cat","animal"},{"dog","animal"}};  //-> cat animal
	cout<<srr[0].first<<" "<<srr[0].second;

	//pairing can be done in char and char

}