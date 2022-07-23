// Vowels & Consonant

#include<iostream>
using namespace std;

main()
{
	char alpha;
	
	cout<<"Enter Any Alphabet :";
	cin>>alpha;
	
	switch(alpha)
	{
		case 'a':
			case 'A':
				case 'e':
					case 'E':
						case 'i':
							case 'I':
								case 'o':
									case 'O':
										case 'u':
											case 'U':
							cout<<endl<<"Character Is Vowel";
							break;
		default:
			cout<<endl<<"Character Is Consonant";
			break;		
	}
}
