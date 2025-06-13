void consonentvowel();

void main()
{
	
	consonantvowel();
}                         // main ends here

	void consonantvowel()
	{

			char ch;
			printf("enter character: ");
			scanf("%c",&ch);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			{
				printf("\n %c character is vowel",ch);
				
			}
			
			else
			{
				printf("\n %c character is consonent",ch);
			}   // defination ends here
                                                        
	}