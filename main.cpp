#include <iostream>

using namespace std;

int main()
{
    double grade,x;
    cout<< "School Grading System"<<endl;


    for (x=0;x<10;x++)
    {
    cout<< "Enter Student Grade:";
    cin >> grade;
    if ( (grade>=80)&& (grade<=100) )
    {
        cout<<"Grade:A " << "Remark:" << "Outstanding"<< " GPT:"<<"4.0"<<endl;
    }
    else if( (grade>=75)& (grade<=79))
        {
         cout<<"Grade:B+ " << "Remark:" << "Very Good"<< " GPT:"<<"10.5"<<endl;
        }
    else if( (grade>=70)&& (grade<=74))
        {
         cout<<"Grade:B " << "Remark:" << "Good"<< " GPT:"<<"9"<<endl;
        }
    else if( (grade>=65)&& (grade<=69))
        {
        cout<<"Grade:C+ " << "Remark:" << "Fairly Good"<< " GPT:"<<"7.5"<<endl;
        }
    else if( (grade>=60)&& (grade<=64))
        {
        cout<<"Grade:C " << "Remark:" << "Average"<< " GPT:"<<"6"<<endl;
        }
 else if( (grade>=55) && (grade<=59))
        {
        cout<<"Grade:D+ " << "Remark:" << "Below Average"<< " GPT:"<<"4.5"<<endl;
        }
    else if ( (grade>=50)&& (grade<=54))
        {
        cout<<"Grade:D " << "Remark:" << "Marginal"<< " GPT:"<<"3"<<endl;
        }
    else if ( (grade>=45)&& (grade<=49))
       {
        cout<<"Grade:E " << "Remark:" << "Unsatisfactory"<< " GPT:" "1.5"<<endl;
       }
    else if( (grade>=0)&& (grade<=44))
        {
        cout<<"Grade:F " << "Remark:" << "Fail"<< " GPT:" "0.0"<<endl;
        }
    else if ( (grade < 0) || (grade >100))
    {
        cout<<"Student score does not exist!"<<endl;
    }


    }
return 0;
}
