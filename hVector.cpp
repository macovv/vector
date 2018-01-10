#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

/*
void showVect(const std::vector<T>&vect){
	typename std::vector<T>::const_iterator pr;
	for(pr=vect.begin();pr!=vect.end();pr++) 
		std::cout << *pr << std::endl;	
}
*/

template<typename T>
void showVect2(const T & x){
	std::cout << x << " " << std::endl;
}

template<typename T>
bool comparator(const T & obj1, const T & obj2){
	if(obj1>obj2)
		return true;
	else
		return false;
}

template<typename T>
void printVect(const std::vector<T> & vect){
       for_each(vect.begin(),vect.end(), showVect2<T>);	

       std::cout << std::endl;
}

int main(){
	std::vector<int> vect;
	std::vector<int> vect3;

	 for(int i=0; i<10; i++){
		vect.push_back(i+11);
		vect3.push_back(i);
	}
	std::vector<int> vect2(vect.size());
	
	printVect(vect);
	printVect(vect3);
	vect.erase(vect.begin()+7, vect.end());
	printVect(vect);

	sort(vect.begin(), vect.end(), comparator<int>);
	printVect(vect);
	
	copy(vect.rbegin(), vect.rend(), vect2.begin());
	printVect(vect2);	
	
	copy(vect.begin(), vect.begin()+5, std::insert_iterator<std::vector<int>>(vect3,vect3.begin()));

	printVect(vect3);
	return 0;
}	

