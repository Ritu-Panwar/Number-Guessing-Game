#include<iostream>
#include<cstdlib>           //This library is used because we are using rand() and srand() function....
#include<ctime>             //This library is used because we are using time(0) function....
using namespace std;

void NumberGuessingGame()
{      
    cout<<"\n\t\t\t\t\tWelcome to Number Guessing Game!!"<<endl;
    cout<<"\n\tYou have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. \n\t\t\t\t\t\tBest of Luck :-)"<<endl;
    
    while(1)
    {
    	cout<<"\n\t\t\t\t\t Enter the difficulty Levels:"<<endl;
    	cout<<"\n\t\t\t\t\t\tLevel 1 : Easy!";
    	cout<<"\n\t\t\t\t\t\tLevel 2 : Medium!";
    	cout<<"\n\t\t\t\t\t\tLevel 3 : Difficult!";
    	cout<<"\n\t\t\t\t\t\tLevel 4 : Very Difficult!";
    	cout<<"\n\t\t\t\t\t\tPress '0' for Exit Game!"<<endl;
    	
    	int levelChoice;
    	cout<<"\nEnter the Level in which you want to play: ";
    	cin>>levelChoice;
    	
    	// srand function is used to generate the random function....
        // this function will generate the different random number at every time
    	srand(time(0));
    	
    	// Formula is:- [int random = offset + (rand() % range);]
    	// rand() function returns the random number....
    	int secretNumber = 1 + (rand() % 100);              // It'll generate the random number in between the range of 1 to 100
    	int playerChoice;	
		
		switch(levelChoice)
		{
			case 1:
			{
				cout<<"You have 10 choices for finding the secret number between 1 and 100."<<endl;
    		    int choicesLeft = 10;
    		    for(int i=1;i<=10;i++)
    		    {
    			    cout<<"\nEnter the secret number: ";
    			    cin>>playerChoice;
    			    if(playerChoice==secretNumber)
    			    {
    				cout<< "Well played! You won, "<<playerChoice<<" is the secret number"<<endl;
    				cout<<"\n\t\t\t\t\t\tGame Over!!"<<endl;
    				cout<<"\n\t\t\t\t\t  Thanks for playing...."<<endl;
    				cout<<"\n\t\t\t\t\tPlay the game again with us!!"<<endl;
    				break;
				}
				else
				{
					cout<<"Nope, "<<playerChoice<<" is not the right number.";
					if(playerChoice>secretNumber)
					{
						cout<<"\t\nThe secret number is smaller than the number you have chosen."<<endl;
					}
					else
					{
						cout<<"\t\nThe secret number is greater than the number you have chosen"<<endl;
					}
					choicesLeft--;               //Post Decrement Operator
					cout<<"\t\t\t\t\t\t"<<choicesLeft<<" choices Left...."<<endl;
					if(choicesLeft==0)
					{
						cout<<"\n\t\t\t\t\t\tGame Over!!"<<endl;
						cout<<"\n\t\t\t You couldn't find the secret Number, it was " <<secretNumber<<" ,You Lose!!"<<endl;
						cout<<"\n\t\t\t\t\tPlay the game again to Win!!!!"<<endl;
					}
				}
			}
				break;
			}
			
			
			case 2:
			{
				cout<<"You have 7 choices for finding the secret number between 1 and 100."<<endl;
    	    	int choicesLeft = 7;
    		    for(int i=1;i<=7;i++)
    		    {
    			    cout<<"\nEnter the number: ";
    			    cin>>playerChoice;
    			    if(playerChoice==secretNumber)
    			    {
    				    cout<< "Well played! You won, "<<playerChoice<<" is the secret number"<<endl;
    				    cout<<"\n\t\t\t\t\t\tGame Over!!"<<endl;
    				    cout<<"\n\t\t\t\t\t  Thanks for playing...."<<endl;
    				    cout<<"\n\t\t\t\t\tPlay the game again with us!!"<<endl;
    				    break;
				    }
				    else
				    {
					    cout<<"Nope, "<<playerChoice<<" is not the right number.";
					    if(playerChoice>secretNumber)
					    {
					    	cout<<"\t\nThe secret number is smaller than the number you have chosen."<<endl;
					    }
					    else
					    {
						    cout<<"\t\nThe secret number is greater than the number you have chosen"<<endl;
					    }
					    choicesLeft--;               //Post Decrement Operator
					    cout<<"\t\t\t\t\t\t"<<choicesLeft<<" choices Left...."<<endl;
					    if(choicesLeft==0)
					    {
						    cout<<"\n\t\t\t\t\t\tGame Over!!"<<endl;
					        cout<<"\n\t\t\t You couldn't find the secret Number, it was " <<secretNumber<<" ,You Lose!!"<<endl;
						    cout<<"\n\t\t\t\t\tPlay the game again to Win!!!!"<<endl;
					    }
				    }
			    }
				break;
			}
			
			case 3:
			{
		      	cout<<"You have 5 choices for finding the secret number between 1 and 100."<<endl;
    		    int choicesLeft = 5;
    		    for(int i=1;i<=5;i++)
    		    {
    			    cout<<"\nEnter the number: ";
    			    cin>>playerChoice;
    			    if(playerChoice==secretNumber)
    			    {
    				    cout<< "Well played! You won, "<<playerChoice<<" is the secret number"<<endl;
    				    cout<<"\n\t\t\t\t\t\tGame Over!!"<<endl;
    				    cout<<"\n\t\t\t\t\t  Thanks for playing...."<<endl;
    				    cout<<"\n\t\t\t\t\tPlay the game again with us!!"<<endl;
    				    break;
				    }
				    else
				    {
					    cout<<"Nope, "<<playerChoice<<" is not the right number.";
					    if(playerChoice>secretNumber)
					    {
						    cout<<"\t\nThe secret number is smaller than the number you have chosen."<<endl;
					    }
					    else
					    {
						    cout<<"\t\nThe secret number is greater than the number you have chosen"<<endl;
					    }
					    choicesLeft--;               //Post Decrement Operator
					    cout<<"\t\t\t\t\t\t"<<choicesLeft<<" choices Left...."<<endl;
					    if(choicesLeft==0)
					    {
						    cout<<"\n\t\t\t\t\t\tGame Over!!"<<endl;
						    cout<<"\n\t\t\t You couldn't find the secret Number, it was " <<secretNumber<<" ,You Lose!!"<<endl;
						    cout<<"\n\t\t\t\t\tPlay the game again to Win!!!!"<<endl;
					    }
				    }
			    }
				break;
			}
			
			case 4:
			{
		      	cout<<"You have 3 choices for finding the secret number between 1 and 100."<<endl;
    		    int choicesLeft = 3;
    		    for(int i=1;i<=3;i++)
    		    {
    			    cout<<"\nEnter the number: ";
    			    cin>>playerChoice;
    			    if(playerChoice==secretNumber)
    			    {
    				    cout<< "Well played! You won, "<<playerChoice<<" is the secret number"<<endl;
    				    cout<<"\n\t\t\t\t\t\tGame Over!!"<<endl;
    				    cout<<"\n\t\t\t\t\t  Thanks for playing...."<<endl;
    				    cout<<"\n\t\t\t\t\tPlay the game again with us!!"<<endl;
    				    break;
				    }
				    else
				    {
					    cout<<"Nope, "<<playerChoice<<" is not the right number.";
					    if(playerChoice>secretNumber)
					    {
						    cout<<"\t\nThe secret number is smaller than the number you have chosen."<<endl;
					    }
					    else
					    {
						    cout<<"\t\nThe secret number is greater than the number you have chosen"<<endl;
					    }
					    choicesLeft--;               //Post Decrement Operator
					    cout<<"\t\t\t\t\t\t"<<choicesLeft<<" choices Left...."<<endl;
					    if(choicesLeft==0)
					    {
						    cout<<"\n\t\t\t\t\t\tGame Over!!"<<endl;
						    cout<<"\n\t\t\t You couldn't find the secret Number, it was " <<secretNumber<<" ,You Lose!!"<<endl;
						    cout<<"\n\t\t\t\t\tPlay the game again to Win!!!!"<<endl;
					    }
				    }
			    }
				break;
			}
		
			case 0:
			{
				exit(0);
				break;
			}
			  
			default:
			{
			    cout << "Wrong choice, Enter valid choice to play the game! (0,1,2,3)"<<endl;
		    }
		}
	}
}

int main()
{
	NumberGuessingGame();
}
