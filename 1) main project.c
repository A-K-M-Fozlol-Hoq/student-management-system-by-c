#include<stdio.h>
#include<string.h>
int mark();
int gread(int a);
int information();
void cgpa();
void more();
main()
{
char ID[20];
int login;
printf("1)admin log in \n or\n2)student log in\n");
scanf("%d",& login);
if(login==1)
{
int choice,avg;
char c, pass[25], n[25], admin[25];
FILE *fptr, *fptr2;
fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\password.txt","r");
fgets(n , 24 , fptr);
fptr2=fopen("F:\\programming\\c programming\\c prfoject\\c file\\admin.txt","r");
fgets(admin , 24 , fptr2);
printf("Enter username:\n");
scanf(" %[^\n]s",&ID);
//scanf("%s",&ID);
printf("Enter the password: ");
//scanf("%[ˆ\n]%*c", pass);
//scanf("%[ˆ\n]", pass);
scanf(" %[^\n]s",&pass);
//scanf("%s",pass);
if(fptr==NULL)
    printf("file does not exist!");
else
{
    if (strcmp(n,pass)==0 && strcmp(admin,ID)==0)
    {
        do
        {
        printf("Enter your choice : \n Enter 1 for calculate your mark. \n Enter 2 for Grade.\n Enter 3 for see your Full Information.");
        printf("\n Enter 4 for see your cgpa in every semester.\n Enter 5 for more option. \n:");
        scanf("%d",&choice);
        switch(choice)
        {

        case 1:
           {
           mark();
           }
           break;
        case 2:
            {
            printf("enter your average mark: \n");
            scanf("%d",&avg);
            gread(avg);
            }
            break;
        case 3:
           {
            information();
           }
           break;
           case 4:
           {
            cgpa();
           }
           break;
           case 5:
           {
            more();
           }
           break;
       }
      printf("\nTo Continue Press 'Y' else any letter  :");
      fflush(stdin);
      scanf("%c",&c);
    }while(c=='y' || c=='Y');
    }
    else
        printf("\t\tIncorrect user name or password!\n\t\t please try again.\n\n");
}
printf("*********************Thank you********************* \n");
}

else if(login==2)
{
    printf("*********************Enter your Id********************* \n:");
    scanf("%s",&ID);
    int English,Bangla,SPL,CPC,Calculus,EEE,sum,average;
    printf("Enter your English mark :");
    scanf("%d",&English);
    printf("Enter your Bangla mark :");
    scanf("%d",&Bangla);
    printf("Enter your SPL mark :");
    scanf("%d",&SPL);
    printf("Enter your CPC mark :");
    scanf("%d",&CPC);
    printf("Enter your Calculus mark :");
    scanf("%d",&Calculus);
    printf("Enter your EEE mark :");
    scanf("%d",&EEE);
    sum=English+Bangla+SPL+CPC+Calculus+EEE;
    average=sum/6;
    printf("your total mark is: %d\n",sum);
    printf("your average mark is: %d",average);
    if (average>=80&&average<=100)
        printf("\nyour result is A+");
    else if (average>=75&&average<=79)
        printf("\nyour result is A");
    else if (average>=70&&average<=74)
        printf("\nyour result is A-");
    else if (average>=65&&average<=69)
        printf("\nyour result is B+");
    else if (average>=60&&average<=64)
        printf("\nyour result is B");
    else if (average>=55&&average<=59)
        printf("\nyour result is B-");
    else if (average>=50&&average<=54)
        printf("\nyour result is C+");
    else if (average>=45&&average<=49)
        printf("\nyour result is C");
    else if (average>=40&&average<=44)
        printf("\nyour result is D");
    else
        printf("\nyou are Failed!");
}
else
    printf("\n Invalid input!");
}
int mark()
{
    int English,Bangla,SPL,CPC,Calculus,EEE,sum,average;
    printf("Enter your English mark :");
    scanf("%d",&English);
    printf("Enter your Bangla mark :");
    scanf("%d",&Bangla);
    printf("Enter your SPL mark :");
    scanf("%d",&SPL);
    printf("Enter your CPC mark :");
    scanf("%d",&CPC);
    printf("Enter your Calculus mark :");
    scanf("%d",&Calculus);
    printf("Enter your EEE mark :");
    scanf("%d",&EEE);
    sum=English+Bangla+SPL+CPC+Calculus+EEE;
    average=sum/6;
    printf("your total mark is: %d\n",sum);
    printf("your average mark is: %d",average);
}
int gread(int a)
{
    if (a>=80&&a<=100)
        printf("\nyour result is A+");
    else if (a>=75&&a<=79)
        printf("\nyour result is A");
    else if (a>=70&&a<=74)
        printf("\nyour result is A-");
    else if (a>=65&&a<=69)
        printf("\nyour result is B+");
    else if (a>=60&&a<=64)
        printf("\nyour result is B");
    else if (a>=55&&a<=59)
        printf("\nyour result is B-");
    else if (a>=50&&a<=54)
        printf("\nyour result is C+");
    else if (a>=45&&a<=49)
        printf("\nyour result is C");
    else if (a>=40&&a<=44)
        printf("\nyour result is D");
    else
        printf("\nyou are Failed!");
}
int information()
{
        int roll;
        FILE *fptr;
        char a[100];
        printf("input roll number: \n");
        scanf("%d",& roll);
        switch (roll)
        {
        case 1 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information1.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 2 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information2.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 3 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information3.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 4 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information4.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 5 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information5.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 6 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information6.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 7 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information7.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 8 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information8.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 9 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information9.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 10 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information10.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 11 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information11.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 12 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information12.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 13 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information13.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 14 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information14.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 15 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information15.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 16 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information16.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 17 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information17.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 18 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information18.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 19 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information19.txt","r");
                 fgets(a , 99 , fptr);
                 puts(a);
                 break;
        case 20 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information20.txt","r");
                fgets(a , 99 , fptr);
                 puts(a);
                 break;
        }
}
void cgpa()
{
        int roll;
        FILE *fptr;
        char a[300];
        printf("input roll number: \n");
        scanf("%d",& roll);
        switch (roll)
        {
        case 1 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa1.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 2 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa2.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 3 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa3.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 4 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa4.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 5 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa5.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 6 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa6.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 7 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa7.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 8 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa8.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 9 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa9.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 10 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa10.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 11 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa11.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 12 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa12.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 13 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa13.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 14 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa14.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 15 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa15.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 16 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa16.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 17 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa17.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 18 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa18.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 19 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa19.txt","r");
                 fgets(a , 199 , fptr);
                 puts(a);
                 break;
        case 20 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa20.txt","r");
                fgets(a , 199 , fptr);
                 puts(a);
                 break;
        }
}
void more()
{
    int c,i, roll;
    char pass[25], n[25], admin[25],s[200], ID[20];
    FILE *fptr, *fptr2;
    printf(" Enter 1 to change username \n Enter 2 to change password \n Enter 3 to edit student information \n Enter 4 to add students semesterwise cgpa\n:");
    scanf("%d", &c);
    switch(c)
    {
    case 1 :fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\password.txt","r");
            fgets(n , 24 , fptr);
            fptr2=fopen("F:\\programming\\c programming\\c prfoject\\c file\\admin.txt","r");
            fgets(admin , 24 , fptr2);
            printf("Enter old username:\n");
            scanf(" %[^\n]s",&ID);
            printf("Enter the old password: ");
            scanf(" %[^\n]s",&pass);
            if(fptr==NULL)
                printf("file does not exist!");
            else
            {
                if( (strcmp(n,pass)==0 && strcmp(admin,ID)==0))
                {
                    fptr2=fopen("F:\\programming\\c programming\\c prfoject\\c file\\admin.txt","w");
                    printf("\nEnter new username : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr2, "%s", s);
                    fclose(fptr2);
                }
                else
                  printf("\t\tIncorrect old username or password!\n\t\t please try again.\n");

            }
        break;
    case 2 :fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\password.txt","r");
            fgets(n , 24 , fptr);
            fptr2=fopen("F:\\programming\\c programming\\c prfoject\\c file\\admin.txt","r");
            fgets(admin , 24 , fptr2);
            printf("Enter old username:\n");
            scanf(" %[^\n]s",&ID);
            printf("Enter the old password: ");
            scanf(" %[^\n]s",&pass);
            if(fptr==NULL)
                printf("file does not exist!");
            else
            {
                if( (strcmp(n,pass)==0 && strcmp(admin,ID)==0))
                {
                    fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\password.txt","w");
                    printf("\nEnter new password : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                }
                else
                  printf("\t\tIncorrect old username or password!\n\t\t please try again.\n");

            }
        break;
    case 3 :printf("Enter student roll:\n");
            scanf("%d", &roll);
            switch(roll)
            {
        case 1 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information1.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 2 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information2.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 3 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information3.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 4 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information4.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 5 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information5.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 6 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information6.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 7 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information7.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 8 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information8.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 9 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information9.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 10 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information10.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 11 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information11.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 12 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information12.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 13 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information13.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 14 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information14.txt","w");
                 printf("\nEnter edited information : ");
                   scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 15 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information15.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 16 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information16.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 17 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information17.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
        case 18 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information18.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 19 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information19.txt","w");
                 printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 20 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\information20.txt","w");
                printf("\nEnter edited information : ");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        }
        break;
    case 4 :printf("Enter roll number\n");
            scanf("%d", &roll);
            switch(roll)
            {
        case 1 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa1.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    puts(s);
                    fclose(fptr);
                 break;
        case 2 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa2.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 3 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa3.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 4 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa4.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 5 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa5.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 6 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa6.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 7 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa7.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 8 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa8.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 9 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa9.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 10 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa10.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 11 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa11.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 12 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa12.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 13 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa13.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 14 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa14.txt","a");
                 printf("Enter new semester cgpa\n");
                   scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 15 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa15.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 16 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa16.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 17 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa17.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
        case 18 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa18.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 19 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa19.txt","a");
                 printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        case 20 : fptr=fopen("F:\\programming\\c programming\\c prfoject\\c file\\cgpa20.txt","a");
                printf("Enter new semester cgpa\n");
                    scanf(" %[^\n]s",&s);
                    fprintf(fptr, "%s", s);
                    fclose(fptr);
                 break;
        }
        break;
    }
}
