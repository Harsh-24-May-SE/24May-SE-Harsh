// Vowel And Consonant

#include<stdio.h>

main()
{
	char alphabet;
	
	printf("Enter Any Alphabet :");
	scanf("%c",&alphabet);
	
	switch(alphabet)
	{
		case 'a':
			case 'e':
				case 'i':
					case 'o':
						case 'u':
							case 'A':
								case 'E':
									case 'I':
										case 'O':
											case 'U':
							printf("\nThis is Vowel");
							break;
							
		default:
			printf("\nThis is Consonant");
			break;
	}
}
/*
	char alphabet;
	
	printf("Enter Any Alphabet :");
	scanf("%c",&alphabet);
	
	if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u')
	{
		printf("Character is Vowel");
	}
	else
	{
		printf("Character is Consonent");
	}
*/
