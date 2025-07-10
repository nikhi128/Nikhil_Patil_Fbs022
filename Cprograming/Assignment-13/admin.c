struct Admin {
    int id;
    char name[50];
    float salary;
    float allowance;
};

int main() {
    struct Admin a1;

    
    printf("Enter Admin ID: ");
    scanf("%d", &a1.id);

    printf("Enter Admin Name: ");
    scanf("%s", a1.name);

    printf("Enter Admin Salary: ");
    scanf("%f", &a1.salary);

    printf("Enter Admin Allowance: ");
    scanf("%f", &a1.allowance);

     
    printf("\n--- Admin Details ---\n");
    printf("ID       : %d\n", a1.id);
    printf("Name     : %s\n", a1.name);
    printf("Salary   : %.2f\n", a1.salary);
    printf("Allowance: %.2f\n", a1.allowance);

    return 0;
}