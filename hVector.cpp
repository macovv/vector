#include <iostream>
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
	for(int i=0;i<10;i++)
		vect.push_back(i+11);
	printVect(vect);
	vect.erase(vect.begin()+7, vect.end());
	printVect(vect);
	sort(vect.begin(),vect.end(),comparator<int>);
	printVect(vect);
	return 0;
}	
