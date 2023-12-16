#include <stdio.h>
#include <stdlib.h>

struct UserNode
{
    int account;
    int money;
    char name[10];
    int password;
    char info[6][50];
    struct UserNode *next;
};

struct UserNode *top = NULL;

void createEmployee()
{
    struct UserNode *newNode = malloc(sizeof(struct UserNode));

    newNode->account = 12345678 + rand() % 1000;
    printf("\n\n\t\t\tCreate A New Account");
    printf("\n\n\t\tYour account number is: %d", newNode->account);

    printf("\n\n\tEnter Your Name: ");
    scanf("%s", &newNode->name);

    printf("\n\n\tEnter the date of birth (mm/dd/yyyy): ");
    scanf("%s", &newNode->info[1]);
    printf("\n\n\tEnter the age: ");
    scanf("%s", &newNode->info[0]);
    printf("\n\n\tEnter Address: ");
    scanf("%s", &newNode->info[2]);
    printf("\n\n\tEnter NID number: ");
    scanf("%s", &newNode->info[3]);
    printf("\n\n\tEnter your phone number: ");
    scanf("%s", &newNode->info[4]);
    printf("\n\n\tEnter amount to deposit (Tk): ");
    scanf("%d", &newNode->money);
    printf("\n\n\tType of account:\n\t#Saving\n\t#Student\n\t#Business\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice: ");
    scanf("%s", &newNode->info[5]);

    printf("\n\n\tSet Password: ");
    scanf("%d", &newNode->password);

    newNode->next = top;
    top = newNode;
    printf("\n\n\t\t\tPlease Wait");
        for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");


    printf("\n\n\tAccount Created");
    printf("\n\n\t\tYour account number is: %d", newNode->account);
    printf("\n\n\t\tYour usename is: %s", newNode->name);
    getch();
            system("cls");
}

void display_info()

{
    int account, password;
    printf("\n\n\t\tEnter your account no . ");
    scanf("%d", &account);

    printf("\n\n\t\tEnter your  password ");
    scanf("%d", &password);
    printf("\n\n\t\t\tPlease Wait");
        for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");


    struct UserNode *current = top;

    while (current != NULL)
    {
        // Check if the current node matches the account and password
        if (current->account == account && current->password == password)
        {
            printf("\n\n Name: %s\n", current->name);

            printf("\n Date of birth(mm/dd/yyyy):");
    printf("%s",current->info[0]);
    printf("\n Age:");
    printf("%s",current->info[1]);
    printf("\n Address:");
    printf("%s",current->info[2]);
    printf("\n NID number:");
    printf("%s",current->info[3]);
    printf("\n Phone number:");
    printf("%s",current->info[4]);

    printf("\n Type of account:");
    printf("%s",current->info[5]);
            printf("\n total money : %d\n\n", current->money);
            getch();
            system("cls");

            return;
        }

        current = current->next;
    }

    printf("\n\n\t\tAccount not found or incorrect password\n");
    getch();
            system("cls");
}
int fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

void Userpanel()
{
    char option;
    while (1)
    {

        printf("\n\n\t1. Create user : \n");
        printf("\n\t2. Display user account :  \n");
        printf("\n\t3. diposite money :  \n");
        printf("\n\t4. Withdraw money :  \n");
        printf("\n\t5. Change Password :  \n");
        printf("\n\t8. Go Home page \n");

        option=getch();
        system("cls");

        if (option == '8')

            break;

        switch (option)
        {

        case '1':

            createEmployee();

            break;

        case '2':
            display_info();

            break;

        case '3':

            diposite_money();

            break;

        case '4':
            withdraw_money();

            break;
        case '5':

            changepassword();

            break;

        default:
            printf("\n\n\t\tinvalid option.\n");
            getch();
            system("cls");
            break;
        }
    }
}

void diposite_money()
{
    int account, password, money;
    printf("\n\n\t\tEnter your account no . ");
    scanf("%d", &account);

    printf("\n\n\t\tEnter your  password ");
    scanf("%d", &password);


    struct UserNode *current = top;

    while (current != NULL)
    {
        // Check if the current node matches the account and password
        if (current->account == account && current->password == password)
        {
            printf("\n\n\t\t Name: %s\n", current->name);
            printf("\n\n\t\tEnter your  diposite money : ");
            scanf("%d", &money);
            current->money += money;
            printf("\n\n\t\t\tPlease Wait");
        for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");


    printf("\n\n\Disposite Done..!");
    getch();
            system("cls");

            return;
        }

        current = current->next;
    }
    printf("\n\n\t\tAccount not found or incorrect password\n");
    getch();
            system("cls");
}

void withdraw_money()
{
    int account, password, money;
    printf("\n\n\t\tEnter your account no . ");
    scanf("%d", &account);

    printf("\n\n\t\tEnter your  password ");
    scanf("%d", &password);

    struct UserNode *current = top;

    while (current != NULL)
    {
        // Check if the current node matches the account and password
        if (current->account == account && current->password == password)
        {
            printf("\n\n\t\t Name: %s\n", current->name);
            printf("\n\n\t\tEnter your  withdraw money : ");
            scanf("%d", &money);
            current->money -= money;
            printf("\n\n\t\t\tPlease Wait");
        for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");


    printf("\n\n\tDeposite done..!");
    getch();
            system("cls");


            return;
        }

        current = current->next;
    }
    printf("\n\n\t\tAccount not found or incorrect password\n");
    getch();
            system("cls");
}
void changepassword()
{
    int account, password;
    printf("\n\n\t\tEnter your account no . ");
    scanf("%d", &account);

    printf("\n\n\t\tEnter your old password ");
    scanf("%d", &password);

    struct UserNode *current = top;

    while (current != NULL)
    {
        // Check if the current node matches the account and password
        if (current->account == account && current->password == password)
        {
            int newpassword;
            printf("\n\n\t\t Name: %s\n", current->name);
            printf("\n\n\t\tEnter your new password : ");
            scanf("%d", &newpassword);
            current->password = newpassword;
            printf("\n\n\t\t\tPlease Wait");
        for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");

            printf("\n\n\t\tPassword changed\n\n");
            getch();
            system("cls");

            return;
        }

        current = current->next;
    }
    printf("\n\n\t\tAccount not found or incorrect password\n");
    getch();
            system("cls");
}
void Adminpanel()
{
    int admin_accountno = 12345;
    int password = 1234;
    int adminaccinput;
    int passwordInput;
    printf("\n\n\t\tEnter admin id : \n");
    scanf("%d", &adminaccinput);
    printf("\n\n\t\tEnter password : \n");
    scanf("%d", &passwordInput);
    printf("\n\n\t\t\tPlease Wait");
        for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");
      if ( admin_accountno==adminaccinput&& password==passwordInput){
            system("cls");
        char option;

    while (1)
    {

        printf("\n\n\t1. All user : \n");
        printf("\n\t2. Delete user :  \n");
        printf("\n\t3. Go Home page \n");

        option=getch();
        system("cls");

        if (option == '3')

            break;

        switch (option)
        {

        case '1':

            all_user();

            break;

        case '2':
            delete_user_account();

            break;

        default:
            printf("\n\n\t\tinvalid option.\n");

            break;
        }
    }}
    else
    {
        printf("\n\n\t\t invalid info\n\n");
        getch();
        system("cls");
        return 0;
    }
}
void all_user()
{
    printf("\n\n\t\t\tPlease Wait");
        for(int i=0;i<=6;i++)
        {
            fordelay(1000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");

    struct UserNode *current = top;
    if (current == NULL)
    {
        printf("\n\n\t\tNo account here");
        getch();
            system("cls");
    }

    while (current != NULL)
    {

        printf(" User_name: %s\n", current->name);
        printf(" User_account : %d \n", current->account);
        printf(" Total_Money : %d \n\n\n", current->money);

        current = current->next;
    }
    getch();
            system("cls");
}
void delete_user_account()
{
    int account;
    printf("\n\n\t\tEnter the account number to delete: ");
    scanf("%d", &account);

    struct UserNode *current = top;
    struct UserNode *prev = NULL;

    while (current != NULL)
    {
        if (current->account == account)
        {

            if (prev == NULL)
            {

                top = current->next;
            }
            else
            {

                prev->next = current->next;
            }


            free(current);
            printf("\n\n\t\t\tPlease Wait");
        for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");


            printf("\n\n\t\tAccount ID : %d deleted successfully.\n", account);
            getch();
            system("cls");
            return;
        }


        prev = current;
        current = current->next;
    }


    printf("\n\n\t\tAccount with account number %d not found.\n", account);
    getch();
            system("cls");
}
int main()
{

    char option;
    top:
    printf("\n\n\t\t\tWELCOME!\n\n\t\t\tLOADING");
        for(int i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf(".");
        }
        printf("\n\n");
        system("cls");

    while (1)
    {
        printf("\n\n\t\t\tBANKING MANAGEMENT SYSTEM");
        printf("\n\n\n\n\t\t1. User Panel \n");
        printf("\n\t\t2. Admin Panel\n");

        option=getch();
        system("cls");


        if (option == '5')

            break;

        switch (option)
        {

        case '1':
            Userpanel();

            break;

        case '2':
            Adminpanel();

            break;

        default:
            printf("\n\n\t\tinvalid option.\n");
            goto top;
        }
    }

    return 0;
}
