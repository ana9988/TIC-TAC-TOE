#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void computer(char a[][3])
{
    int c=0,i,j,m,n;
    c=comp(a);
    if(c==1)
        return;
    if(a[0][0]!='X'&&a[0][1]=='X'&&a[0][2]=='X')
    {
        if(a[0][0]=='.')
        {
            a[0][0]='0';
            c=1;
        }
    }
    if(c==0)
    { if(a[0][0]=='X'&&a[0][1]!='X'&&a[0][2]=='X')
    {
        if(a[0][1]=='.')
        {
            a[0][1]='0';
            c=1;
        }
    }
    }
    if(c==0)
    {if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]!='X')
    {
        if(a[0][2]=='.')
        {
            c=1;
            a[0][2]='0';
        }
    }
    }
    if(c==0)
    {if(a[0][0]!='X'&&a[1][0]=='X'&&a[2][0]=='X')
    {
        if(a[0][0]=='.')
        {
            c=1;
            a[0][0]='0';
        }
    }
    }
    if(c==0)
    {if(a[0][0]=='X'&&a[1][0]!='X'&&a[2][0]=='X')
    {
        if(a[1][0]=='.')
        {
            c=1;
            a[1][0]='0';
        }
    }
    }
    if(c==0)
    {if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]!='X')
    {
        if(a[2][0]=='.')
        {
            c=1;
            a[2][0]='0';
        }
    }}
    if(c==0){ if(a[0][0]!='X'&&a[1][1]=='X'&&a[2][2]=='X')
    {
        if(a[0][0]=='.')
        {
            c=1;
            a[0][0]='0';
        }
    }}
    if(c==0){ if(a[0][0]=='X'&&a[1][1]!='X'&&a[2][2]=='X')
    {
        if(a[1][1]=='.')
        {
            c=1;
            a[1][1]='0';
        }
    }}
    if(c==0){ if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]!='X')
    {
        if(a[2][2]=='.')
        {
            c=1;
            a[2][2]='0';
        }
    }}
    if(c==0){ if(a[0][1]!='X'&&a[1][1]=='X'&&a[2][1]=='X')
    {
        if(a[0][1]=='.')
        {
            c=1;
            a[0][1]='0';
        }
    }}
    if(c==0)
    {if(a[0][1]=='X'&&a[1][1]!='X'&&a[2][1]=='X')
    {
        if(a[1][1]=='.')
        {
            c=1;
            a[1][1]='0';
        }
    }}
    if(c==0)
    {if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]!='X')
    {
        if(a[2][1]=='.')
        {
            c=1;
            a[2][1]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]!='X'&&a[1][2]=='X'&&a[2][2]=='X')
    {
        if(a[0][2]=='.')
        {
            c=1;
            a[0][2]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]=='X'&&a[1][2]!='X'&&a[2][2]=='X')
    {
        if(a[1][2]=='.')
        {
            c=1;
            a[1][2]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]!='X')
    {
        if(a[2][2]=='.')
        {
            c=1;
            a[2][2]='0';
        }
    }
    }
    if(c==0)
    {if(a[1][0]!='X'&&a[1][1]=='X'&&a[1][2]=='X')
    {
        if(a[1][0]=='.')
        {
            c=1;
            a[1][0]='0';
        }
    }}
    if(c==0)
    {if(a[1][0]=='X'&&a[1][1]!='X'&&a[1][2]=='X')
    {
        if(a[1][1]=='.')
        {
            c=1;
            a[1][1]='0';
        }
    }}
    if(c==0)
    {if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]!='X')
    {
        if(a[1][2]=='.')
        {
            c=1;
            a[1][2]='0';
        }
    }}
    if(c==0)
    {if(a[2][0]!='X'&&a[2][1]=='X'&&a[2][2]=='X')
    {
        if(a[2][0]=='.')
        {
            c=1;
            a[2][0]='0';
        }
    }}
    if(c==0)
    {if(a[2][0]=='X'&&a[2][1]!='X'&&a[2][2]=='X')
    {
        if(a[2][1]=='.')
        {
            c=1;
            a[2][1]='0';
        }
    }}
    if(c==0)
    {if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]!='X')
    {
        if(a[2][2]=='.')
        {
            c=1;
            a[2][2]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]!='X'&&a[1][1]=='X'&&a[2][0]=='X')
    {
        if(a[0][2]=='.')
        {
            c=1;
            a[0][2]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]=='X'&&a[1][1]!='X'&&a[2][0]=='X')
    {
        if(a[1][1]=='.')
        {
            c=1;
            a[1][1]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]!='X')
    {
        if(a[2][0]=='.')
        {
            c=1;
            a[2][0]='0';
        }
    }}
    //printf("\n%d",c);
    //scanf("%d",&j);
    if(c==0)
    {
        /*c=0;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                m=rand()%3;
                printf("%d\n",m);
                n=rand()%3;
                printf("%d",n);
                scanf("%d",&m);
                if(a[m][n]=='.')
                {
                    a[i][j]='0';
                    c=1;
                    break;
                }
            }
            if(c==1)
                break;
        }*/
        c=0;
        do
        {
            m=rand()%3;
            n=rand()%3;
            //printf("%d %d",m,n);
            //scanf("%d",&i);
            if(a[m][n]=='.')
            {
                c=1;
            }
        }while(c!=1);
        //printf("%d %d",m,n);
        //scanf("%d",&i);
        a[m][n]='0';
    }
}

int comp(char a[][3])
{
    int c=0,i,j;
    if(a[0][0]!='0'&&a[0][1]=='0'&&a[0][2]=='0')
    {
        if(a[0][0]=='.')
        {
            a[0][0]='0';
            c=1;
        }
    }
    if(c==0)
    { if(a[0][0]=='0'&&a[0][1]!='0'&&a[0][2]=='0')
    {
        if(a[0][1]=='.')
        {
            a[0][1]='0';
            c=1;
        }
    }
    }
    if(c==0)
    {if(a[0][0]=='0'&&a[0][1]=='0'&&a[0][2]!='0')
    {
        if(a[0][2]=='.')
        {
            c=1;
            a[0][2]='0';
        }
    }
    }
    if(c==0)
    {if(a[0][0]!='0'&&a[1][0]=='0'&&a[2][0]=='0')
    {
        if(a[0][0]=='.')
        {
            c=1;
            a[0][0]='0';
        }
    }
    }
    if(c==0)
    {if(a[0][0]=='0'&&a[1][0]!='0'&&a[2][0]=='0')
    {
        if(a[1][0]=='.')
        {
            c=1;
            a[1][0]='0';
        }
    }
    }
    if(c==0)
    {if(a[0][0]=='0'&&a[1][0]=='0'&&a[2][0]!='0')
    {
        if(a[2][0]=='.')
        {
            c=1;
            a[2][0]='0';
        }
    }}
    if(c==0){ if(a[0][0]!='0'&&a[1][1]=='0'&&a[2][2]=='0')
    {
        if(a[0][0]=='.')
        {
            c=1;
            a[0][0]='0';
        }
    }}
    if(c==0){ if(a[0][0]=='0'&&a[1][1]!='0'&&a[2][2]=='0')
    {
        if(a[1][1]=='.')
        {
            c=1;
            a[1][1]='0';
        }
    }}
    if(c==0){ if(a[0][0]=='0'&&a[1][1]=='0'&&a[2][2]!='0')
    {
        if(a[2][2]=='.')
        {
            c=1;
            a[2][2]='0';
        }
    }}
    if(c==0){ if(a[0][1]!='0'&&a[1][1]=='0'&&a[2][1]=='0')
    {
        if(a[0][1]=='.')
        {
            c=1;
            a[0][1]='0';
        }
    }}
    if(c==0)
    {if(a[0][1]=='0'&&a[1][1]!='0'&&a[2][1]=='0')
    {
        if(a[1][1]=='.')
        {
            c=1;
            a[1][1]='0';
        }
    }}
    if(c==0)
    {if(a[0][1]=='0'&&a[1][1]=='0'&&a[2][1]!='0')
    {
        if(a[2][1]=='.')
        {
            c=1;
            a[2][1]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]!='0'&&a[1][2]=='0'&&a[2][2]=='0')
    {
        if(a[0][2]=='.')
        {
            c=1;
            a[0][2]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]=='0'&&a[1][2]!='0'&&a[2][2]=='0')
    {
        if(a[1][2]=='.')
        {
            c=1;
            a[1][2]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]=='0'&&a[1][2]=='0'&&a[2][2]!='0')
    {
        if(a[2][2]=='.')
        {
            c=1;
            a[2][2]='0';
        }
    }
    }
    if(c==0)
    {if(a[1][0]!='0'&&a[1][1]=='0'&&a[1][2]=='0')
    {
        if(a[1][0]=='.')
        {
            c=1;
            a[1][0]='0';
        }
    }}
    if(c==0)
    {if(a[1][0]=='0'&&a[1][1]!='0'&&a[1][2]=='0')
    {
        if(a[1][1]=='.')
        {
            c=1;
            a[1][1]='0';
        }
    }}
    if(c==0)
    {if(a[1][0]=='0'&&a[1][1]=='0'&&a[1][2]!='0')
    {
        if(a[1][2]=='.')
        {
            c=1;
            a[1][2]='0';
        }
    }}
    if(c==0)
    {if(a[2][0]!='0'&&a[2][1]=='0'&&a[2][2]=='0')
    {
        if(a[2][0]=='.')
        {
            c=1;
            a[2][0]='0';
        }
    }}
    if(c==0)
    {if(a[2][0]=='0'&&a[2][1]!='0'&&a[2][2]=='0')
    {
        if(a[2][1]=='.')
        {
            c=1;
            a[2][1]='0';
        }
    }}
    if(c==0)
    {if(a[2][0]=='0'&&a[2][1]=='0'&&a[2][2]!='0')
    {
        if(a[2][2]=='.')
        {
            c=1;
            a[2][2]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]!='0'&&a[1][1]=='0'&&a[2][0]=='0')
    {
        if(a[0][2]=='.')
        {
            c=1;
            a[0][2]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]=='0'&&a[1][1]!='0'&&a[2][0]=='0')
    {
        if(a[1][1]=='.')
        {
            c=1;
            a[1][1]='0';
        }
    }}
    if(c==0)
    {if(a[0][2]=='0'&&a[1][1]=='0'&&a[2][0]!='0')
    {
        if(a[2][0]=='.')
        {
            c=1;
            a[2][0]='0';
        }
    }}
    //printf("%d\n",c);
    //scanf("%d",&j);
    return c;
}

int check(char a[][3],char v)
{
	if(a[0][0]==v&&a[0][0]==a[0][1]&&a[0][1]==a[0][2])
		return 1;
	else if(a[0][0]==v&&a[0][0]==a[1][0]&&a[1][0]==a[2][0])
		return 1;
	else if(a[0][0]==v&&a[0][0]==a[1][1]&&a[1][1]==a[2][2])
		return 1;
	else if(a[0][1]==v&&a[0][1]==a[1][1]&&a[1][1]==a[2][1])
		return 1;
	else if(a[0][2]==v&&a[0][2]==a[1][2]&&a[1][2]==a[2][2])
		return 1;
	else if(a[1][0]==v&&a[1][0]==a[1][1]&&a[1][1]==a[1][2])
		return 1;
	else if(a[2][0]==v&&a[2][0]==a[2][1]&&a[2][1]==a[2][2])
		return 1;
	else if(a[0][2]==v&&a[0][2]==a[1][1]&&a[1][1]==a[2][0])
		return 1;
	return 0;
}
int main()
{
	char a[3][3],ch,p[5],na[10],n1[10],n2[10],m[10],n[10];
	int i,j,c,x=0,y=0,m1,m2,k;
do
{
printf("enter choice");
scanf("%d",&ch);
if(ch==1)
{
    do
    {
		n1[0]='\0';
		n2[0]='\0';
		na[0]='\0';
        for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				a[i][j]='.';
		}
		printf("Enter a name for X player:\n");
		gets(n1);
		printf("Enter a name for O player:\n");
		gets(n2);
		do
		{
			m1=0;
			m2=0;
			c=0;
			printf("Who plays first, %s %s\n",n1,n2);
			gets(na);
			m1=strcmp(n1,na);
			m2=strcmp(n2,na);
			if((m1==0)||(m2==0))
				c=0;
			else
            {
                printf("%s is not a registered player.\n",na);
                c=1;
            }
		}while(c!=0);
		c=0;
		for(x=0;x<3;x++)
		{
			for(y=0;y<3;y++)
				printf("%c ",a[x][y]);
			printf("\n");
		}
		for(i=0;i<9;i++)
		{
			if(i%2==0)
			{
				printf("player of the current turn: %s\n",na);
				ch='X';
			}
			else
			{
				if(m1==0)
				printf("player of the current turn: %s\n",n2);
				else if(m2==0)
				printf("player of the current turn: %s\n",n1);
				ch='O';
			}
            k=0;
            do
            {
                printf("choose a row number (0 to 2) ");
                scanf(" %s",&m);
                if(m[0]!='\0'&&m[1]=='\0')
                {
                    if(m[0]=='0'||m[0]=='1'||m[0]=='2')
                        k=0;
                    else
                    {
                        printf("not a valid number\n");
                        k=1;
                    }
                }
                else
                {
                    printf("not a valid number\n");
                    k=1;
                }
            }while(k!=0);
            k=0;
            do
            {
                printf("choose a column number (0 to 2) ");
                scanf(" %s",&n);
                if(n[0]!='\0'&&n[1]=='\0')
                {
                    if(n[0]=='0'||n[0]=='1'||n[0]=='2')
                        k=0;
                    else
                    {
                        printf("not a valid number\n");
                        k=1;
                    }
                }
                else
                {
                    printf("not a valid number\n");
                    k=1;
                }
            }while(k!=0);
            if(a[m[0]-48][n[0]-48]=='.')
            {
                a[m[0]-48][n[0]-48]=ch;
                system("cls");
                for(x=0;x<3;x++)
                {
                    for(y=0;y<3;y++)
                        printf("%c ",a[x][y]);
                    printf("\n");
                }
            }
            else
            {
                printf("you have choosen wrong place already choosen\n");
                i=i-1;
            }
            c=check(a,ch);
            if(c==1)
            {
                printf("Game is over:\n");
                if(i%2==0)
                    printf("%s wins!\n",na);
                else
                {
                    if(m1==0)
                        printf("%s wins!\n",n2);
                    else if(m2==0)
                        printf("%s wins!\n",n1);
                }
                break;
            }
        }
        if(c==0)
            printf("Game is over:\nit is a tie!\n");
        printf("Would you like to play again? (Y/N)\n");
        gets(p);
        do
        {
            gets(p);
            if((p[0]=='Y'||p[0]=='N')&&p[1]=='\0')
                x=1;
            else
                printf("%s is not a valid answer.\n",p);
        }while(x!=1);
    }while(p[0]!='N');
	printf("Bye!\n");
}
else if(ch==2)
{
    char a[3][3],ch,p[5],na[10],n1[10],n2[10],m[10],n[10];
	int i,j,c,x=0,y=0,m1,m2,k;
	do
	{
		n1[0]='\0';
		n2[0]='\0';
		na[0]='\0';
        for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				a[i][j]='.';
		}
		printf("Enter a name for X player:\n");
		gets(n1);
			m1=0;
			m2=0;
			c=0;
			printf("0 player is computer\n");
			printf("%s play first\n",n1);
		c=0;
		for(x=0;x<3;x++)
		{
			for(y=0;y<3;y++)
				printf("%c ",a[x][y]);
			printf("\n");
		}
		for(i=0;i<=8;i=i+2)
		{
				printf("player of the current turn: %s\n",n1);
				ch='X';
				k=0;
				do
                {
                    printf("choose a row number (0 to 2) ");
                    scanf(" %s",&m);
                    if(m[0]!='\0'&&m[1]=='\0')
                    {
                       if(m[0]=='0'||m[0]=='1'||m[0]=='2')
                            k=0;
                        else
                        {
                            printf("not a valid number\n");
                            k=1;
                        }
                    }
                    else
                    {
                        printf("not a valid number\n");
                        k=1;
                    }
                }while(k!=0);
                k=0;
				do
                {
                    printf("choose a column number (0 to 2) ");
                    scanf(" %s",&n);
                    if(n[0]!='\0'&&n[1]=='\0')
                    {
                        if(n[0]=='0'||n[0]=='1'||n[0]=='2')
                            k=0;
                        else
                        {
                            printf("not a valid number\n");
                            k=1;
                        }
                    }
                    else
                    {
                        printf("not a valid number\n");
                            k=1;
                    }
                }while(k!=0);
                if(a[m[0]-48][n[0]-48]=='.')
                {
                    a[m[0]-48][n[0]-48]=ch;
                    c=check(a,ch);
                    if(c==1)
                    {
                        for(x=0;x<3;x++)
                        {
                            for(y=0;y<3;y++)
                                printf("%c ",a[x][y]);
                            printf("\n");
                        }
                        printf("Game is over:\n");
                        printf("%s wins!\n",n1);
                        break;
                    }
                    if(i==8)
                        break;
                    computer(a);
                    c=check(a,'0');
                    if(c==1)
                    {
                        for(x=0;x<3;x++)
                        {
                            for(y=0;y<3;y++)
                                printf("%c ",a[x][y]);
                            printf("\n");
                        }
                    printf("Game is over:\n");
                    printf("Computer wins\n");
                    break;
                }
                //system("cls");
                for(x=0;x<3;x++)
                {
				for(y=0;y<3;y++)
					printf("%c ",a[x][y]);
				printf("\n");
                }
            }
            else
            {
                printf("you have choosen wrong place already choosen\n");
                i=i-1;
            }
            //printf("I IS %d c is %d \n",i,c);
		}
        if(c==0)
                printf("Game is over:\nit is a tie!\n");
		printf("Would you like to play again? (Y/N)\n");
		gets(p);
		do
		{
            gets(p);
			if((p[0]=='Y'||p[0]=='N')&&p[1]=='\0')
			    x=1;
			else
				printf("%s is not a valid answer.\n",p);
		}while(x!=1);
	}while(p[0]!='N');
	printf("Bye!\n");
}
}
while(ch!=3);
}
