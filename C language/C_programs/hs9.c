
#include<stdio.h>
struct biostudent {
    char name[100];
    int rollno;
    float cgpa;

};
 struct biostaff{
    char name[100];
    int sno;
    int salary;
};
struct bioteacher{
    char name[100];
    int sno;
    int salary;
};
int main(){
     struct biostudent class[10];
    int i=0; 
     for(i=0; i<10 ;i++){
        class[i].rollno = i;
     }

     for( i=0; i<10 ;i++){
        class[i].cgpa = 8.0;
     }
     printf("Enter the names of students");
     for (i=0; i<10 ; i++){
        scanf("%s",class[i].name);
     }
     struct biostaff member[10];
     for (i=0;i<10;i++){
        member[i].salary = 100*i +500;
        member[i].sno = i;
     }
     for(i=0; i<10;i++){
        printf("Enter the names of the staff");
        scanf("%s",member[i].name);
     }
     struct bioteacher faculty[10];
     for(i=0;i<10;i++){
        faculty[i].salary = ++i * 10000;
        faculty[i].sno = i; 
     }
     for(i=0;i<10;i++){
        printf("Enter the names of teachers");
        scanf("%s",faculty[i].name);
     }

return 0;
}


