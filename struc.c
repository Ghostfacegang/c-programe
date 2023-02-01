#include<stdio.h>
int main()
{
    // declaring a structure //
    struct student
    {
        int rno;
        char sname[20];
        int tot;
    };
    //Declaration of structure variables //
    struct student x;

    //reading values of data members//
    printf("\n enter roll number,name and total marks \n");
    scanf("%d %s %d",&x.rno,x.sname,&x.tot);

    // Display value of data members //
    printf("\n\t Details entered are \n");
    printf("\n Roll No.   : %d",x.rno);
    printf("\n student name : %s",x.sname);
    printf("\n total marks  : %d",x.tot);
    printf("\n press any key to continue... ");
    return 0;
}
    
    
    
    
    

    
