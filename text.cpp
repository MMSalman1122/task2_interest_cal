#include <iostream>
using namespace std;
float savings_cal(float,float);
int main()
{

    float interest_rate,years,principle_amount,interest=0;


    cout<<"Enter rate of interest: ";
    cin>>interest_rate;
    cout<<"Enter number of years: "<<endl;
    cin>>years;


    for(int i=years;i>0;i--)
    {
        cout << "Enter principle amount: ";
        cin>>principle_amount;
        principle_amount=interest+principle_amount;//updated amount.
        interest=savings_cal(principle_amount,interest_rate);
        cout<<interest<<endl;
    }
    cout<<principle_amount+interest;

    return 0;
}


//this function only returns interst .
float savings_cal(float interest_rate,float principle_amount)
{
    return interest_rate*principle_amount;

}
