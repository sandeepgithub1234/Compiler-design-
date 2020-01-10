#include<stdio.h>
#include<string.h>



int character(char c)
{
    switch(c)
    {
        case 'a':
            return 1;
            break;
        case 'b':
            return 2;
            break;
        case 'c':
            return 3;
            break;
        case 'i':
            return 4;
            break;
        case 'f':
            return 5;
            break;
        case '0':
            return 6;
            break;
        case '1':
            return 7:
            break;
        case '2':
            return 8;
            break;
        case '3':
            return 9;
            break;
        case '.':
            return 10;
            break;
        case '(':
            return 11;
            break;
        case ')':
            return 12;
            break;
        case '\n':
            return 13;
            break;
        case '\t':
            return 14;
            break;
        case '"':
            return 15;
            break;
        case '"':
            return 16;
            break;
        default
        break;

    }
}

int main()
    {
        chart[]={'$',a','b','c','i','f','0','1','2','3','.','(' ')','\n','\t',' ','"','"'};
        int startState,CurrentState=1;
        int LastSeenAcceptorState=0;
        int TOKEN;
        int TM[][]={  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                        {4,4,4,2,4,7,7,7,7,5,4,4,13,13,13,9,13},
                        {4,4,4,4,3,4,4,4,4,13,4,4,13,13,13,13,13},
                        {4,4,4,4,4,4,4,4,4,13,4,4,13,13,13,13,13},
                        {4,4,4,4,4,4,4,4,4,13,4,4,13,13,13,13,13},
                        {13,13,13,13,13,6,6,6,6,13,13,13,13,13,13,13,13},
                        {13,13,13,13,13,6,6,6,6,13,13,13,13,13,13,13,13},
                        {13,13,13,13,13,7,7,7,7,8,13,13,13,13,13,13,13},
                        {13,13,13,13,13,8,8,8,8,13,13,13,13,13,13,13,13},
                        {13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,10},
                        {10,10,10,10,10,13,13,13,13,13,10,10,13,13,13,13,13},
                        {13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13},
                        {13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13}
                     };



        char* str="1000.";
        for(i=0;i<strlen(str);i++)
        {
            InputChar=Character(str[i]);

            while(1)
            {
                if(NextState=TM[CurrentState][InputChar])
                {
                    CurrentState=NextState;
                    Advance the Input;
                    if(TM[CurrentState][256])
                    {
                        LastSeenAcceptorState=CurrentState;
                        TOKEN=TM[CurrentState][256];
                    }
                }
            else
                {
                    if(!LastSeenAcceptorState)
                    {
                        LexErrorRecovery();
                        CurrentState=1;
                    }
                    else
                    {
                        return TOKEN;
                    }
                }
            }
        }

*/
        return 0;
    }
