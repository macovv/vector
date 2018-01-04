#include <iostream>
#include <vector>

template <typename T>
void showVect(const std::vector<T>&vect){
	typename std::vector<T>::const_iterator pr;
	for(pr=vect.begin();pr!=vect.end();pr++) 
		std::cout << *pr << std::endl;	
}

int main(){
	std::vector<int> vect;
	for(int i=0;i<10;i++)
		vect.push_back(i+1);
	vect.erase(vect.begin()+7, vect.end());
	showVect(vect);
	return 0;
}	

