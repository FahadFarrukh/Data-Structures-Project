#include <iostream>
#include <bits/stdc++.h>
#include <stack>

using namespace std;

class Node {
	public:
			string Name;
			long long int pnumber;
			string Destination;
			int Cost;
		Node* next;
		Node* prev;
};

void insertAtEnd(Node** head_ref, string Name1,long long int pnumber1,string Destination1,int Cost1, Node** tail_ref) {
	Node* Record = new Node();
	Record->Name=Name1;
	Record->pnumber=pnumber1;
	Record->Destination=Destination1;
	Record->Cost=Cost1;
	Record->next=NULL;
	
	if((*head_ref) ==NULL ){
		(*head_ref)= Record;
		(*tail_ref)=(*head_ref);
		(*head_ref)->prev=NULL;
	}
	else {
		(*tail_ref)->next= Record;
		(*tail_ref)->next->prev= (*tail_ref);
		(*tail_ref)=(*tail_ref)->next;
	}
}
void printList(Node* head) {
	Node* temp = head;
	
	while(temp != NULL) {
		cout<<"\n\n";
		cout<<temp->Name << "  ";
		cout<<temp->pnumber << "  ";
		cout<<temp->Destination << "  ";
		cout<<temp->Cost << "  ";
		temp = temp->next;
		
	}
}
int Search(Node** head_ref, string DeleteName)
{
 
    // Stores head Node
    Node* curr = *head_ref;
 
    // Stores position of the integer
    // in the doubly linked list
    int pos = 0;
 
    // Traverse the doubly linked list
    while (curr->Name != DeleteName
           && curr->next != NULL) {
 
        // Update pos
        pos++;
 
        // Update temp
        curr = curr->next;
    }
 
    // If the integer not present
    // in the doubly linked list
    if (curr->Name != DeleteName)
        return -1;
 
    
    return (pos + 1);
    delete curr;
}
void Delete(Node** head_ref,int b,int a,Node** tail_ref){
	Node* abc = *head_ref;
	Node* TemporaryNode = new Node();
	
	do{
		abc=abc->next;
		b++;
	}
	while(b!=a-1);
	if(abc->next!=NULL && abc->prev!=NULL){
		abc->prev->next=abc->next;
    	abc->next->prev=abc->prev;
    	delete abc;
	}
	else if(abc->next==NULL && abc->prev!=NULL){
		(*tail_ref)=abc->prev;
		abc->prev->next=NULL;
		abc->prev=TemporaryNode;
		delete abc;
		delete TemporaryNode;
		return;
		
	
}
}
void bubblesort(int array[],int size){
	int i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(array[j]>array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
int arraysearch(int array[], int elementxyz, int size) {
	for (int i = 0; i < size; i++) {
		if (array[i] == elementxyz) {
			return i;
		}
	}
	return -1;
}
int main()
{
	string email, password;
	string DeleteName;
	int choice;
	int choice1;
	Node* head = NULL;
	Node* tail = NULL;
	Node* curr = NULL;
	string Name1;
	long long int pnumber1;
	string Destination1;
	int Cost1;
	int a;
	int b;
	char back;
	int size;
	size=6;
	int i;
	int ticket;
	int sum;
	long long int cc;
	int cp;
	int elementxyz;
	int result;
	int payment;
	int array[]={25000,18000,30000,65000,45000,100000};
	stack<int> st;
	
		do{
		cout<<"\nEnter Your Username : ";
		cin>>email;
		cout<<"\nEnter Your Password : ";
		cin>>password;
		if(email!="fahad1" || password!="abc123"){
			cout<<"\nIncorrect Email or Password!\n";
		}
	}
	
	while(email!="fahad1" || password!="abc123");
	
	
		do{
			system("cls");
			cout<<"\n*********************************************";
			cout<<"\n*        Flight Management System           *";
			cout<<"\n*********************************************";
			cout<<"\n1. Destinations and Airlines.";
			cout<<"\n2. Ticket Reservation.";
			cout<<"\n3. Billing.";
			cout<<"\n4. View Details.";
			cout<<"\n5. Remove Ticket Reservation.";
			cout<<"\n6. Cheapest Airline.";
			cout<<"\n7. Suitable Ticket.";
			cout<<"\n8. Exit.";
			cout<<"\n\nPlease choose an option from above : ";
			cin>>choice;
			switch ( choice ) {
				case 1:
					system("cls");
				    cout<<"\n*********************************************";
					cout<<"\n*        Flight Management System           *";
					cout<<"\n*********************************************";
				    cout<<"\n  *      Destinations and Airlines       *";
				    cout<<"\n  ****************************************";
				    cout<<"\n\nDomestic flights available are : \n";
				    cout<<"\n1. Karachi to Lahore  [PIA]  Ticket Cost: Rs25000 ";
				    cout<<"\n2. Quetta to Peshawar  [AIRSIAL]  Ticket Cost: Rs18000 ";
				    cout<<"\n3. Islamabad to Karachi  [SERENE]  Ticket Cost: Rs30000 ";
				    cout<<"\n\nInternational flights available are : \n";
				    cout<<"\n4. Karachi to Istanbul  [TURKISH AIRLINES]  Ticket Cost: Rs65000 ";
				    cout<<"\n5. Lahore to Abu Dhabi  [EMIRATES]  Ticket Cost: Rs45000 ";
				    cout<<"\n6. Islamabad to Sydney  [QATAR AIRWAYS]  Ticket Cost: Rs100000 \n";
				    cout<<"\n\nPress any letter to go back to main page. ";
				    cout<<"\n";
				    cin>>back;
					break;
					
	 	       case 2:
	 	       	ticket++;
	 	 			system("cls");
				 	cout<<"\n*********************************************";
					cout<<"\n*        Flight Management System           *";
					cout<<"\n*********************************************";
				    cout<<"\n     *      Ticket Reservation       *";
				    cout<<"\n     *********************************";		
	 	 			cout<<"\n\nEnter Your Name : ";
					cin>>Name1;
					cout<<"\nEnter Your Phone Number : ";
					cin>>pnumber1;
					cout<<"\nSelect Your Destination : ";
					cout<<"\n1. Karachi to Lahore  [PIA]  Ticket Cost: Rs25000 ";
					cout<<"\n2. Quetta to Peshawar  [AIRSIAL]  Ticket Cost: Rs18000 ";
					cout<<"\n3. Islamabad to Karachi  [SERENE]  Ticket Cost: Rs30000 ";
					cout<<"\n4. Karachi to Istanbul  [TURKISH AIRLINES]  Ticket Cost: Rs65000 ";
					cout<<"\n5. Lahore to Abu Dhabi  [EMIRATES]  Ticket Cost: Rs45000 ";
					cout<<"\n6. Islamabad to Sydney  [QATAR AIRWAYS]  Ticket Cost: Rs100000 \n";
					cout<<"\nYour destination is : ";
					cin>>choice1;
					if (choice1==1){
						Destination1="Karachi to Lahore [PIA] ";
						Cost1=25000;
						st.push(25000);
					}
					else if (choice1==2){
						Destination1="Quetta to Peshawar [AIRSIAL] ";
						Cost1=18000;
						st.push(18000);
					}
					else if (choice1==3){
						Destination1="Islamabad to Karachi [SERENE] ";
						Cost1=30000;
						st.push(30000);
						
					}
					else if (choice1==4){
						Destination1="Karachi to Istanbul [TURKISH AIRLINES] ";
						Cost1=65000;
						st.push(65000);
					}
					else if (choice1==5){
						Destination1="Lahore to Abu Dhabi [EMIRATES] ";
						Cost1=45000;
						st.push(45000);
					}
					else if (choice1==6){
						Destination1="Islamabad to Sydney [QATAR AIRWAYS] ";
						Cost1=100000;
						st.push(100000);
					}
					else {
						cout<<"Error: Enter a valid Destination";
						Destination1="No Destination Selected";
						
					}
					insertAtEnd(&head, Name1,pnumber1,Destination1, Cost1, &tail);
			
	 				 break;
	 				 case 3:
	 				 		system("cls");
				 	cout<<"\n*********************************************";
					cout<<"\n*        Flight Management System           *";
					cout<<"\n*********************************************";
				    cout<<"\n          *      Billing       *";
				    cout<<"\n          **********************";	
				    sum=0;
				    if(ticket!=0){
				    	cout<<"\n\nYour "<<ticket<<" ticket reservation prices are : \n" ;	
					}
	 				 	
	 				 	 if(st.empty()){
	 				 		cout<<"\n\n\nPlease reserve tickets first.";
	 				 		
						  }
	 				 	 while (!st.empty()) {
        cout <<"Rs "<< st.top()<<endl;
        sum=sum+st.top();
        st.pop();
        
        
    }
   if(ticket!=0){
   	cout<<"\nYour Total amount will be : Rs "<<sum;
   	cout<<"\n\n\nPlease choose an option to pay : \n1. Credit Card\n2. Cash\n";
   	cin>>payment;
   	if(payment==1){
   		cout<<"\n\nEnter your Credit Card Number : ";
   		cin>>cc;
   		cout<<"\nEnter your Credit Card PIN : ";
   		cin>>cp;
   		cout<<"\nRs "<<sum<<" has been deducted from your account successfully.";
   		cout<<"\n\nYour tickets have been confirmed. :)";
   		
	   }
	    	if(payment==2){
   		cout<<"\n\nPlease visit your nearest airline office for payment";
   		cout<<"\n\nYour tickets will be confirmed after payment.";
   		
	   }
   	
   }
    
    ticket=0;
    cout<<"\n\n\nPress any letter to go back to main page. \n";
	cin>>back;
    break;
	 		 case 4:
		 	 	system("cls");
		 	 	cout<<"\n*********************************************";
				cout<<"\n*        Flight Management System           *";
				cout<<"\n*********************************************";
			    cout<<"\n    *        Ticket Details       *";
			    cout<<"\n    *******************************";
		 	 	cout<<"\n\n";
		 	 	cout<<"\nOrder of display is (Name, Phone Number, Destination and Airline, Cost)\n";
		 	 	printList(head);
		 	 	cout<<"\n\n\n\nPress any letter to go back to main page. \n";
		 	 	cin>>back;
	 		 	break;
	 		 
	 	 	  case 5:
	 	 	  	system("cls");
	 	 	    cout<<"\n*********************************************";
				cout<<"\n*         Flight Management System          *";
				cout<<"\n*********************************************";
			    cout<<"\n      *   Remove Ticket Reservation   *";
			    cout<<"\n      *********************************";
			    cout<<"\n\nNote : First Ticket cannot be deleted.";
			    cout<<"\n\nEnter the name of the ticket holder you want to delete : ";
		 	    cin>>DeleteName;
		 	    Search(&head,DeleteName);
	 	  
	 	        a=Search(&head,DeleteName);
                if (a == -1)
				{
					cout << "\n\nDetails not found.";
					cout<<"\n\n\nPress any letter to go back to main page.";
			 		cin>>back;
					break;
				}
				else if(a==1){
					cout<<"\n\nError : First Ticket cannot be deleted.";
					cout<<"\n\n\nPress any letter to go back to main page. \n";
	 			 	cin>>back;
					break;
				}
				b=0;
	   			Delete(&head,b,a,&tail);
	    		cout<<"\nYour Ticket has been deleted successfully.";
				cout<<"\n\n\nPress any letter to go back to main page. \n";
	 	 		cin>>back;
	 	  		break;
	 	     case 6:
	 	 		system("cls");
                cout<<"\n*********************************************";
				cout<<"\n*        Flight Management System           *";
				cout<<"\n*********************************************";
			    cout<<"\n    *        Cheapest Tickets      *";
			    cout<<"\n    ********************************";
			    cout<<"\n\nThe Cheapest To Most Expensive Tickets are : \n";
			    cout<<"\n1. Quetta to Peshawar [AIRSIAL]";
			   	cout<<"\n2. Karachi to Lahore [PIA]";
				cout<<"\n3. Islamabad to Karachi [SERENE]";
				cout<<"\n4. Lahore to Abu Dhabi [EMIRATES]";
				cout<<"\n5. Karachi to Istanbul [TURKISH AIRLINES]";
				cout<<"\n6. Islamabad to Sydney [QATAR AIRWAYS]\n";
				cout<<"\nThe prices below are according to the order of destinations above : \n\n";
			    bubblesort(array,size);
			    for(i=0;i<size;i++){
				cout<<"Rs "<<array[i]<<endl;}
				cout<<"\n\nPress any letter to go back to main page. \n";
	 		 	cin>>back;
	 	 		break;
	 	     case 7:
	 	     		system("cls");
                cout<<"\n*********************************************";
				cout<<"\n*        Flight Management System           *";
				cout<<"\n*********************************************";
			    cout<<"\n    *        Suitable Ticket      *";
			    cout<<"\n    *******************************";
	 	 cout << "\n\nEnter any price to find a suitable ticket according to it : ";
      	cin >> elementxyz;

	result = arraysearch(array, elementxyz, size);
	if (result == -1)
	{
		cout << "\nNo ticket of this price.";
	}
		else if (result==0){
						cout<<"\nKarachi to Lahore [PIA] ";
					
					}
					else if (result==1){
						cout<<"\nQuetta to Peshawar [AIRSIAL] ";
					
					}
					else if (result==2){
						cout<<"\nIslamabad to Karachi [SERENE] ";
					
						
					}
					else if (result==3){
						cout<<"\nKarachi to Istanbul [TURKISH AIRLINES] ";
					
					}
					else if (result==4){
						cout<<"\nLahore to Abu Dhabi [EMIRATES] ";
					
					}
					else if (result==5){
						cout<<"\nIslamabad to Sydney [QATAR AIRWAYS] ";
					
					}
		
	
		cout<<"\n\nPress any letter to go back to main page. \n";
		 	 	cin>>back;
	 	 		break;	
	 	 		case 8:
	 	 		cout<<"\n\nThank You for visiting us. :) \n";
	 	 		cout<<"\n\nThis system was created by Fahad Farrukh. \n";
	 	 		break;
		default:
				system("cls");
			    cout<<"\n*************************";
				cout<<"\n*         Error         *";
				cout<<"\n*************************";
	 			cout<<"\n\nError: Enter a valid choice.";
		    	cout<<"\n\nPress any letter to go back to main page. \n";
		 	 	cin>>back;
		 		break;
				}
		}
		while(choice!=8);
		}
