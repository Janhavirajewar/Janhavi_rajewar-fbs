#include<stdio.h>
#include<string.h>
typedef struct player
{
	int jerseyNo;
	char name[100];
	int runs;
	int wicket;
	int matchesplayed;
}player;

void addPlayers(player*,int*);
void storeHardcoded(player*,int*);
void displayAllPlayers(player*,int);
int searchPlayer(player*,int);
void searchbyname(player*,int);
int updatePlayer(player*,int);
void sortPlayerByJerseyNo(player*,int); 
void sortTopThreeByRuns(player*,int);
void showTopThreeByRuns(player*,int);
void sortTopThreeByWickets(player*,int);
void showTopThreeByWickets(player*,int);
int removeplayers(player*,int*);

void main()
{
	player srr[100];
	int count=0;
	int exit;	
	do
	{
		printf("\n-----Menu-----\n");
		printf("\n 1. Store Players");
		printf("\n 2. Display All Players");
		printf("\n 3. Search by Jersey No");
		printf("\n 4. Search by name");
		printf("\n 5. Update Player");
		printf("\n 6. Sort Players by Jersey No");
		printf("\n 7. Sort Players by Runs");
		printf("\n 8. Show Top 3 by Runs");
		printf("\n 9. sort Top 3 by Wickets");
		printf("\n 10. Show Top 3 by Wickets");
		printf("\n 11. Remove Player \n");
		int ch;
		printf("\n Enter choice :\n ");
		scanf("%d",&ch);
		if(ch==1)
		{
			//addPlayers(srr,&count);
			storeHardcoded(srr,&count);
			printf("\n players is added successfully : \n ");
		}
		if(ch==2)
		{
			displayAllPlayers(srr,count);
		}
		else if(ch==3)
		{
			int i=searchPlayer(srr,count);
			if(i!=-1)												
			{
				printf("\n name %s, runs %d ,wicket %d and matchesplayed %d is found at index %d",srr[i].name ,srr[i].runs,srr[i].wicket ,srr[i].matchesplayed,i );
			}
			else
			{
				printf("\n jerseyno is not found");
			}
		}
		else if(ch==4)
		{
			searchbyname(srr,count);
		}
		
		else if(ch==5)
		{
			updatePlayer(srr,count);
		}
		
		else if(ch==6)
		{
			sortPlayerByJerseyNo(srr,count);
			printf("\n sorted players :");
			displayAllPlayers(srr,count);
			printf("\n players are sorted successfully :\n ");
		}
		else if(ch==7)
		{
			sortTopThreeByRuns(srr,count);
		}
		else if(ch==8)
		{
			showTopThreeByRuns(srr,count);
		}
		else if(ch==9)
		{
			sortTopThreeByWickets(srr,count);
		}
		else if(ch==10)
		{
			 showTopThreeByWickets(srr,count);
		}
		
		else if(ch==11)
		{
			int i=removeplayers(srr,&count);
			printf("\n remaining students :");
			displayAllPlayers(srr,count);
			printf("\n players deleted successfully at index %d \n ",i);	
		}
		else if(ch==12)
		{
			printf("\n Invalid Choice ! \n ");
		}
		printf("\n Enter exit to continue print 1 \n:");
		scanf("%d",&exit);
	}while(exit==1);
}

void addPlayers(player*srr,int *count)
{
	int p=*count;
	printf("Enter details of Player %d",p+1);
	printf("\n Enter jerseyNo :");
	scanf("%d",&srr[p].jerseyNo);
	printf("\n Enter name :");
	scanf("%s",srr[p].name);
	printf("\n Enter runs :");
	scanf("%d",&srr[p].runs);
	printf("\n Enter wicket :");
	scanf("%d",&srr[p].wicket);
	printf("\n Enter matchesplayed :");
	scanf("%d",&srr[p].matchesplayed);
	
	(*count)++;
}
void storeHardcoded(player*srr,int*count)
{
strcpy(srr[0].name, "Virat Kohli");
    srr[0].jerseyNo = 18;
    srr[0].runs = 600; 
	srr[0].wicket = 12;
	srr[0].matchesplayed = 6;

    strcpy(srr[1].name, "Rohit Sharma");
    srr[1].jerseyNo = 45;
    srr[1].runs = 720; 
	srr[1].wicket = 5; 
	srr[1].matchesplayed = 7;

    strcpy(srr[2].name, "MS Dhoni");
    srr[2].jerseyNo = 7;
    srr[2].runs = 800; 
	srr[2].wicket = 2; 
	srr[2].matchesplayed = 8;

    strcpy(srr[3].name, "KL Rahul");
    srr[3].jerseyNo = 1;
    srr[3].runs = 540; 
	srr[3].wicket = 6; 
	srr[3].matchesplayed = 5;

    strcpy(srr[4].name, "Mohammed Shami");
    srr[4].jerseyNo = 11;
    srr[4].runs = 200;
	srr[4].wicket = 18;
	srr[4].matchesplayed = 6;

    strcpy(srr[5].name, "Jasprit Bumrah");
    srr[5].jerseyNo = 93;
    srr[5].runs = 150;
	srr[5].wicket = 20;
	srr[5].matchesplayed = 6;

    strcpy(srr[6].name, "Ravichandran Ashwin");
    srr[6].jerseyNo = 99;
    srr[6].runs = 230; 
	srr[6].wicket = 22; 
	srr[6].matchesplayed = 7;

    strcpy(srr[7].name, "Ravindra Jadeja");
    srr[7].jerseyNo = 8;
    srr[7].runs = 300; 
	srr[7].wicket = 14;
	 srr[7].matchesplayed = 6;

    strcpy(srr[8].name, "Ishan Kishan");
    srr[8].jerseyNo = 23;
    srr[8].runs = 410; 
	srr[8].wicket = 1;
	srr[8].matchesplayed = 5;

    strcpy(srr[9].name, "Kartik Sharma");  // Same surname as Rohit
    srr[9].jerseyNo = 77;
    srr[9].runs = 530;
	 srr[9].wicket = 0;
	 srr[9].matchesplayed = 6;

    *count = 10;
	*count = 10;
}
void displayAllPlayers(player*srr,int count)
{
	for(int i=0;i<count;i++)
	{
		printf("\n\n Deatils of player %d \n",i+1);
		printf("\n jerseyNo %d",srr[i].jerseyNo);
		printf("\n name %s",srr[i].name);
		printf("\n runs %d",srr[i].runs);
		printf("\n wicket %d",srr[i].wicket);
		printf("\n matchesplayed %d",srr[i].matchesplayed);
	}
}

int searchPlayer(player*srr,int count)
{
	int jerseyno;
	printf("\n Enter jerseyno you have to search :");
	scanf("%d",&jerseyno);
	for(int i=0;i<count;i++)
	{
		if(srr[i].jerseyNo==jerseyno)
		{
			return i;
		}	
	}
	return -1;
}

void searchbyname(player*srr,int count)
{
    char search[50];
    int f = 0;
    printf("\nEnter surname to search: ");
    scanf("%s",search);
	strlwr(search);
    for (int i = 0; i < count; i++)
	 {
	 	 char temp[100];
        strcpy(temp,srr[i].name);
        strlwr(temp);
        if (strstr(temp,search)!= NULL)
		 {
            printf("\n--- Player Found ---");
            printf("\nJersey No: %d", srr[i].jerseyNo);
            printf("\nName: %s", srr[i].name);
            printf("\nRuns: %d", srr[i].runs);
            printf("\nWickets: %d", srr[i].wicket);
            printf("\nMatches Played: %d\n", srr[i].matchesplayed);
            f = 1;
        }
    }
      if (f == 0) {
        printf("\nNo players found with that surname.\n");
    }
}
int updatePlayer(player*srr,int count)
{
	int jerseyno,f=0;
	printf("\n Enter jerseyno you have to update :");
	scanf("%d",&jerseyno);
	for(int i=0;i<count;i++)
	{
		if(srr[i].jerseyNo==jerseyno)
		{
			printf("\n Enter new name :");
			scanf("%s",srr[i].name);
			printf("\n Enter runs :");
			scanf("%d",&srr[i].runs);
			printf("\n Enter wickets :");
			scanf("%d",&srr[i].wicket);
			printf("\n Enter matchesplayed :");
			scanf("%d",&srr[i].matchesplayed);
			printf("\n player on %d index is updated successfully :",i);
			f=1;
			break;
		}
	}
	if(f!=1)
	{
		printf("\n jerseyno is not found :");
	}
}

void sortPlayerByJerseyNo(player*srr,int count)    // in accending order
{
	
	player temp;
	for(int i=0;i<count-1;i++)  
	{
		for(int j=0;j<count-i-1;j++)
		{
			 if (srr[j].jerseyNo > srr[j + 1].jerseyNo) 
			{
                temp = srr[j];
                srr[j] = srr[j + 1];
                srr[j + 1] = temp;
            }
		}
	}
}
void sortTopThreeByRuns(player*srr,int count)
{
	player temp;
	for(int i=0;i<count-1;i++)
	{
		for(int j=0;j<count-i-1;j++)
		{
			if(srr[j].runs > srr[j+1].runs)
			{
				temp=srr[j];
				srr[j]=srr[j+1];
				srr[j+1]=temp;	
			}
		}	
	}
}
void showTopThreeByRuns(player*srr,int count)
{
	sortTopThreeByRuns(srr,count);
	printf("\n top three players by Runs: \n");
	for(int i = count-1 ;i >= count-3 && i >= 0 ;i--)
	{
		printf("\n");
		printf("\n runs %d :",srr[i].runs);
		printf("\n jerseyno %d :",srr[i].jerseyNo);
		printf("\n name %s :",srr[i].name);
		printf("\n wickets %d  :",srr[i].wicket);
		printf("\n matchesplayes %d :",srr[i].matchesplayed);
	}
}
void sortTopThreeByWickets(player*srr,int count)
{
	player temp;
	for(int i=0;i<count-1;i++)
	{
		for(int j=0;j<count-i-1;j++)
		{
			if(srr[j].wicket > srr[j+1].wicket)
			{
				temp=srr[j];
				srr[j]=srr[j+1];
				srr[j+1]=temp;	
			}
		}	
	}
}

void showTopThreeByWickets(player*srr,int count)
{
	sortTopThreeByWickets(srr,count);
	printf("\n top three players by Wickets: \n ");
	for(int i = count-1 ;i >= count-3 && i >= 0 ;i--)
	{
		printf("\n");
		printf("\n wickets %d :",srr[i].wicket);
		printf("\n jerseyno %d:",srr[i].jerseyNo);
		printf("\n name %s:",srr[i].name);
		printf("\n runs %d:",srr[i].runs);
		printf("\n matchesplayes %d:",srr[i].matchesplayed);
	}
}
int removeplayers(player*srr,int*count)
{
	int index = searchPlayer(srr, *count);
	if(index!=-1)
	{		
	    for (int i = index; i < *count - 1; i++)
	    {
	        srr[i] = srr[i + 1];
	    }
	    (*count)--;	       
	}
	return index;
}
	
