//c program that requests the user to enter the hours worked in a week and the hourly wage
/*Aurthor :Immanuel Bett
Reg No :CT101/G/22504/24
*/
#include <stdio.h>
int main(){
	float hoursWorked,hourlyWage,grossPay,taxes,netPay;
	//Get inut from the user
	printf("Enter hours worked in a week:");
	scanf("%f",&hoursWorked);
	printf("Enter hourly wage:");
	scanf("%f",&hourlyWage);
	//calculate gross pay , considering overtime
	if(hoursWorked > 40){
		float overtimeHours = hoursWorked -40;
		grossPay = (40 * hourlyWage) + (overtimeHours * hourlyWage * 1.5);
	}else{
		grossPay = hoursWorked * hourlyWage;
	}
	//calculate taxes
	if(grossPay <= 600){
		taxes = grossPay * 0.15;
	}else{
		taxes = (600 * 0.15) + (grossPay - 600) * 0.20;
	}
	//calculate net pay
	netPay = grossPay - taxes;
	//print the results
	printf("\nGross Pay:$%.2f\n",grossPay);
	printf("Taxes:$%.2f\n",taxes);
	printf("Net Pay:$%.2f",netPay);
	return 0;
}