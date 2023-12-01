/*	#include<iostream>
		using namespace std;
		int main(){
		
			cout<< "                            " << "WELCOME TO RAJASTHAN VIDHUT VITRAN NIGAM LIMITED , JAIPUR (302022)" << "  "<<endl;
			cout<<  "                "   <<endl;
			cout<<  " Date  :               "   << "                                                                   " << "   Consumption Unit: "<<endl;
			cout<<  "                       " <<  "                   TOLL FREE NUMBER : 18001806507   " <<endl;
			cout<<   "                                                                                                               " <<endl;
			cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
			cout<<   "                                                                                                               " << endl;
			cout<<   "           "   << " User Name     : Roopchand Jain                "      <<endl;
			cout<<   "           "   << " Father's Name : Late.BhurjiMal Jain           "      <<endl;
			cout<<   "           "   << " Address       : 505,Jain Bhawan Police line Road ,Near Ashoka Talkiz circle                "      <<endl;
			cout<<   "           "   << "                    " <<"   Alwar Rajasthan , 301001   "     <<endl;
			cout<<   "                                                                           "    <<endl;
			cout<<   "           "   << " Bill Reg.No.  : 2593xfJP9986                  "      <<endl;
			cout<<   "           "   << " Helpline No.  : 0144-273747                   "      <<endl;
			cout<<   "           "   << " Online Pay    : www.rajasthanelectricity.com                "      <<endl;
			cout<< "                                                                                                      "<<endl;
			int unit;
			cout<<" Enter Consumpted Unit : " <<endl;
			cin>>unit;
			if(unit<=100){
			cout <<"                                     "                            <<          " TOTAL AMOUNT($) : Rs. 0.00 "   <<endl;
			cout<<"                                                                                                         "<<endl;
			}
			if(unit>100 && unit<=200){
				cout<<"                                  "                             <<         " TOTAL AMOUNT($) : Rs." <<  (unit-100)*6 <<endl;
			}
			if(unit>200){
				cout<<"                                  "                             <<         " TOTAL AMOUNT($) : Rs." <<  (unit-100)*6+(unit-200)*7<<endl;  
			}
			else{
				cout<<"Jaldoi bhar niklo"<<endl;
			}
			
			
			cout<< " Last pay date                  :   29th October 2023 " <<endl;
			cout<< " Penalty (After Pay )           :    1 % of Total Amount " <<endl;
	
			return 0;
		}*/
		
		//             C++ INTERVIEW QUESTIONS (BASICS + ADV.)  BY GEEKS FOR GEEKS 
		
		// Que.1>       to check weathera number is positive or not 
		
	/*	#include<iostream>
		using namespace std;
		int main(){
			int n;
			cout<<"Enter a Number :"<<endl;
			cin>>n;
			if(n>0 || n==0){
				cout<<" Number is Positive" <<endl;
			}
			else{
				cout<<"Number is negative" <<endl;
			}
			return 0;
		}   */ 
		
		// Que.2>  Greatest Of three Numbers 
	/*	#include<iostream>
		using namespace std;
		int main(){
			int n1,n2,n3;
			cout<<" Enter the Numbers;"<<endl;
			cin>>n1>>n2>>n3;
		if(n1>n2 && n1>n3) {
			cout<<"Number 1 is greater " <<endl;
		}
		if(n2>n1 && n2>n3){
			cout<<" Number 2 is greater " <<endl;
		}
		
	if(n3>n1 && n3>n2){
			cout<<" Number 3 is greater" <<endl;
		}
			
			return 0;
		}	*/
		
		// Que.3>  Number is Is Even/ odd or IS prime or Is not prime 
		
		/*#include<iostream>
		using namespace std;
		int main(){
			int n;
			cout<<"Enter Number: " <<endl;
			cin>>n;
			if(n%2==0){
				cout<<" Even" <<endl;
			}
			else{
				cout<<"Odd" <<endl;
			}
			
			
			return 0;
		}*/ 
		                    // Number is PRIME/NOT PRIME...
		                /*    #include<iostream>
		                    using namespace std;
		                    int main(){
		                    	
		                    	
		                    	return 0;
							}*/
		                    
		
		
		
		
		
		
		
		
		
		
		
		    // Q4 > ASCII value of a character..
		        /*#include<iostream>
		        using namespace std;
		        int main(){
		        char ch;
		        	cout<<" Enter any Character" <<endl;
		        	cin>>ch;
		        	cout<<"  ASCII value of" << ch << "is" << int(ch) <<endl; 
		        	return 0;
				}*/
	
	// Q5 >  IMp. Program to find a year is leap or not...
	
	         /*    #include<iostream>
	             using namespace std;
	             int main(){
	             	int year;
	             	cout<<"Enter Year" <<endl;
	             	cin>>year;
	             	if(year%4 ==0){
	             		cout<<" Leap Year" <<endl;
					 }
	             	else{
	             		cout<<"Ordinary Year"<<endl;
					 }
	             	return 0;
				 }*/
// 	Q6. >               SUM OF FIRST 'N' NATURAL NUMBERS  WITHOUT LOOP 

        /*        #include<iostream>
                   using namespace std;
                   int main(){
                   	int n;
                   	cout<<" Enter first n  Numbers:" <<endl;
                   	cin>>n;
                   	int sum = n*(n+1)/2;
                   	cout<<" The sum is " << sum <<endl;
                   	return 0;
				   }*/
				   
	// Q6.>   Factorial of a number with loop and  Recursion 
	
	/*#include<iostream>
	using namespace std;
	int main(){
		int n;
			int fact = 1;
			int i=1;
		cout<<"Enter number:" <<endl;
		cin>>n; 
		while(i<=n){
			fact = fact*i;
			i++;
					}
					cout<<fact<<endl;
	
		return 0;
	}*/ 
	/*     FCATORIAL USING RECURSION  
       
	
	
	*/	
	  //    Q7 > Roots of a Quadritic equation 
	               /*     #include<iostream>
	                    #include<cmath>
	                    using namespace std;
	                    int main(){
	                    	int a,b,c,D,E;
	                    	cout<<"Enter A " <<endl;
	                    	cin>>a;
	                    	if(a==0){
	                    		cout<<" Undefined " <<endl;
							}
	                    	cout<<"Enter B:" <<endl;
	                    	cin>>b;
	                    	cout<<"Enter C:" <<endl;
	                    	cin>>c;
	                    	D = pow(b,2) - 4*a*c;
	                    	E = 2*a;
	                    	float result1 =(-b + sqrt(D))/E;
	                    	float result2 =(-b - sqrt(D))/E;
	                    	cout<<" x1 is :" <<result1 <<endl;
	                    	cout<<" x2 is :" <<result2 <<endl;
	                    	
	                    	return 0;
						}*/
						
		
	  //	Q8>   Create  a  page for Election 2023 through c++ programming
#include <iostream>
using namespace std;
struct Voters
{
    string name;
    string address;
    char DOB[20];
    long aadhar;
    int age;
};
int main()
{
    int age;
    cout << "                                                                                 " << endl;
    cout << "                               "
         << " ELECTION COMMISION OF INDIA , DELHI"
         << "               " << endl;
    cout << "           "
         << "       "
         << "Voters are Heartily Welcome in the Grand Election of 2023"
         << "      " << endl;

    cout << " Date: 25th November"
         << "                                                "
         << "  "
         << " Select Party: Lotus/Hand" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Home"
         << "       "
         << "Contact Us"
         << "      "
         << " About"
         << "      "
         << "  New User? Registered yourself"
         << "      "
         << "Information" << endl;
    Voters v;
    cout << "                                                                          " << endl;
    cout << " Voters Registered for 2023 is Here:" << endl;
    cout << "Enter Your Full Name:"
         << "                   " << endl;
    getline(cin, v.name);
    cout << "Enter Your Detailed Address" << endl;
    getline(cin, v.address);
    cout << "Enter DOB" << endl;
    cin >> v.DOB;
    cout<<"Verified Aadhar Number:"<<endl;
    cin>>v.aadhar;
 cout<<"                                                                       "<<endl;
    cout<<" |Your Registration Slip is Here";
    cout<<"                                                                              "<<endl;
    cout<<" |Name          :   "<<    v.name        <<endl;
    cout<<" |Address       :   "<<    v.address     <<endl;
    cout<<" |DOB           :   "<<    v.DOB         <<endl;
    cout<<" |Aadhar Number :   "<<    v.aadhar    <<endl;

    cout<<"                                                                "<<endl;

    cout << "Enter age:" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "Eligible for Vote" << endl;
    }
    else
    {
        cout << "Not Eligible for Vote:" << endl;
        cout<<"Note:"<<"UnEligible Candidates (who are just to be 18) Make their Voter Id card on or Before 10th November 2023"<<endl;
}
    cout<<"                                                           "<<endl;


    return 0;
}

  

    		   
		
		
		
		
		
		
		
		
		
		
