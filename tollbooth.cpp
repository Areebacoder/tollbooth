#include<iostream>
using namespace std;
class tollbooth{
	public:
	unsigned int total;
	double cash;
	tollbooth(){
		total = 0;
		cash = 0;
	}
	void payingCar(){
		total ++;
		cash = cash +0.50;
	}
	void unpayCar(){
		total ++;
	
	}
	void display() const{
		cout<<"Total car pass and total cash"<<endl;
		cout<<" total cars pass : "<< total<<endl;
		cout<<" total cash : "<<cash <<endl;
	}
};
int main (){
	char key;
	tollbooth t;
	cout<<"enter the key "<<endl;
	cout<<" P FOR PAYED CAR"<<endl;
	cout<<" N FOR NONPAY CAR"<<endl;
	cout<<" ESC FOR RESULT "<<endl;
	do{
		cin>>key;
		switch (key)			
    {
    	case 'p':
        case 'P':
          t.payingCar();
            break;
            case 'n':
       	 case 'N':
            t.unpayCar();
            break;
    }
}while(key != 'e' && key != 'E');
 t.display();
}




