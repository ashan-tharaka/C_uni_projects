#include<stdio.h>
#include<math.h>

 int main()
 {
     //9
     int hours,hourly_rate,gross_salary,deduction_rate=8;
     float deduction,Net_salary;

     printf("Enter number of hours:");
     scanf("%d",&hours);
     printf("Enter hourly rate in rupees:");
     scanf("%d",&hourly_rate);
     gross_salary=hourly_rate*hours;
     deduction=gross_salary*deduction_rate/100;
     Net_salary=gross_salary-deduction;
     printf("Net Salary is Rs.%.2f\n",Net_salary);
     //7
     float maths,phy,chem,IT,Eng;
     float total,ave,percen;
     printf("Enter marks of five subjects:\n");
     scanf("%f%f%f%f%f",&maths,&phy,&chem,&IT,&Eng);
     total=maths+phy+chem+IT+Eng;
     ave=total/5;
     percen=(total/500.0)*100;
     printf("Total is %.2f\n",total);
     printf("Average is %.2f\n",ave);
     printf("Percentage is %2.f%\n",percen);



 }

