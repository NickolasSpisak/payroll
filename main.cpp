# include <iostream>
using namespace std;

void textcolor(int color);
  struct payroll
  {
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
  }
int main() {

  return 0;
}