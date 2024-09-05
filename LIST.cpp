#include<bits/stdc++.h>
using namespace std;
int main(){

	// list use double linkedlist in back end

// creating a list
	list<int>lst={10,20,30};
	for(auto i:lst){
		cout<<i<<" ";              //->10 20 30
	}
	cout<<endl;

// there is no direct indexed based loop
	for(auto i=lst.begin();i!=lst.end();i++){
		cout<<*i<<" ";                     //->10 20 30
	}
	cout<<endl;

	//to push
	lst.push_back(40);
	lst.emplace_back(50);
	lst.push_front(9);
	lst.emplace_front(5);

	for(auto i :lst){
		cout<<i<<" ";                 //->5 9 10 20 30 40 50 
	}
	cout<<endl;

	lst.pop_back();
	for(auto i :lst){
		cout<<i<<" ";                //->5 9 10 20 30 40 
	}
	cout<<endl;

// to get the size of the list
	cout<<lst.size();                     //->6
	cout<<endl;

	lst.insert(lst.begin(),1);
		for(auto i :lst){                //-> 1 5 9 10 20 30 40 
		cout<<i<<" ";
	}
	cout<<endl;

// swap function
  list<int>lst1={1,2};
  list<int>lst2={3,4};
  lst1.swap(lst2);
  for(auto i :lst1){
		cout<<i<<" ";         //-> after swapping 3 4
	}
	cout<<endl;
	for(auto i :lst2){      //-> after swapping 1 2
		cout<<i<<" ";
	}
	cout<<endl;

	//sorting
	list<int>lst4={5,3,66,54,6};
	for(auto i :lst4){
		cout<<i<<" ";        // before sorting 5 3 66 54 6
	}
	cout<<endl;
	 lst4.sort();
	 for(auto i :lst4){
	 	cout<<i<<" ";          // after sorting 3 5 6 54 66 
	 }
	 cout<<endl;

	 //sorting in descending order
	 lst4.sort(greater<int>());
	 for(auto i :lst4){
	 	cout<<i<<" ";           //descending order  66 54 6 5 3 
	 }
	 cout<<endl;
     
     list<int>lst5;
	 cout<<lst5.empty();
	
}