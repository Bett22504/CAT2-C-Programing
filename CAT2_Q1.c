/*Aurthor :Immanuel Bett
Reg No :CT101/G/22504/24
*/
#include <stdio.h>
#include <string.h>
struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}employee;

int main(){
strcpy(employee.name,"John_Doe");
employee.id = 12345;
strcpy(employee.department,"Human _Resource");
employee.salary = 55000.50;
strcpy(employee.email,"john.doe@company.com");

printf("Name:%s\n",employee.name);
printf("ID:%d\n",employee.id);
printf("Department:%s\n",employee.department);
printf("salary:%.2f",employee.salary);
printf("email:%s\n",employee.email);
return 0;
}
