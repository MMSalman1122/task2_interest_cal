#include <iostream>
using namespace std;
float savings_cal(float,float);
int main()
{

    float interest_rate,years,savings,principle_amount,interest=0;


    cout<<"Enter rate of interest: ";
    cin>>interest_rate;
    cout<<"Enter number of years: ";
    cin>>years;


    for(int i=years;i>0;i--)
    {
        cout << "Enter principle amount: ";
        cin>>principle_amount;
        savings=savings+principle_amount;
        principle_amount=principle_amount+interest;//updated amount.
        interest=interest+savings_cal(principle_amount,interest_rate);
        cout<<"Total interest:"<<interest<<endl;
    }
    cout<<"Total amount after n years:"<<savings+interest;

    return 0;
}


//this function only returns interst .
float savings_cal(float interest_rate,float principle_amount)
{
    return interest_rate*principle_amount;

}
