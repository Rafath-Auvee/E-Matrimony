#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

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

    char blood[100];
    char age[100];
    char birth[100];

};

struct profile_data p;

void menu()
{
    system("cls");
    system("color B0");
    printf("\t\t\t\t\t\t#####E-MATRIMONY#####\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\t------HOME SCREEN------\n\n\n\n\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\tTYPE THE NUMBER OF YOUR CHOICE\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\t1. SIGN UP\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\t2. SIGN IN\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\t3. ADMIN LOGIN\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\t4. CREDITS\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\t5. HELP\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\t6. TERMS OF USE:\n");
    Sleep(50);
    Sleep(50);
    printf("\t\t\t\t\t\t7. EXIT APPLICATION\n\n");
    Sleep(50);
    Sleep(50);

    printf("\t\t\t\t\t\tYOUR CHOICE: ");
}

void male_add_profile()
{
    fflush(stdin);
    system("cls");
    FILE *fp;
    fp = fopen("male.txt","ab+");
    if(fp == NULL)
    {
        printf("ERROR IN OPENING FILE\nMAKE SURE YOUR FILE IS NOT WRITE PROTECTED! WARNING");
    }
    else
    {
        fflush(stdin);
        printf("GENDER: ");
        fflush(stdin);

        gets(p.gender);
        strupr(p.gender);

        printf("\n");
        fflush(stdin);
        printf("NAME: ");
        fflush(stdin);

        gets(p.name);
        strupr(p.name);

        printf("\n");
        fflush(stdin);
        printf("ADDRESS: ");
        fflush(stdin);

        gets(p.add);
        strupr(p.add);

        printf("\n");
        fflush(stdin);
        printf("HOMETOWN: ");
        fflush(stdin);

        gets(p.hometown);
        strupr(p.hometown);

        printf("\n");
        fflush(stdin);
        printf("FATHER'S NAME: ");
        fflush(stdin);

        gets(p.fname);
        strupr(p.fname);

        printf("\n");
        fflush(stdin);
        printf("MOTHER'S NAME: ");
        fflush(stdin);

        gets(p.mname);
        strupr(p.mname);

        printf("\n");
        fflush(stdin);
        printf("ENTER YOUR EDUCATIONAL QUALIFICATION : ");
        fflush(stdin);

        gets(p.e_qua);
        strupr(p.e_qua);

        printf("\n");
        fflush(stdin);
        printf("PROVIDE YOUR JOB DESCRIPTION : ");
        fflush(stdin);

        gets(p.job);
        strupr(p.job);

        printf("\n");
        fflush(stdin);
        printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : ");
        fflush(stdin);

        gets(p.inte);
        strupr(p.inte);

        printf("\n");
        fflush(stdin);
        printf("PHONE NUMBER: ");
        fflush(stdin);

        gets(p.phone_no);
        strupr(p.phone_no);

        printf("\n");
        fflush(stdin);
        printf("ENTER YOUR CODE: ");
        fflush(stdin);

        gets(p.code);
        strupr(p.code);

        printf("\n");
        fflush(stdin);


        fflush(stdin);
        printf("BLOOD GROUP: ");
        fflush(stdin);
        gets(p.blood);
        strupr(p.blood);
        printf("\n");

        fflush(stdin);
        printf("AGE: ");
        fflush(stdin);
        gets(p.age);
        strupr(p.age);
        printf("\n");

        fflush(stdin);
        printf("BIRTH INFORMATION: ");
        fflush(stdin);
        gets(p.birth);
        strupr(p.birth);
        printf("\n");

        fwrite(&p, sizeof(p), 1, fp);
        printf("THANKYOU FOR SIGNING UP. NOW YOU CAN LOGIN WITH YOUR CODE AND PHONE NUMBER\n");
    }

    fclose(fp);
    return;
}

void female_add_profile()
{
    fflush(stdin);
    system("cls");
    FILE *fp;
    fp = fopen("female.txt","ab+");
    if(fp == NULL)
    {
        printf("ERROR IN OPENING FILE\nMAKE SURE YOUR FILE IS NOT WRITE PROTECTED! WARNING");
    }
    else
    {
        fflush(stdin);
        printf("GENDER: ");
        fflush(stdin);

        gets(p.gender);
        strupr(p.gender);

        printf("\n");
        fflush(stdin);
        printf("NAME: ");
        fflush(stdin);

        gets(p.name);
        strupr(p.name);

        printf("\n");
        fflush(stdin);
        printf("ADDRESS: ");
        fflush(stdin);

        gets(p.add);
        strupr(p.add);

        printf("\n");
        fflush(stdin);
        printf("HOMETOWN: ");
        fflush(stdin);

        gets(p.hometown);
        strupr(p.hometown);

        printf("\n");
        fflush(stdin);
        printf("FATHER'S NAME: ");
        fflush(stdin);

        gets(p.fname);
        strupr(p.fname);

        printf("\n");
        fflush(stdin);
        printf("MOTHER'S NAME: ");
        fflush(stdin);

        gets(p.mname);
        strupr(p.mname);

        printf("\n");
        fflush(stdin);
        printf("ENTER YOUR EDUCATIONAL QUALIFICATION : ");
        fflush(stdin);

        gets(p.e_qua);
        strupr(p.e_qua);

        printf("\n");
        fflush(stdin);
        printf("PROVIDE YOUR JOB DESCRIPTION : ");
        fflush(stdin);

        gets(p.job);
        strupr(p.job);

        printf("\n");
        fflush(stdin);
        printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : ");
        fflush(stdin);

        gets(p.inte);
        strupr(p.inte);

        printf("\n");
        fflush(stdin);
        printf("PHONE NUMBER: ");
        fflush(stdin);

        gets(p.phone_no);
        strupr(p.phone_no);

        printf("\n");
        fflush(stdin);
        printf("ENTER YOUR CODE: ");
        fflush(stdin);

        gets(p.code);
        strupr(p.code);

        printf("\n");
        fflush(stdin);


        fflush(stdin);
        printf("BLOOD GROUP: ");
        fflush(stdin);
        gets(p.blood);
        strupr(p.blood);
        printf("\n");

        fflush(stdin);
        printf("AGE: ");
        fflush(stdin);
        gets(p.age);
        strupr(p.age);
        printf("\n");

        fflush(stdin);
        printf("BIRTH INFORMATION: ");
        fflush(stdin);
        gets(p.birth);
        strupr(p.birth);
        printf("\n");
        fwrite(&p, sizeof(p), 1, fp);
        printf("THANKYOU FOR SIGNING UP. NOW YOU CAN LOGIN WITH YOUR CODE AND PHONE NUMBER\n");
    }

    fclose(fp);
    return;
}

void add_profile()
{
again:
    system("cls");
    printf("PRESS 'M' FOR MALE \nPRESS 'F' FOR FEMALE \nPRESS 'N' TO GO BACK\n\n");
    printf("YOUR CHOICE: ");
    char male[] = {'M','\0'},  female[] = {'F','\0'}, yn[2], back[] = {'N','\0'};
    fflush(stdin);
    scanf("%s",yn);
    strupr(yn);
    if(strcmp(yn, male)== 0)
    {
        male_add_profile();
        printf("\n");
    }
    else if(strcmp(yn, female)== 0)
    {
        female_add_profile();
        printf("\n");
    }
    else if(strcmp(yn, back)==0)
    {
        system("cls");
        main_program();
        getch();
    }
    else
    {

        printf("WRONG CHOICE. TRY AGAIN");
        goto again;
        exit(1);
    }

}

void male_search_profile()
{
    system("cls");
    char sea_id[12];
    int isFound = 0;
    printf("ENTER CODE TO SEARCH: ");
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
        printf("NAME: %s\n",p.name);
        printf("GENDER: %s\n",p.gender);
        printf("ADDRESS: %s\n",p.add);
        printf("FATHER'S NAME: %s\n",p.fname);
        printf("MOTHER'S NAME: %s\n",p.mname);
        printf("HOMETOWN: %s",p.hometown);
        printf("ENTER YOUR EDUCATIONAL QUALIFICATION: %s\n",p.e_qua);
        printf("PROVIDE YOUR JOB DESCRIPTION:%s\n",p.job);
        printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : %s\n",p.inte);
        printf("PHONE NUMBER: %s\n",p.phone_no);
        printf("AGE: %s\n",p.age);
        printf("BLOOD GROUP: %s\n",p.blood);
        printf("Birth Information: %s\n",p.birth);

    }
    else
    {
        printf("SORRY, NO RECORD FOUND IN THE DATABASE!");
    }
    fclose(fp);
    return;
}

void my_profile()
{
    system("cls");
    printf("MY PROFILE\n");
    printf("----------------------\n\n");
    printf("NAME: %s\n",p.name);
    printf("GENDER: %s\n",p.gender);
    printf("ADDRESS: %s\n",p.add);
    printf("FATHER'S NAME: %s\n",p.fname);
    printf("MOTHER'S NAME: %s\n",p.mname);
    printf("HOMETOWN: %s",p.hometown);
    printf("ENTER YOUR EDUCATIONAL QUALIFICATION: %s\n",p.e_qua);
    printf("PROVIDE YOUR JOB DESCRIPTION:%s\n",p.job);
    printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : %s\n",p.inte);
    printf("PHONE NUMBER: %s\n",p.phone_no);
    printf("AGE: %s\n",p.age);
    printf("BLOOD GROUP: %s\n",p.blood);
    printf("Birth Information: %s\n",p.birth);
    printf("YOUR CODE: %s\n", p.code);

    printf("\n\nPress any key to continue\n\n");
}

void female_search_profile()
{
    system("cls");
    char sea_id[12];
    int isFound = 0;
    printf("ENTER CODE TO SEARCH: ");
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
        printf("NAME: %s\n",p.name);
        printf("GENDER: %s\n",p.gender);
        printf("ADDRESS: %s\n",p.add);
        printf("FATHER'S NAME: %s\n",p.fname);
        printf("MOTHER'S NAME: %s\n",p.mname);
        printf("HOMETOWN: %s",p.hometown);
        printf("ENTER YOUR EDUCATIONAL QUALIFICATION: %s\n",p.e_qua);
        printf("PROVIDE YOUR JOB DESCRIPTION:%s\n",p.job);
        printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : %s\n",p.inte);
        printf("PHONE NUMBER: %s\n",p.phone_no);
        printf("AGE: %s\n",p.age);
        printf("BLOOD GROUP: %s\n",p.blood);
        printf("Birth Information: %s\n",p.birth);

    }
    else
    {
        printf("SORRY ,NO RECORD FOUND IN THE DATABASE");
    }
    fclose(fp);
    return;
}

void search_profile()
{
again:
    system("cls");
    printf("PRESS 'M' FOR MALE \nPRESS 'F' FOR FEMALE \nPRESS 'N' TO GO BACK\n\n");
    printf("YOUR CHOICE: ");
    char male[] = {'M','\0'},  female[] = {'F','\0'}, yn[2], back[] = {'N','\0'};
    fflush(stdin);
    scanf("%s",yn);
    strupr(yn);
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
        system("cls");
        main_program();
        getch();
    }
    else
    {

        printf("WRONG CHOICE. TRY AGAIN");
        goto again;

    }
}

void male_modify_profile()
{
    system("cls");
    char s_id[15];
    int isFound = 0;
    printf("ENTER CODE TO MODIFY: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("male.txt","rb+");
    while(fread(&p, sizeof(p),1,fp) == 1)
    {
        if(strcmp(s_id, p.code) == 0)
        {
            fflush(stdin);
            printf("GENDER: ");
            fflush(stdin);

            gets(p.gender);
            strupr(p.gender);

            printf("\n");
            fflush(stdin);
            printf("NAME: ");
            fflush(stdin);

            gets(p.name);
            strupr(p.name);

            printf("\n");
            fflush(stdin);
            printf("ADDRESS: ");
            fflush(stdin);

            gets(p.add);
            strupr(p.add);

            printf("\n");
            fflush(stdin);
            printf("HOMETOWN: ");
            fflush(stdin);

            gets(p.hometown);
            strupr(p.hometown);

            printf("\n");
            fflush(stdin);
            printf("FATHER'S NAME: ");
            fflush(stdin);

            gets(p.fname);
            strupr(p.fname);

            printf("\n");
            fflush(stdin);
            printf("MOTHER'S NAME: ");
            fflush(stdin);

            gets(p.mname);
            strupr(p.mname);

            printf("\n");
            fflush(stdin);
            printf("ENTER YOUR EDUCATIONAL QUALIFICATION : ");
            fflush(stdin);

            gets(p.e_qua);
            strupr(p.e_qua);

            printf("\n");
            fflush(stdin);
            printf("PROVIDE YOUR JOB DESCRIPTION : ");
            fflush(stdin);

            gets(p.job);
            strupr(p.job);

            printf("\n");
            fflush(stdin);
            printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : ");
            fflush(stdin);

            gets(p.inte);
            strupr(p.inte);

            printf("\n");
            fflush(stdin);
            printf("PHONE NUMBER: ");
            fflush(stdin);

            gets(p.phone_no);
            strupr(p.phone_no);

            printf("\n");
            fflush(stdin);
            printf("ENTER YOUR CODE: ");
            fflush(stdin);

            gets(p.code);
            strupr(p.code);

            printf("\n");
            fflush(stdin);


            fflush(stdin);
            printf("BLOOD GROUP: ");
            fflush(stdin);
            gets(p.blood);
            strupr(p.blood);
            printf("\n");

            fflush(stdin);
            printf("AGE: ");
            fflush(stdin);
            gets(p.age);
            strupr(p.age);
            printf("\n");

            fflush(stdin);
            printf("BIRTH INFORMATION: ");
            fflush(stdin);
            gets(p.birth);
            strupr(p.birth);
            printf("\n");

            fwrite(&p,sizeof(p), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        printf("NO RECORD FOUND");
    }
    fclose(fp);
    return;
}

void edit_my_profile()
{
    FILE *fp;

    system("cls");
    fflush(stdin);
    printf("GENDER: ");
    fflush(stdin);

    gets(p.gender);
    strupr(p.gender);

    printf("\n");
    fflush(stdin);
    printf("NAME: ");
    fflush(stdin);

    gets(p.name);
    strupr(p.name);

    printf("\n");
    fflush(stdin);
    printf("ADDRESS: ");
    fflush(stdin);

    gets(p.add);
    strupr(p.add);

    printf("\n");
    fflush(stdin);
    printf("HOMETOWN: ");
    fflush(stdin);

    gets(p.hometown);
    strupr(p.hometown);

    printf("\n");
    fflush(stdin);
    printf("FATHER'S NAME: ");
    fflush(stdin);

    gets(p.fname);
    strupr(p.fname);

    printf("\n");
    fflush(stdin);
    printf("MOTHER'S NAME: ");
    fflush(stdin);

    gets(p.mname);
    strupr(p.mname);

    printf("\n");
    fflush(stdin);
    printf("ENTER YOUR EDUCATIONAL QUALIFICATION : ");
    fflush(stdin);

    gets(p.e_qua);
    strupr(p.e_qua);

    printf("\n");
    fflush(stdin);
    printf("PROVIDE YOUR JOB DESCRIPTION : ");
    fflush(stdin);

    gets(p.job);
    strupr(p.job);

    printf("\n");
    fflush(stdin);
    printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : ");
    fflush(stdin);

    gets(p.inte);
    strupr(p.inte);

    printf("\n");
    fflush(stdin);
    printf("PHONE NUMBER: ");
    fflush(stdin);

    gets(p.phone_no);
    strupr(p.phone_no);

    printf("\n");
    fflush(stdin);
    printf("ENTER YOUR CODE: ");
    fflush(stdin);

    gets(p.code);
    strupr(p.code);

    printf("\n");
    fflush(stdin);


    fflush(stdin);
    printf("BLOOD GROUP: ");
    fflush(stdin);
    gets(p.blood);
    strupr(p.blood);
    printf("\n");

    fflush(stdin);
    printf("AGE: ");
    fflush(stdin);
    gets(p.age);
    strupr(p.age);
    printf("\n");

    fflush(stdin);
    printf("BIRTH INFORMATION: ");
    fflush(stdin);
    gets(p.birth);
    strupr(p.birth);
    printf("\n");

    fwrite(&p,sizeof(p), 1, fp);
}

void female_modify_profile()
{
    system("cls");
    char s_id[15];
    int isFound = 0;
    printf("ENTER CODE TO MODIFY: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("profile.txt","rb+");
    while(fread(&p, sizeof(p),1,fp) == 1)
    {
        if(strcmp(s_id, p.code) == 0)
        {
            fflush(stdin);
            printf("GENDER: ");
            fflush(stdin);

            gets(p.gender);
            strupr(p.gender);

            printf("\n");
            fflush(stdin);
            printf("NAME: ");
            fflush(stdin);

            gets(p.name);
            strupr(p.name);

            printf("\n");
            fflush(stdin);
            printf("ADDRESS: ");
            fflush(stdin);

            gets(p.add);
            strupr(p.add);

            printf("\n");
            fflush(stdin);
            printf("HOMETOWN: ");
            fflush(stdin);

            gets(p.hometown);
            strupr(p.hometown);

            printf("\n");
            fflush(stdin);
            printf("FATHER'S NAME: ");
            fflush(stdin);

            gets(p.fname);
            strupr(p.fname);

            printf("\n");
            fflush(stdin);
            printf("MOTHER'S NAME: ");
            fflush(stdin);

            gets(p.mname);
            strupr(p.mname);

            printf("\n");
            fflush(stdin);
            printf("ENTER YOUR EDUCATIONAL QUALIFICATION : ");
            fflush(stdin);

            gets(p.e_qua);
            strupr(p.e_qua);

            printf("\n");
            fflush(stdin);
            printf("PROVIDE YOUR JOB DESCRIPTION : ");
            fflush(stdin);

            gets(p.job);
            strupr(p.job);

            printf("\n");
            fflush(stdin);
            printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : ");
            fflush(stdin);

            gets(p.inte);
            strupr(p.inte);

            printf("\n");
            fflush(stdin);
            printf("PHONE NUMBER: ");
            fflush(stdin);

            gets(p.phone_no);
            strupr(p.phone_no);

            printf("\n");
            fflush(stdin);
            printf("ENTER YOUR CODE: ");
            fflush(stdin);

            gets(p.code);
            strupr(p.code);

            printf("\n");
            fflush(stdin);


            fflush(stdin);
            printf("BLOOD GROUP: ");
            fflush(stdin);
            gets(p.blood);
            strupr(p.blood);
            printf("\n");

            fflush(stdin);
            printf("AGE: ");
            fflush(stdin);
            gets(p.age);
            strupr(p.age);
            printf("\n");

            fflush(stdin);
            printf("BIRTH INFORMATION: ");
            fflush(stdin);
            gets(p.birth);
            strupr(p.birth);
            printf("\n");

            fwrite(&p,sizeof(p), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        printf("NO RECORD FOUND");
    }
    fclose(fp);
    return;
}

void modify_profile()
{
again:
    system("cls");
    printf("PRESS 'M' FOR MALE \nPRESS 'F' FOR FEMALE \nPRESS 'N' TO GO BACK\n\n");
    printf("YOUR CHOICE: ");
    char male[] = {'M','\0'},  female[] = {'F','\0'}, yn[2], back[] = {'N','\0'};
    fflush(stdin);
    scanf("%s",yn);
    strupr(yn);
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
        system("cls");
        main_program();
        getch();
    }
    else
    {

        printf("WRONG CHOICE. TRY AGAIN");
        goto again;
        exit(1);
    }
}

void female_delete_profile()
{
    system("cls");
    char s_id[15];
    int isFound = 0;
    printf("ENTER ID TO MODIFY: ");
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
    printf("THE RECORD IS DELETED\n\n");
    return;
}

void male_delete_profile()
{
    system("cls");
    char s_id[15];
    int isFound = 0;
    printf("ENTER ID TO MODIFY: ");
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
    printf("THE RECORD IS DELETED\n\n");
    return;
}

void delete_profile()
{
again:
    system("cls");
    printf("PRESS 'M' FOR MALE \nPRESS 'F' FOR FEMALE \nPRESS 'N' TO GO BACK\n\n");
    printf("YOUR CHOICE: ");
    char male[] = {'M','\0'},  female[] = {'F','\0'}, yn[2], back[] = {'N','\0'};
    fflush(stdin);
    scanf("%s",yn);
    strupr(yn);
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
        system("cls");
        main_program();
        getch();
    }
    else
    {

        printf("WRONG CHOICE. TRY AGAIN");
        goto again;
        exit(1);
    }
}

void help()
{
    system("cls");
    printf("NAME:FAKHRUL ISLAM FUAD\nE-MAIL:fakhrulif@gmail.com\nSOCIAL LINKS:www.facebook.com/fuadtkf\nCONTACT NUMBER:01610772131");
}

void credits()
{
    system("cls");
    printf("1.RAFATH BIN ZAFAR AUVEE\nID-180201044\n2.FAKHRUL ISLAM FUAD\nID-180201067\n3.TAJRIAN BILLAH\nID-180201069\n4.SUMAIYA NISHI\nID-180201070");
}

void terms_of_use()
{
    system("cls");
    printf("This site is provided as a service to our visitors and may be used for informational purposes only.");
    printf("Because the Terms and Conditions contain legal obligations,please read them carefully.\n\n\n");
    printf("\n\n\n1.YOUR AGREEMENT:\n\n\n");
    printf("By using this Site,you agree to be bound by,and to comply with,these Terms and Conditions.");
    printf("If you do not agree to these Terms and Conditions, please do not use this site.\n\n\n");
    printf("PLEASE NOTE: ");
    printf("We reserve the right,at our sole discretion,to change,modify or otherwise alter these Terms and Conditions at any time.");
    printf("Unless otherwise indicated,amendments will become effective immediately.");
    printf("Please review these Terms and Conditions periodically");
    printf("Please review these Terms and Conditions periodically");
    printf("Your continued use of the Site following the posting of changes and/or modifications will constitute");
    printf("your acceptance of the revised Terms and Conditions and the reasonableness of these standards for notice of changes.");
    printf("For your information, this page was last updated as of the date at the top of these terms and conditions.\n\n\n");
    printf("2.PRIVACY:\n\n\n");
    printf("Please review our Privacy Policy,which also governs your visit to this Site,to understand our practices.\n\n\n");
    printf("\n\n\n3.LINKED SITES:\n\n");
    printf("This Site may contain links to other independent third-party Web sites (Linked Sites).");
    printf("These Linked Sites are provided solely as a convenience to our visitors.");
    printf("Such Linked Sites are not under our control,and we are not responsible for and does not endorse the content of such Linked Sites");
    printf("including any information or materials contained on such Linked Sites.");
    printf("You will need to make your own independent judgment regarding your interaction with these Linked Sites.\n\n\n");
    printf("\n\n\n4.FORWARD LOOKING STATEMENTS:\n\n");
    printf("All materials reproduced on this site speak as of the original date of publication or filing.");
    printf("The fact that a document is available on this site does not mean that");
    printf("the information contained in such document has not been modified or superseded by events or by a subsequent document or filing.");
    printf("We have no duty or policy to update any information or statements contained on this site and,");
    printf("therefore,such information or statements should not be relied upon as being current as of the date you access this site.\n");

}

void male_displayAll()
{
    system("cls");
    FILE *fp;


    fp=fopen("male.txt","rb");

    printf("\n================================================================================================================\n\n");
    printf("\t\t ALL MALE DETAILS\n\n");
    printf("================================================================================================================\n\n");



    while(1)
    {
        fread(&p,sizeof(p),1,fp);

        if(feof(fp))
        {
            break;
        }

        printf("----------------------\n\n");
        printf("NAME: %s\n",p.name);
        printf("GENDER: %s\n",p.gender);
        printf("ADDRESS: %s\n",p.add);
        printf("FATHER'S NAME: %s\n",p.fname);
        printf("MOTHER'S NAME: %s\n",p.mname);
        printf("HOMETOWN: %s\n",p.hometown);
        printf("ENTER YOUR EDUCATIONAL QUALIFICATION: %s\n",p.e_qua);
        printf("PROVIDE YOUR JOB DESCRIPTION:%s\n",p.job);
        printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : %s\n",p.inte);
        printf("PHONE NUMBER: %s\n",p.phone_no);
        printf("AGE: %s\n",p.age);
        printf("BLOOD GROUP: %s\n",p.blood);
        printf("Birth Information: %s\n",p.birth);
        //printf("YOUR CODE: %s\n", p.code);
    }
}

void female_displayAll()
{
    system("cls");
    FILE *fp;

    fp=fopen("female.txt","rb");

    printf("\n================================================================================================================\n\n");
    printf("\t\t\t ALL FEMALE DETAILS\n\n");
    printf("================================================================================================================\n\n");



    while(1)
    {
        fread(&p,sizeof(p),1,fp);

        if(feof(fp))
        {
            break;
        }

        printf("----------------------\n\n");
        printf("NAME: %s\n",p.name);
        printf("GENDER: %s\n",p.gender);
        printf("ADDRESS: %s\n",p.add);
        printf("FATHER'S NAME: %s\n",p.fname);
        printf("MOTHER'S NAME: %s\n",p.mname);
        printf("HOMETOWN: %s\n",p.hometown);
        printf("ENTER YOUR EDUCATIONAL QUALIFICATION: %s\n",p.e_qua);
        printf("PROVIDE YOUR JOB DESCRIPTION:%s\n",p.job);
        printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : %s\n",p.inte);
        printf("PHONE NUMBER: %s\n",p.phone_no);
        printf("AGE: %s\n",p.age);
        printf("BLOOD GROUP: %s\n",p.blood);
        printf("Birth Information: %s\n",p.birth);
        //printf("YOUR CODE: %s\n", p.code);


    }

}

void male_search_by_district()
{
    system("cls");
    char sea_id[12];
    int isFound = 0;
    printf("TYPE YOUR HOMETOWN TO SEARCH: ");
    fflush(stdin);
    gets(sea_id);
    strupr(sea_id);
    FILE *fp;
    fp = fopen("male.txt","rb");
    system("cls");
    while(fread(&p,sizeof(p),1,fp) == 1)
    {
        if(strcmp(sea_id,p.hometown) == 0)
        {
            isFound = 1;
            printf("SEARCH: %s\n",sea_id);
            printf("----------------------\n\n");
            printf("NAME: %s\n",p.name);
            printf("GENDER: %s\n",p.gender);
            printf("ADDRESS: %s\n",p.add);
            printf("FATHER'S NAME: %s\n",p.fname);
            printf("MOTHER'S NAME: %s\n",p.mname);
            printf("HOMETOWN: %s",p.hometown);
            printf("ENTER YOUR EDUCATIONAL QUALIFICATION: %s\n",p.e_qua);
            printf("PROVIDE YOUR JOB DESCRIPTION:%s\n",p.job);
            printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : %s\n",p.inte);
            printf("PHONE NUMBER: %s\n",p.phone_no);
            printf("AGE: %s\n",p.age);
            printf("BLOOD GROUP: %s\n",p.blood);
            printf("Birth Information: %s\n",p.birth);
            //printf("YOUR CODE: %s\n", p.code);           printf("\n");
        }
    }

    if(isFound == 0)
    {
        printf("SORRY, NO RECORD FOUND IN THE DATABASE!");
    }
    fclose(fp);
    return;
}

void female_search_by_district()
{
    system("cls");
    char sea_id[12];
    int isFound = 0;
    printf("TYPE YOUR HOMETOWN TO SEARCH: ");
    fflush(stdin);
    gets(sea_id);
    strupr(sea_id);
    FILE *fp;
    fp = fopen("female.txt","rb");
    system("cls");
    while(fread(&p,sizeof(p),1,fp) == 1)
    {
        if(strcmp(sea_id,p.hometown) == 0)
        {

            isFound = 1;
            printf("SEARCH: %s\n",sea_id);
            printf("----------------------\n\n");
            printf("NAME: %s\n",p.name);
            printf("GENDER: %s\n",p.gender);
            printf("ADDRESS: %s\n",p.add);
            printf("FATHER'S NAME: %s\n",p.fname);
            printf("MOTHER'S NAME: %s\n",p.mname);
            printf("HOMETOWN: %s",p.hometown);
            printf("ENTER YOUR EDUCATIONAL QUALIFICATION: %s\n",p.e_qua);
            printf("PROVIDE YOUR JOB DESCRIPTION:%s\n",p.job);
            printf("ENTER 5 THINGS THAT YOU ARE INTERESTED IN : %s\n",p.inte);
            printf("PHONE NUMBER: %s\n",p.phone_no);
            printf("AGE: %s\n",p.age);
            printf("BLOOD GROUP: %s\n",p.blood);
            printf("Birth Information: %s\n",p.birth);
            //printf("YOUR CODE: %s\n", p.code);         printf("\n");
        }
    }

    if(isFound == 0)
    {
        printf("SORRY, NO RECORD FOUND IN THE DATABASE!");
    }
    fclose(fp);
    return;
}

void male_sign_in()
{
home_page:
    system("cls");
    char sea_id[12];
    int isFound = 0,a,b;
    printf("ENTER CODE TO SIGN IN: ");
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
            printf("\t\t\t\t\t\tUSER MENU\n\n\n\n\n");
            printf("\t\t\t\t\t\t1. DISPLAY ALL MALE DETAILS\n");
            printf("\t\t\t\t\t\t2. DISPLAY ALL FEMALE DETAILS\n");
            printf("\t\t\t\t\t\t3. MY PROFILE\n");
            printf("\t\t\t\t\t\t4. MODIFY MY PROFILE\n");
            printf("\t\t\t\t\t\t5. SEARCH ALL MALE BY DISTRICT\n");
            printf("\t\t\t\t\t\t6. SEARCH ALL FEMALE BY DISTRICT\n");

            printf("\t\t\t\t\t\t7. MAIN MENU\n\n\n");


            printf("\t\t\t\t\t\tYOUR CHOICE: ");
            fflush(stdin);
            scanf("%d",&a);
            if(a== 1)
            {
                male_displayAll();
                printf("\nPRESS ANY KEY TO CONTINUE\n");
                getch();
            }
            else if(a==2)
            {
                female_displayAll();
                printf("\nPRESS ANY KEY TO CONTINUE\n");
                getch();
            }
            else if(a==3)
            {
                my_profile();
                getch();
            }
            else if(a==4)
            {
                male_modify_profile();
                getch();
            }
            else if(a==5)
            {
                male_search_by_district();
                getch();
            }
            else if(a==6)
            {
                female_search_by_district();
                getch();
            }
            else if(a==7)
            {
                main_program();
                getch();
            }
            else
            {
                system("cls");
                main_program();
                getch();
            }

        }

    }
    else
    {
        system("cls");
        printf("Not found. You will be redirected to the home page\n");
        getch();
        main_program();
        getch();
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
    printf("ENTER CODE TO SIGN IN: ");
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
        else
        {
            printf("Not Found\n");
            getch();
            male_sign_in();
        }
    }
    if(isFound == 1)
    {
        while(1)
        {
            system("cls");
            printf("\t\t\t\t\t\tUSER MENU\n\n\n\n\n");
            printf("\t\t\t\t\t\t1. DISPLAY ALL MALE DETAILS\n");
            printf("\t\t\t\t\t\t2. DISPLAY ALL FEMALE DETAILS\n");
            printf("\t\t\t\t\t\t3. MY PROFILE\n");
            printf("\t\t\t\t\t\t4. MODIFY MY PROFILE\n");
            printf("\t\t\t\t\t\t5. SEARCH ALL MALE BY DISTRICT\n");
            printf("\t\t\t\t\t\t6. SEARCH ALL FEMALE BY DISTRICT\n");

            printf("\t\t\t\t\t\t7. MAIN MENU\n\n\n");
            fflush(stdin);
            printf("\t\t\t\t\t\tYOUR CHOICE: ");
            scanf("%d",&a);
            if(a== 1)
            {
                male_displayAll();
                printf("\nPRESS ANY KEY TO CONTINUE\n");
                getch();
            }
            else if(a==2)
            {
                female_displayAll();
                printf("\nPRESS ANY KEY TO CONTINUE\n");
                getch();
            }
            else if(a==3)
            {
                my_profile();
                getch();
            }
            else if(a==4)
            {
                female_modify_profile();
                getch();
            }
            else if(a==5)
            {
                male_search_by_district();
                getch();
            }
            else if(a==6)
            {
                female_search_by_district();
                getch();
            }
            else if(a==7)
            {
                main_program();
                getch();
            }
            else
            {

                system("cls");
                main_program();
                getch();
            }
        }
    }
    else
    {
        system("cls");
        printf("Not found. You will be redirected to the home page\n");
        getch();
        main_program();
        getch();
    }
    fclose(fp);
    return;
}

void sign_in()
{
again:
    system("cls");
    printf("PRESS 'M' FOR MALE \nPRESS 'F' FOR FEMALE \nPRESS 'N' TO GO BACK\n");
    printf("YOUR CHOICE: ");
    char male[] = {'M','\0'},  female[] = {'F','\0'}, yn[2], back[] = {'N','\0'};
    fflush(stdin);
    scanf("%s",yn);
    strupr(yn);
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
        system("cls");
        main_program();
        getch();
    }
    else
    {
        printf("WRONG CHOICE. TRY AGAIN");
        goto again;
        exit(1);
    }
}

void admin()
{
    int choice;
    while(1)
    {
IOL:
        fflush(stdin);
        system("cls");
        printf("====ADMIN DASHBOARD====\n\n\n");
        printf("1. ADD NEW USER DETAILS : \n");
        printf("2. CHECK USER DETAILS : \n");
        printf("3. MODIFY USER DETAILS : \n");
        printf("4. DELETE USER DETAILS : \n");
        printf("5. CHECK ALL MALE USER DETAILS : \n");
        printf("6. CHECK ALL FEMALE USER DETAILS : \n");
        printf("7. EXIT TO MAIN MENU : \n");
        printf("ENTER YOUR CHOICE: ");
        fflush(stdin);
        scanf("%d",&choice);

        if(choice == 1)
        {
            system("cls");
            add_profile();
            getch();
        }
        if(choice == 2)
        {
            system("cls");
            search_profile();
            getch();
        }
        if(choice == 3)
        {
            system("cls");
            modify_profile();
            getch();
        }
        if(choice == 4)
        {
            system("cls");
            delete_profile();
            getch();
        }
        if(choice == 5)
        {
            system("cls");
            male_displayAll();
            getch();
        }
        if(choice == 6)
        {
            system("cls");
            female_displayAll();
            getch();
        }
        if(choice == 7)
        {
            system("cls");
            main_program();
            getch();
        }

        else
        {

            //printf("\nINVALID . PRESS ANY KEY TO CONTINUE");
            getch();
            continue;
            goto IOL;
        }


    }
}

void welcome_message()
{
    system("color FC");
    //printf("\n\n\t\t=======================================================================\t\t\t");
    printf("\n\n\n\t\t\t\t\t\tWELCOME TO E-MATRIMONY\t\t\t\n\n");
    printf("\tE-MATRIMONY IS THE POPULAR APPLICATION WHERE YOU FIND PARTNER THROUGH YOUR FAVOURITE CRITERIA. ");
    printf("WE\n\tKNOW IT IS HARD TO FIND SOMEONE PERFECT IN REAL LIFE. ");
    printf("WITH E-MATRIMONY WE CAN ASSURE THAT YOU CAN FIND\n\tSOMEONE ");
    printf("WITH WHOM YOU CAN SPEND REST OF YOUR LIFE WITH JOY,HAPPINESS AND FACE EVERY CHALLENGE TOGETHER.\n");
    // printf("\t\t=======================================================================\t\t\t");
    printf("\n\n\n\n\n\n\n\t\t\t\t\t\t");
    system("pause");
}

void search_by_location()
{
    char loc[100];
    gets(loc);
    strupr(loc);
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
        fflush(stdin);
        menu();
        fflush(stdin);
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
            printf("PRESS 'N' AND ENTER TO GO BACK ANYTIME\n\n");


            printf("ENTER THE USER NAME: ");
            fflush(stdin);
            scanf("%s",user);
            printf("\nENTER THE PASSWORD: ");
            fflush(stdin);
            scanf("%s",password);


            if(strcmp(admin_user, user)==0)
            {
loop3:
                if(strcmp(admin_password, password)==0)
                {
                    printf("\nLOGIN SUCCESSFUL. PRESS ANY KEY TO CONTINUE\n");
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
                    printf("\nINVALID PASSWORD. TRY AGAIN. PRESS ANY KEY TO CONTINUE");
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
                printf("\nINVALID USER NAME. TRY AGAIN. PRESS ANY KEY TO CONTINUE");
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
            printf("\n\n\n\t\t\t\t\t\tINVALID . PRESS ANY KEY TO CONTINUE");
            getch();
            goto home_page;
            exit(1);
        }
    }
}

int main()
{
    main_program();
}

