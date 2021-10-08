//gcc employeeMain.c employeeTable.c employeeOne.c
//gcc employeeMain.c employeeTable.c employeeTwo.c

#include <string.h>
#include <stdlib.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber);

int main(void){
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr; 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    if(matchPtr != NULL)
        printf("Employee ID 1045 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-555-1212");
    if(matchPtr != NULL)
        printf("Phone # 213-555-1212 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee Phone # is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.78);
    if(matchPtr != NULL)
        printf("Salary 8.78 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary is NOT found in the record\n");
    
    return EXIT_SUCCESS;
}