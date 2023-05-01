#include<iostream>

using namespace std;

class arithmetic{
	
	public :
		
		int m = 20;
		int p = 10;
		
		
};
class child : public arithmetic{
	
	public :
		
		void calculate(int x , int y){
			
			cout<<m-p<<endl;
		}
		
			void calculate(int x , int y , int z){
			
			cout<<m/p<<endl;
		}
		
			void calculate(int x , int y , int z , int a){
			
			cout<<m*p<<endl;
		}
		
			void calculate(int x , int y , int z , int a , int b){
			
			cout<<m+p<<endl;
		}
};

int main(){
	
	child obj;
	
	obj.calculate(1,2);
	obj.calculate(1,2,3);
	obj.calculate(1,2,3,4);
	obj.calculate(1,2,3,4,5);
	
	return 0;
	
	
}
