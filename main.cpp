# include <iostream>
using namespace std;

void textcolor(int color);
  struct payroll
  {
    string name;
    float rate_per_day, ss, healthcare;
    int total_days_work;
  };

float compute_gross(float rate_per_day, float days_worked)
  {
    return(rate_per_day * days_worked);
  };
float compute_net(float rate_per_day, float days_worked, float ss, float healthcare)
  {
    float gross_pay = 0.0, deductions = 0.0, net_income = 0.0;
    gross_pay = rate_per_day * days_worked;
    deductions = ss + healthcare;
    net_income = gross_pay + deductions;
    return (net_income);
  }

float compute_deductions(float ss,float healthcare)
  {
    return(ss + healthcare);
  }

int main() 
  {
    payroll employee;
    cout<<"\t PAYROLL SYSTEM\n\n";
    cout<<" Enter Employee Name     :";
    getline(cin,employee.name);

    cout<<" Enter Employees Rate per Day   :";
    cin>>employee.rate_per_day;
    cout<<" Enter Number of Days Worked   :";
    cin>>employee.total_days_work;
    cout<<"\n\n === DEDUCTIONS === ";
    cout<<"\n\n\n SS Contribution    :";
    cin>>employee.ss;
    cout<<" Healthcare Contribution   :";
    cin>>employee.healthcare;

    //cout<<"\n\n"<< fixed << setprecision(2);
    cout<<" Total Deductions => Php"
        << compute_deductions(employee.ss, employee.healthcare);
    cout<<"\n Monthly Gross Income    : Php "
        << compute_gross(employee.rate_per_day, employee.total_days_work);
    return 0;
  }