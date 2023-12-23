 #include<iostream>
	      using namespace std;
	      struct car_name{
	      	string carname;
	      	float car_price;
            	int car_age;
		  };
	      int main(){
	    cout<< "----------------------------------------------------" << "CAR INSURANCE SYSTEM" <<"-------------------------------------------"<<endl;
	     car_name cr;
	     cout<<"Enter Car Name:"<<endl;
	     getline(cin,cr.carname);
	     cout<<"Enter Car Purchased Price"<<endl;
	     cin>>cr.car_price;
	     cout<<"Enter Your Car Age:"<<endl;
	     cin>>cr.car_age;

         if(cr.car_age==1){
           
	     	cout<<" Insurance is:" <<"Rs."<< (cr.car_price*(8.5))/100;
		 
         }
         else if (cr.car_age==2)
         {
            cout<<" Insurance is:" <<"Rs."<< (cr.car_price*(7.3))/100;
         }
         else if(cr.car_age==3){
                   cout<<" Insurance is:" <<"Rs."<< (cr.car_price*(6.5))/100;
         }
         else if(cr.car_age==4){
                    cout<<" Insurance is:" << "Rs."<< (cr.car_price*(5.4))/100;
         }
         else if(cr.car_age==5){
                        cout<<" Insurance is:" <<"Rs."<< (cr.car_price*(4.4))/100;
         }
         cout<<"                                                                      "<<endl;
         if(cr.car_age>5){
            cout<<" Note: Your Car age is Greater than 5 years"<<endl;
            cout<<"Insurance:"<<" "<<"Rs 0.00"<<endl;
         }
	     
	     
		  	return 0;
		  }
	 
	
	
	


	 
	 















