#include<stdio.h>
#include<string.h>


int main()
    {

        /*
           here i have taken four state A- represented as 0 B- represented as 1  C- represented as 2 D - represented as 3
           which is final state in the dfa of variable which will check that is variable valid or not?
           4 is representing the invalid character in the invalid variable which is error state in the dfa
           I have used ascii value from 32 to 126 that's why i have substracted from -32 so it will store the value from index 0

           here i have uses the ascii value of each symbol starting from spca !

        */




        int edge[4][96]={
                        {4,4,4,4,4,4,4,4,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,3,3,3,3,3,3,3,3,1,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4},
                        {4,4,4,4,4,4,4,4,3,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,3,4,3,3,3,3,3,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4},
                        {4,4,4,4,4,4,4,4,3,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,3,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4},
                        {4,4,4,4,4,4,4,4,3,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4,3,4,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,4,4,4,4}

                     };
        char *str="(abbbcd"; //valid variable
        char *str1="_abcd";
        char *str3="123abcd";
        char *str2="abcd";
        char *str4="kul D";
        char tillvalid[100];
        int a= edge[0][(int)str[0]-32],i;
        if(a!=4)
        {
             tillvalid[0]=str[0];
        }
        if(a!=4)
        {
            for(i=1;i<strlen(str);i++)
            {
                if(edge[a][(int)str[i]-32]!=4)
                {
                    tillvalid[i]=str[i];
                }
                if(edge[a][(int)str[i]-32]==2)
                {
                    a=2;
                }
                if(edge[a][(int)str[i]-32]==1)
                {
                    a=1;
                }

                if(edge[a][(int)str[i]-32]==4)
                {   printf("invalid symbol has occured %c\n",str[i]);
                    printf("Invalid variable\n");
                    tillvalid[i]='\0';
                    a=4;
                    break;
                }


            }
            if(a==3)
            {
                printf("valid variable\n");
            }
        }
        else
        {    printf("start with invalid symbol %c\n",str[0]);
             printf("Invalid variable\n");
        }
        printf("string is valid till:%s",tillvalid);

        return 0;
    }
