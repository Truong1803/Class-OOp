#include<iostream>
#include<algorithm>
using namespace std;

template<typename T>
class Vector {
	private:
		int*elem;
		int*elem1;
		int sz;
	public:
		Vector(initializer_list<int>lst) 
		{	
			elem = new int[lst.size()];
			sz = lst.size();
			copy(lst.begin(),lst.end(),elem);
		}
		int & operator[](int i)
		{ 
			return elem[i]; 
		} 
		int* begin(){
			return &elem[0];
		}
		int* end(){
			return begin()+sz;
		}
		int size(){
			return sz; 
		}
		void push_back(const T& n){
			elem[sz]=n;
			sz++;
			elem1 = new T[sz];
			copy(elem,elem+sz,elem1);
			copy(elem1,elem1+sz,elem);
			delete [] elem1;
		}
		void pop_back(){
			sz--;
		}
		void erase(int i){
			for(int j=i-1;j<sz-1;j++){
				elem[j]=elem[j+1];
			}
			sz--;
		}
		void resize(int n){
			for(int i=sz;i<n;i++){
				elem[i]=0;
			}
			sz=n;
			elem1 = new T[sz];
			copy(elem,elem+sz,elem1);
			copy(elem1,elem1+sz,elem);
			delete [] elem1;	
		}
		~Vector() {
			 delete [] elem; 
		}
	
}; 
int main(int argc, char const *argv[])
{
	Vector <int> s={2,1,7,4};
	s.push_back(6);
	s.push_back(7);
	s.push_back(9);
	s.erase(2);
	for(auto&i :s)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}

