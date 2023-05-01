#include<iostream>

using namespace std;

class Cricket{
   
   public : 
        
           void match1(){
           	
           	cout<<"how much over cricket matches have in T20Match :"<<endl;
		   }
		   
		   void match2(){
		   	
		   	cout<<"how much over cricket matches have in TestMatch :"<<endl;
		   	
		   }	
};
class T20Match : public Cricket{

   public :
   	
   	void getTotalOvers(){
   		
   		cout<<"in T20Match total over is 40 and each team play 20 overs"<<endl;
	   }	
};
class TestMatch : public Cricket{
	
	 public :
   	
   	void getTotalOvers(){
   		
   		cout<<"in TestMatch total over is 90 in one day"<<endl;
	   }	
};


int main(){
	T20Match obj;
	TestMatch obj1;
	
	obj.match1();
	obj.getTotalOvers();
	
	obj1.match2();
	obj1.getTotalOvers();
	
	return 0;
}
