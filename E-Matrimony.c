#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct profile_data
{
    char code[50];
    char name[50];
    char add[50];
    char hometown[20];
    char fname[50];
    char mname[50];
    char e_qua[100];
    char job[100];
    char phone_no[11];
    char inte[100];
    char gender[100];
};

struct profile_data p;

void menu()
{
    system("cls");
    system("color 02");
    printf("\t\t\t\t\t\t#####E-Matrimony#####\n");
    printf("\t\t\t\t\t\t------HOME SCREEN------\n\n\n\n\n");
    printf("\t\t\t\t\t\tType the number of your choice\n");
    printf("\t\t\t\t\t\t1. Sign Up\n");
    printf("\t\t\t\t\t\t2. Sign In\n");
    printf("\t\t\t\t\t\t3. Admin Login\n");
    printf("\t\t\t\t\t\t4. Credits\n");
    printf("\t\t\t\t\t\t5. Help\n");
    printf("\t\t\t\t\t\t6. Terms of use:\n\n\n");
    printf("\t\t\t\t\t\t7. Exit Application\n");

    printf("\t\t\t\t\t\tYour Choice: ");
}

void male_add_profile()
{
    system("cls");
    FILE *fp;
    fp = fopen("male.txt","ab+");
    if(fp == NULL)
    {
        printf("Error in Opening file\nMake sure your file is not write protected! Warning");
    }
    else
    {
        fflush(stdin);

        printf("Gender: ");
        gets(p.gender);
        printf("\n");
        fflush(stdin);
        printf("Name: ");
        gets(p.name);
        printf("Address: ");
        gets(p.add);
        printf("Hometown: ");
        gets(p.hometown);
        printf("Father's name: ");
        gets(p.fname);
        printf("Mother's name: ");
        gets(p.mname);
        printf("Enter your Educational Qualification : ");
        gets(p.e_qua);
        printf("Provide your Job Description : ");
        gets(p.job);
        printf("Enter 5 things that you are interested in : ");
        gets(p.inte);
        printf("Phone Number: ");
        gets(p.phone_no);
        printf("Enter your code: ");
        gets(p.code);

        fwrite(&p, sizeof(p), 1, fp);
        printf("Thank you for signing up. Now you can login with your code and phone number\n\n\n");
    }

    fclose(fp);
    return;
}

void female_add_profile()
{

    system("cls");
    FILE *fp;
    fp = fopen("female.txt","ab+");
    if(fp == NULL)
    {
        printf("Error in Opening file\nMake sure your file is not write protected! Warning");
    }
    else
    {
        fflush(stdin);

        printf("Gender: ");
        gets(p.gender);
        printf("Name: ");
        gets(p.name);
        printf("Address: ");
        gets(p.add);
        printf("Hometown: ");
        gets(p.hometown);
        printf("Father's name: ");
        gets(p.fname);
        printf("Mother's name: ");
        gets(p.mname);
        printf("Enter your Educational Qualification : ");
        gets(p.e_qua);
        printf("Provide your Job Description : ");
        gets(p.job);
        printf("Enter 5 things that you are interested in : ");
        gets(p.inte);
        printf("Phone Number: ");
        gets(p.phone_no);
        printf("Enter your code: ");
        gets(p.code);
        fwrite(&p, sizeof(p), 1, fp);
        printf("Thank you for signing up. Now you can login with your code and phone number\n");
    }

    fclose(fp);
    return;
}

void add_profile()
{
again:
    system("cls");
    printf("Press 'm' for male \npress 'f' for female \nPress 'n' to go back\n\n");
    printf("Your Choice: ");
    char male[] = {'m','\0'},  female[] = {'f','\0'}, yn[2], back[] = {'n','\0'};
    scanf("%s",yn);
    if(strcmp(yn, male)== 0)
    {
        male_add_profile();
        printf("\n");
        system("pause");
    }
    else if(strcmp(yn, female)== 0)
    {
        female_add_profile();
        printf("\n");
        system("pause");
    }
    else if(strcmp(yn, back)==0)
    {
        menu();
        getch();
    }
    else
    {

        printf("Wrong Choice. Try Again");
        goto again;
        exit(1);
    }

}

void male_search_profile()
{
    system("cls");
    char sea_id[12];
    int isFound = 0;
    printf("Enter code to Search: ");
    fflush(stdin);
    gets(sea_id);
    FILE *fp;
    fp = fopen("male.txt","rb");
    while(fread(&p,sizeof(p),1,fp) == 1)
    {
        if(strcmp(sea_id,p.code) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        printf("Gender: %s\n",p.gender);
        printf("Name: %s\n",p.name);
        printf("Address: %s\n",p.add);
        printf("Father's name: %s\n",p.fname);
        printf("Mother's name: %s\n",p.mname);
        printf("Enter your Educational Qualification : %s\n",p.e_qua);
        printf("Provide your Job Description :%s\n",p.job);
        printf("Enter 5 things that you are interested in : %s\n",p.inte);
        printf("Phone Number: %s\n",p.phone_no);
        printf("Your code: %s\n", p.code);

    }
    else
    {
        printf("Sorry, No record found in the database");
    }
    fclose(fp);
    return;
}

void female_search_profile()
{
    system("cls");
    char sea_id[12];
    int isFound = 0;
    printf("Enter code to Search: ");
    fflush(stdin);
    gets(sea_id);
    FILE *fp;
    fp = fopen("female.txt","rb");
    while(fread(&p,sizeof(p),1,fp) == 1)
    {
        if(strcmp(sea_id,p.code) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        printf("Gender: %s\n",p.gender);
        printf("Name: %s\n",p.name);
        printf("Address: %s\n",p.add);
        printf("Father's name: %s\n",p.fname);
        printf("Mother's name: %s\n",p.mname);
        printf("Enter your Educational Qualification : %s\n",p.e_qua);
        printf("Provide your Job Description :%s\n",p.job);
        printf("Enter 5 things that you are interested in : %s\n",p.inte);
        printf("Phone Number: %s\n",p.phone_no);
        printf("Your code: %s\n", p.code);

    }
    else
    {
        printf("Sorry, No record found in the database");
    }
    fclose(fp);
    return;
}

void search_profile()
{
again:
    system("cls");
    printf("Press 'm' for male \npress 'f' for female \nPress 'n' to go back\n\n");
    printf("Your Choice: ");
    char male[] = {'m','\0'},  female[] = {'f','\0'}, yn[2], back[] = {'n','\0'};
    scanf("%s",yn);
    if(strcmp(yn, male)== 0)
    {
        male_search_profile();
        system("pause");
    }
    else if(strcmp(yn, female)== 0)
    {
        female_search_profile();
        system("pause");
    }
    else if(strcmp(yn, back)==0)
    {
        menu();
        getch();
    }
    else
    {

        printf("Wrong Choice. Try Again");
        goto again;
        exit(1);
    }
}

void male_modify_profile()
{
    system("cls");
    char s_id[15];
    int isFound = 0;
    printf("Enter ID to Modify(4 Digit Code): ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("male.txt","rb+");
    while(fread(&p, sizeof(p),1,fp) == 1)
    {
        if(strcmp(s_id, p.code) == 0)
        {
            fflush(stdin);

            printf("Gender: ");
            gets(p.gender);
            printf("Name: ");
            gets(p.name);
            printf("Address: ");
            gets(p.add);
            printf("Hometown: ");
            gets(p.hometown);
            printf("Father's name: ");
            gets(p.fname);
            printf("Mother's name: ");
            gets(p.mname);
            printf("Enter your Educational Qualification : ");
            gets(p.e_qua);
            printf("Provide your Job Description : ");
            gets(p.job);
            printf("Enter 5 things that you are interested in : ");
            gets(p.inte);
            printf("Phone Number: ");
            gets(p.phone_no);
            fwrite(&p,sizeof(p), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        printf("No Record Found");
    }
    fclose(fp);
    return;
}

void female_modify_profile()
{
    system("cls");
    char s_id[15];
    int isFound = 0;
    printf("Enter ID to Modify(4 Digit Code): ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("profile.txt","rb+");
    while(fread(&p, sizeof(p),1,fp) == 1)
    {
        if(strcmp(s_id, p.code) == 0)
        {
            fflush(stdin);

            printf("Gender: ");
            gets(p.gender);
            printf("Name: ");
            gets(p.name);
            printf("Address: ");
            gets(p.add);
            printf("Hometown: ");
            gets(p.hometown);
            printf("Father's name: ");
            gets(p.fname);
            printf("Mother's name: ");
            gets(p.mname);
            printf("Enter your Educational Qualification : ");
            gets(p.e_qua);
            printf("Provide your Job Description : ");
            gets(p.job);
            printf("Enter 5 things that you are interested in : ");
            gets(p.inte);
            printf("Phone Number: ");
            gets(p.phone_no);
            fwrite(&p,sizeof(p), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        printf("No Record Found");
    }
    fclose(fp);
    return;
}

void modify_profile()
{
again:
    system("cls");
    printf("Press 'm' for male \npress 'f' for female \nPress 'n' to go back\n\n");
    printf("Your Choice: ");
    char male[] = {'m','\0'},  female[] = {'f','\0'}, yn[2], back[] = {'n','\0'};
    scanf("%s",yn);
    if(strcmp(yn, male)== 0)
    {
        male_modify_profile();
        system("pause");
    }
    else if(strcmp(yn, female)== 0)
    {
        female_modify_profile();
        system("pause");
    }
    else if(strcmp(yn, back)==0)
    {
        menu();
        getch();
    }
    else
    {

        printf("Wrong Choice. Try Again");
        goto again;
        exit(1);
    }
}

void female_delete_profile()
{
    system("cls");
    char s_id[15];
    int isFound = 0;
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp, *temp;
    fp = fopen("female.txt","rb");
    temp = fopen("temp.txt", "wb");
    while(fread(&p, sizeof(p),1,fp) == 1)
    {
        if(strcmp(s_id, p.code) == 0)
        {
            fwrite(&p,sizeof(p),1,temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("female.txt");
    rename("temp.txt","female.txt");
    printf("The record is deleted");
    return;
}
void male_delete_profile()
{
    system("cls");
    char s_id[15];
    int isFound = 0;
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp, *temp;
    fp = fopen("male.txt","rb");
    temp = fopen("temp.txt", "wb");
    while(fread(&p, sizeof(p),1,fp) == 1)
    {
        if(strcmp(s_id, p.code) == 0)
        {
            fwrite(&p,sizeof(p),1,temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("male.txt");
    rename("temp.txt","male.txt");
    printf("The record is deleted");
    return;
}




void delete_profile()
{
again:
    system("cls");
    printf("Press 'm' for male \npress 'f' for female \nPress 'n' to go back\n\n");
    printf("Your Choice: ");
    char male[] = {'m','\0'},  female[] = {'f','\0'}, yn[2], back[] = {'n','\0'};
    scanf("%s",yn);
    if(strcmp(yn, male)== 0)
    {
        male_delete_profile();
        system("pause");
    }
    else if(strcmp(yn, female)== 0)
    {
        female_delete_profile();
        system("pause");
    }
    else if(strcmp(yn, back)==0)
    {
        menu();
        getch();
    }
    else
    {

        printf("Wrong Choice. Try Again");
        goto again;
        exit(1);
    }
}

void help()
{

}

void credits()
{

}

void terms_of_use()
{

}

void male_displayAll()
{
    system("cls");
    FILE *fp;


    fp=fopen("male.txt","rb");

    printf("\n========================================================\n\n");
    printf("\t\t All Male Details\n\n");
    printf("========================================================\n\n");



    while(1)
    {
        fread(&p,sizeof(p),1,fp);

        if(feof(fp))
        {
            break;
        }

        printf("No: %s\n", p.code);
        printf("Name: %s\n",p.name);
        printf("Address: %s\n",p.add);
        printf("Father's name: %s\n",p.fname);
        printf("Mother's name: %s\n",p.mname);
        printf("Enter your Educational Qualification : %s\n",p.e_qua);
        printf("Provide your Job Description :%s\n",p.job);
        printf("Enter 5 things that you are interested in : %s\n",p.inte);
        printf("Phone Number: %s\n\n\n",p.phone_no);

    }
}
void female_displayAll()
{
    system("cls");
    FILE *fp;

    fp=fopen("female.txt","rb");

    printf("\n========================================================\n\n");
    printf("\t\t\t All female Details\n\n");
    printf("========================================================\n\n");



    while(1)
    {
        fread(&p,sizeof(p),1,fp);

        if(feof(fp))
        {
            break;
        }
        printf("No: %s\n", p.code);
        printf("Name: %s\n",p.name);
        printf("Address: %s\n",p.add);
        printf("Father's name: %s\n",p.fname);
        printf("Mother's name: %s\n",p.mname);
        printf("Enter your Educational Qualification : %s\n",p.e_qua);
        printf("Provide your Job Description :%s\n",p.job);
        printf("Enter 5 things that you are interested in : %s\n",p.inte);
        printf("Phone Number: %s\n\n\n",p.phone_no);


    }

}

void male_sign_in()
{
home_page:
    system("cls");
    char sea_id[12];
    int isFound = 0,a,b;
    printf("Enter code to Sign in: ");
    fflush(stdin);
    gets(sea_id);
    FILE *fp;
    fp = fopen("male.txt","rb");
    while(fread(&p,sizeof(p),1,fp) == 1)
    {
        if(strcmp(sea_id,p.code) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        while(1)
        {
            system("cls");
            printf("User Menu\n");
            printf("1. Display all male details\n");
            printf("2. Display all female details\n");
            printf("3. Main Menu\n");
            scanf("%d",&a);
            if(a== 1)
            {
                male_displayAll();
                printf("\nPress any key to continue\n");
                getch();
            }
            else if(a==2)
            {
                female_displayAll();
                printf("\nPress any key to continue\n");
                getch();
            }
            else if(a==3)
            {
                main_program();
                getch();
            }

        }

    }

    fclose(fp);
    return;
}

void female_sign_in()
{
home_page:
    system("cls");
    char sea_id[12];
    int isFound = 0,a;
    printf("Enter code to Sign in: ");
    fflush(stdin);
    gets(sea_id);
    FILE *fp;
    fp = fopen("female.txt","rb");
    while(fread(&p,sizeof(p),1,fp) == 1)
    {
        if(strcmp(sea_id,p.code) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        while(1)
        {
            system("cls");
            printf("User Menu\n");
            printf("1. Display all male details\n");
            printf("2. Display all female details\n");
            printf("3. Main Menu\n");
            scanf("%d",&a);
            if(a== 1)
            {
                male_displayAll();
                printf("\nPress any key to continue\n");
                getch();
            }
            else if(a==2)
            {
                female_displayAll();
                printf("\nPress any key to continue\n");
                getch();
            }
            else if(a==3)
            {
                main_program();
                getch();
            }

        }

    }

    fclose(fp);
    return;
}

void sign_in()
{
again:
    system("cls");
    printf("Press 'm' for male \npress 'f' for female \nPress 'n' to go back\n\n");
    printf("Your Choice: ");
    char male[] = {'m','\0'},  female[] = {'f','\0'}, yn[2], back[] = {'n','\0'};
    scanf("%s",yn);
    if(strcmp(yn, male)== 0)
    {
        male_sign_in();
        system("pause");
    }
    else if(strcmp(yn, female)== 0)
    {
        female_sign_in();
        system("pause");
    }
    else if(strcmp(yn, back)==0)
    {
        main_program();
        getch();
    }
    else
    {

        printf("Wrong Choice. Try Again");
        goto again;
        exit(1);
    }
}

void admin()
{
    int choice;
    while(1)
    {

        system("cls");

        printf("1. Add your details : \n");
        printf("2. Check your details : \n");
        printf("3. Modify your details : \n");
        printf("4. Delete your details : \n");
        printf("5. Exit to main menu : \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_profile();
            break;
        case 2:
            search_profile();
            break;
        case 3:
            modify_profile();
            break;
        case 4:
            delete_profile();
            break;
        case 5:
            main_program();
            break;
        default:
            break;
        }

    }
}

void welcome_message()
{
    system("color 7C");
    printf("\t\t\t\t\t\t\tWelcome to E-Matrimony\t\t\t\n\n\n\n\n");
    printf("E-Matrimony is the popular application where you find partner through you favorite criteria.");
    printf(" We know it is hard to find someone perfect in real life. ");
    printf("With E-Matrimony we can assure that you can find someone");
    printf("with whom you can spend rest of your life with joy, happiness and face every challenge together.\n");
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t");
    system("pause");
}

void main_program()
{
    system("cls");
    int click=0,admin_login=3;
    char admin_user[] = {'a','d','m','i','n','\0'}, admin_password[] = {'a','d','m','i','n','\0'} ;
    char password[100], user[100], back[] = {'n','\0'};
    welcome_message();

    while(1)
    {
home_page:
        menu();
        scanf("%d",&click);

        if(click == 1)//sign_up

        {
            system("cls");
            add_profile();
            getch();
        }

        else if(click == 2)//user_sign_in
        {
            system("cls");

            sign_in();
            break;
        }

        if(click == 3)//admin_sign_up
        {

login_page:
            system("cls");
            printf("Press 'n' and enter to go back anytime\n\n");


            printf("Enter the user name: ");
            scanf("%s",user);
            printf("\nEnter the password: ");
            scanf("%s",password);


            if(strcmp(admin_user, user)==0)
            {
loop3:

                if(strcmp(admin_password, password)==0)
                {
                    printf("\nLogin Successful. Press any key to continue\n");
                    getch();
                    admin();
                }
                if(strcmp(password, back)==0)
                {
                    system("cls");
                    goto home_page;
                    break;
                }
                else
                {
                    printf("\nInvalid Password. Try again. Press any key to continue");
                    getch();
                    continue;
                    goto loop3;
                    break;
                }
            }
            else if(strcmp(user, back)==0)
            {
                system("cls");
                goto home_page;
                break;
            }
            else
            {
                system("cls");
                printf("\nInvalid User Name. Try again, Press any key to continue");
                getch();
                continue;
                goto login_page;
            }
        }

        else if(click == 4)//credits
        {
            system("cls");
            credits();
            getch();
        }
        else if(click == 5)//help
        {
            system("cls");
            help();
            getch();
        }
        else if(click == 6)//terms_of_use
        {
            system("cls");
            terms_of_use();
            getch();
        }
        else if(click == 7)//exit application
        {
            system("cls");
            exit(0);
        }
        else
        {
            printf("\nInvalid. Press any key to continue");
            goto home_page;
            exit(1);
        }
    }

}

int main()
{
    main_program();
}

