#include<stdio.h>
#include<string.h>
#include<conio.h>
void clrscr() {
    printf("\033[2J\033[1;1H");
}
struct student
{
    char fname[25];
    char lname[25];
    char mname[25];
    int roll;
    char class[20];
    char vill[20];
    float per;
};

   



    void add_student() {
    char a;
    struct student info;
    FILE *fp;
    do {
        clrscr();
        printf("\t\t\t======STUDENT DATABASE MANAGEMENT======\n");
        printf("\n\n\n\n\t\t\t\tADD STUDENT INFO\n");
        fp = fopen("student_info.txt", "a");
        if (fp == NULL) {
            printf("Error opening file!\n");
        
        }
        else{
            printf("ok file");
        }
        printf("\n\t\t\t\t1. ENTER FIRST NAME:");
        scanf("%s", info.fname);
        printf("\n\t\t\t\t2. ENTER MIDDLE NAME:");
        scanf("%s", info.mname);
        printf("\n\t\t\t\t3. ENTER LAST NAME:");
        scanf("%s", info.lname);
        printf("\n\t\t\t\t4. ENTER STUDENT ROLL:");
        scanf("%d", &info.roll);
        printf("\n\t\t\t\t5. ENTER STUDENT ADDRESS:");
        scanf("%s",info.vill);
        printf("\n\t\t\t\t5. ENTER STUDENT CLASS:");
        scanf("%s", info.class);
        printf("\n\t\t\t\t6. ENTER STUDENT GRADE:");
        scanf("%f", &info.per);
        fwrite(&info, sizeof(struct student), 1, fp);
        fclose(fp);
        printf("DO YOU WANT TO ADD ANOTHER DATA? (Y/N)");
        scanf(" %c", &a);
    } while (a == 'y' || a == 'Y');
}

   



void student_record(){

struct student info;
    FILE *fp;
   
        clrscr();
        printf("\t\t\t======STUDENT DATABASE MANAGEMENT======\n");
        printf("\n\n\n\n\t\t\t\t=====SUDENT RECORDS=====\n");
        fp = fopen("student_info.txt", "r");
        if (fp == NULL) {
            printf("Error opening file!\n");
        
        }
        else{
            printf("ok file");
        }
        while (fread(&info, sizeof(struct student), 1, fp))
        {
          printf("\t\t\t\tNAME:%s %s %s\n",info.fname,info.mname,info.lname);
printf("\t\t\t\tROLL:%d\n",info.roll);
printf("\t\t\t\tCLASS:%s\n",info.class);
printf("\t\t\t\tGRADE:%f\n",info.per);
printf("\t\t\t\tADDRESS:%s\n",info.vill);
printf("\t\t\t\t___________________________________\n");

        }
        fclose(fp);


}













void search_student(){


struct student info;
    FILE *fp;
   int sinput;
   char str[20];
        clrscr();
        printf("\t\t\t======STUDENT DATABASE MANAGEMENT======\n");
        printf("\n\n\n\n\t\t\t\t=====SUDENT RECORDS=====\n");
        fp = fopen("student_info.txt", "r");
        if (fp == NULL) {
            printf("Error opening file!\n");
        
        }
        else{
            printf("ok file");
        }
printf("\t\t\tENTER THE ROLL OF THE STUDENT:");
scanf("%d",&sinput);

        while (fscanf(fp, "%s %s %s %d %s %f %s", info.fname, info.mname, info.lname, &info.roll,info.class, &info.per, info.vill)!=EOF){
printf("IN THE LOOP");
            if (info.roll==sinput)
            {printf("IN THE IF");
                  printf("\t\t\t\tNAME:%s %s %s\n",info.fname,info.mname,info.lname);
printf("\t\t\t\tROLL:%d\n",info.roll);
printf("\t\t\t\tCLASS:%s\n",info.class);
printf("\t\t\t\tGRADE:%f\n",info.per);
printf("\t\t\t\tADDRESS:%s\n",info.vill);
printf("\t\t\t\t___________________________________\n");

            }
            
        }


 fclose(fp);


}


int main(int argc, char const *argv[])
{
    int choice,MM;
    while (choice!=5)
    {
        printf("\t\t\t======STUDENT DATABASE MANAGEMENT======");
        printf("\n\n\n\n\t\t\t\t1.ADD STUDENT INFO\n");
          printf("\t\t\t\t2.STUDENT RECORDS\n");
            printf("\t\t\t\t3.SEARCH STUDENT INFO\n");
              printf("\t\t\t\t4.EDIT STUDENT INFO\n");
                printf("\t\t\t\t5.EXIT\n");
                printf("\t\tENTER YOUR RESPONSE: ");
                scanf("%d",&choice);
switch (choice )
{
case 1:
clrscr();
add_student();
clrscr();
    break;
case 2:
clrscr();
student_record();
printf("ENTER ANY KEY TO BACK IN MAIN MENU:");
scanf("%d",&MM);
clrscr();

    break;

    case 3:
    clrscr();
    search_student();
    printf("ENTER ANY KEY TO BACK IN MAIN MENU:");
scanf("%d",&MM);
    clrscr();



}
clrscr();

    }
    
    
    return 0;
}
