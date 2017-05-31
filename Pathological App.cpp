#include <iostream>   //Includes cin,cout .etc functions
#include<cstdio>      //Includes printf,scanf functions
#include <cstring>    //Include String functions
#include<vector>      //Include the Vector Container for storing values
#include<cstdlib>     //Includes Various functions
#include<fstream>     //Used for file Handling
#include<windows.h>   //remove for linux


using namespace std;  //It Brings all identifiers under global scope

    const int A_possible = 1, B_possible = 2, AB_possible = 4, O_possible = 8;      //Declarations of Return Values
    const int ALL_possible = A_possible | B_possible | AB_possible | O_possible;
    const int NONE_possible = 0;


//void gotoxy(int x,int y)   //Declaration of gotoxy function
//{
//printf("%c[%d;%df",0x1B,y,x);
//}


void gotoxy(short x,short y)
{
COORD pos={x,y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

class Application             //Declaration of class Application for binding data and functions
{
    private:                  //Private access specifier,,only functions belongs to class application can access this data 
            
    char name[20];            //Declarations
    char Blood_Group[3];                
    float haemoglobin;
    float Crystals;
    long int Epithelial_Cells,Albumin;
    long int age,RBC,WBC,MCH,Basophils;
    long int Lemphocytes,Neutrophils,Eosinophils;
    long int Platelate_Count,Monocytes,Bile_Salts;
    
    
    public:
           
    void DisplayApplication()  //Function displays application
    {
      system("cls");   //system("clear");
      
      gotoxy(29,3);
	  cout<<"Test Samples of Blood";
	  
	  gotoxy(4,6);
	  cout<<"Patient Name: ";
	  
	  gotoxy(4,8);            //gotoxy function for specific area on screen
	  cout<<"Patient Age: ";
	  
	  gotoxy(4,10);           //gotoxy  passing x and y co-ordinates on screen 
	  cout<<"Blood Group: ";
	  
      gotoxy(4,12);
	  cout<<"RBC Count: ";
	  
      gotoxy(4,14);
	  cout<<"WBC Count: ";
	  
	  gotoxy(4,16);
	  cout<<"Haemoglobin: ";
	  
	  gotoxy(4,18);
	  cout<<"Lemphocytes: ";
	  
	  gotoxy(4,20);
	  cout<<"Neutrophil: ";
	  
	  gotoxy(4,22);
	  cout<<"Eosinophils: ";
	  
	  gotoxy(48,6);
	  cout<<"Monocytes: ";

	  gotoxy(48,8);
	  cout<<"Basophils: ";

      gotoxy(48,10);
	  cout<<"MCH: ";
	  
	  gotoxy(48,12);
	  cout<<"Platelate Count: ";
	  
	  gotoxy(48,14);
	  cout<<"Epithelial Cells: ";
	  
	  gotoxy(48,16);
	  cout<<"Crystals: ";

	  gotoxy(48,18);
	  cout<<"Bile Salts: ";
	  
	  gotoxy(48,20);
	  cout<<"Albumin: ";
	  }
	  
      void GetInputData()   //Function for getdata from user
	  
      {
      gotoxy(18,6);
      cin>>name;
      
	  gotoxy(17,8);
      
      cin>>age;            
	  while(!cin)      //Integer Validation Statements
      {cin.clear();
      	cin.ignore();
      	gotoxy(17,8);
      	cin>>age;}

	  gotoxy(17,10);
	  cin>>Blood_Group;
	  
	  gotoxy(15,12);
	  
	  cin>>RBC;
	  while(!cin)     //This statements only accepts integer values
      {cin.clear();
      	cin.ignore();
      	gotoxy(15,12);
      	cin>>RBC;}

	  
	  gotoxy(15,14);
	  
	  cin>>WBC;
	  while(!cin)       
      {cin.clear(); 
      	cin.ignore();     //cin.ignore() used to accept only integer values
      	gotoxy(15,14);
      	cin>>WBC;}
	  
	  gotoxy(17,16);
	  
	  cin>>haemoglobin;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(17,16);
      	cin>>haemoglobin;}
	  
	  gotoxy(17,18);
	  
	  cin>>Lemphocytes;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(17,18);
      	cin>>Lemphocytes;}
	  
	  gotoxy(16,20);
	  
	  cin>>Neutrophils;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(16,20);
      	cin>>Neutrophils;}
	  
	  gotoxy(17,22);
	  
	  cin>>Eosinophils;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(17,22);
      	cin>>Eosinophils;}
	  
	  gotoxy(59,6);
	  
	  cin>>Monocytes;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(59,6);
      	cin>>Monocytes;}
	  
	  gotoxy(59,8);
	  
	  cin>>Basophils;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(59,8);
      	cin>>Basophils;}
	  
	  gotoxy(53,10);
	  
	  cin>>MCH;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(53,10);
      	cin>>MCH;}
	  
	  gotoxy(65,12);
	  
	  cin>>Platelate_Count;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(65,12);
      	cin>>Platelate_Count;}
	  
	  gotoxy(66,14);
	  
	  cin>>Epithelial_Cells;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(66,14);
      	cin>>Epithelial_Cells;}
	  
	  gotoxy(58,16);
	  
	  cin>>Crystals;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(58,16);
      	cin>>Crystals;}
	  
	  gotoxy(60,18);
	  
	  cin>>Bile_Salts;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(60,18);
      	cin>>Bile_Salts;}
	  
	  gotoxy(57,20);
	  
	  cin>>Albumin;
	  while(!cin)
      {cin.clear();
      	cin.ignore();
      	gotoxy(57,20);
      	cin>>Albumin;}
	  
	  gotoxy(44,22);
	  cout<<"Display And Save The Report(Y/N): ";   //Asking User whether he wants to store report or not
	  }
    
    void DisplayReport()    //Function For Displaying All Data Given by User
   {
       system("cls");    //system("clear");
       
       gotoxy(20,3);
       cout<<"**********Your report is here*********";
       
       gotoxy(4,6);
	  cout<<"Patient Name: "<<name;    //Displaying report data
	  
	  gotoxy(4,8);
	  cout<<"Patient Age: "<<age;
	  
	  gotoxy(4,10);
	  cout<<"Blood Group: "<<Blood_Group;
	  
          gotoxy(4,12);
	  cout<<"RBC Count: "<<RBC<<" (4200 to 5800)";   //Displaying  Report With its Range
	  
          gotoxy(4,14);
	  cout<<"WBC Count: "<<WBC<<" (5500 to 10000)";
	  
	  gotoxy(4,16);
	  cout<<"Haemoglobin: "<<haemoglobin<<" (13.3 to 18.7)";
	  
	  gotoxy(4,18);
	  cout<<"Lemphocytes: "<<Lemphocytes<<" (2500 to 45000)";
	  
	  gotoxy(4,20);
	  cout<<"Neutrophil: "<<Neutrophils<<" (3000 to 5000)";  //Displaying report with its data
	  
	  gotoxy(4,22);
	  cout<<"Eosinophils: "<<Eosinophils<<" (100 to 3000)";
	  
	  gotoxy(48,6);
	  cout<<"Monocytes: "<<Monocytes<<" (3000 to 11000)";

	  gotoxy(48,8);
	  cout<<"Basophils: "<<Basophils<<" (0 to 100)";

          gotoxy(48,10);
	  cout<<"MCH: "<<MCH<<" (2700 to 3100)";
	  
	  gotoxy(48,12);
	  cout<<"Platelate Count: "<<Platelate_Count<<" (130000 to 400000)";
	  
	  gotoxy(48,14);
	  cout<<"Epithelial Cells: "<<Epithelial_Cells<<" (0.26 to 0.48)";
	  
	  gotoxy(48,16);
	  cout<<"Crystals: "<<Crystals<<" (0.8 to 0.17)";

	  gotoxy(48,18);
	  cout<<"Bile Salts: "<<Bile_Salts<<" (Present)";  //Indicator whether Bile salts present or not
	  
	  gotoxy(48,20);
	  cout<<"Albumin: "<<Albumin<<" (Present)";
   }
     
     void StoreReport()    //Storing The Data Given By User In File
     {
         ofstream s1;      //Creating Object "s1" of class ofstream included in header file fstream
         char title[20];
         cout<<"\n\nEnter File Name To Store: ";
         cin>>title;
                                             
         s1.open(title,ios::app);   //Opening a File To Write                                     
         gotoxy(20,3);
         s1<<"**********Your report is here*********\n\n";
       
          gotoxy(4,6);
	  s1<<"\n\nPatient Name: "<<name;   //Writing Into File
	  
	  gotoxy(4,8);
	  s1<<"\nPatient Age: "<<age;
	  
	  gotoxy(4,10);
	  s1<<"\nBlood Group: "<<Blood_Group;
	  
          gotoxy(4,12);
	  s1<<"\nRBC Count: "<<RBC<<"  (4200 to 5800)";  //Writing Range Also In File
	  
          gotoxy(4,14);
	  s1<<"\nWBC Count: "<<WBC<<"  (5500 to 10000)";
	  
	  gotoxy(4,16);
	  s1<<"\nHaemoglobin: "<<haemoglobin<<"  (13.3 to 18.7)";
	  
	  gotoxy(4,18);
	  s1<<"\nLemphocytes: "<<Lemphocytes<<"  (2500 to 45000)";
	  
	  gotoxy(4,20);
	  s1<<"\nNeutrophil: "<<Neutrophils<<"  (3000 to 5000)";
	  
	  gotoxy(4,22);
	  s1<<"\nEosinophils: "<<Eosinophils<<"  (100 to 3000)"; //Writing into file
	  
	  gotoxy(48,6);
	  s1<<"\nMonocytes: "<<Monocytes<<"  (3000 to 11000)";

	  gotoxy(48,8);
	  s1<<"\nBasophils: "<<Basophils<<"  (0 to 100)";

          gotoxy(48,10);
	  s1<<"\nMCH: "<<MCH<<"  (2700 to 3100)";
	  
	  gotoxy(48,12);
	  s1<<"\nPlatelate Count: "<<Platelate_Count<<"  (130000 to 400000)";
	  
	  gotoxy(48,14);
	  s1<<"\nEpithelial Cells: "<<Epithelial_Cells<<"  (0.26 to 0.48)";
	  
	  gotoxy(48,16);
	  s1<<"\nCrystals: "<<Crystals<<"  (0.8 to 0.17)";

	  gotoxy(48,18);
	  s1<<"\nBile Salts: "<<Bile_Salts<<"  (Present)";
	  
	  gotoxy(48,20);
	  s1<<"\nAlbumin: "<<Albumin<<" (Present)";                                     
                                             
       s1.close();        //Closing The File
       
       system("cls");    //system("clear");
       }
       
       void ReadPreviousRecord()     //Reading The Previously Stored Files
       {
            char filename[100];  
            char line[100];
            system("cls");  
            cout<<"Enter File Name To Open: ";
            cin>>filename;            //Asking User The Name Of File To Open
           
           ifstream s2;              //Creating Object "s2" of class ifstream included in header file fstream
           
           s2.open(filename);        //Opening The File 
           system("cls");   //system("clear");
           
           while(s2)
           {
                s2.getline(line,100);   //getline is a function which reads the file line by line
                cout<<"\n"<<line<<"\n"; //Displaying contents of file
           }
           s2.close();                  //Closing the file after reading it
           
           cout<<"Do You Want To Continue(Y/N): ";
           return;                      //Asking the user whether he want to continue or not
            }
            
            void SendToPrinter()        //Not implemented
            {
                char reportname[60];
                
                cout<<"\n\nEnter File Name To Print: ";
                cin>>reportname;
                
                ifstream infile(reportname);
                
                if(!infile)
                {
                   cout<<"\nUnable To Open File";
                   exit(1);        
                }
                ofstream outfile("PRN");
                
                if(!outfile)
                {
                  cout<<"Unable To Open File";
                  exit(2);          
                }
                
                char ah;
                
                while(infile.get(ah)!=0)
                
                outfile.put(ah);
                outfile.put('\x0C');
                
                cout<<"Printing File...........................";
                cout<<"Do You Want To Continue(Y/N): ";
                
                return;
                }
                
                  Application()       //Constructor for initialisation
                {
                    name[0]='\0';
                    Blood_Group[0]='\0';                   
                    haemoglobin=0.0,Crystals=0.0; //Initialisation
                    Epithelial_Cells=0,Albumin=0;
                    age=0,RBC=0,WBC=0,MCH=0,Basophils=0;
                    Lemphocytes=0,Neutrophils=0,Eosinophils=0; //Assigning all values to '0'
                    Platelate_Count=0,Monocytes=0,Bile_Salts=0;
                }
                };
    
    class Blood
    {
    public:      
          
    int GetParentUnknownABO(const string & otherParent, const string & child)   //Function for finding unknown parent
{
    if (child == "O")                                                           //Comparing the values of given child and other parent
    {
        if (otherParent == "AB")
            return NONE_possible;
            
        else
            return A_possible | B_possible | O_possible;
    }
    
    else if (child == "A")
    {
        if (otherParent == "A" || otherParent == "AB")
            return ALL_possible;
        else
            return A_possible | AB_possible;                   //if values gets matched we are returning values to function parent is unknown
    }
    
    else if (child == "B")
    {
        if (otherParent == "B" || otherParent == "AB")
            return ALL_possible;
        else
            return B_possible | AB_possible;                  //if(child==A   if(otherparent==B  || otherparent==AB) then all values are possible
    }
    
    else
    {
        if (otherParent == "O")
            return NONE_possible;
        else if (otherParent == "AB")
            return A_possible | B_possible | AB_possible;
        else if (otherParent == "A")
            return B_possible | AB_possible;
        else
            return A_possible | AB_possible;
    }
}

bool OneIsValue(const string & parentOne, const string & parentTwo, const string & value)
{
    return parentOne == value || parentTwo == value;
}

int GetChildUnknownABO(const string & parentOne, const string & parentTwo)           //function for finding unknown child
{
    
    if (OneIsValue(parentOne , parentTwo, "O"))
    {
        if (OneIsValue(parentOne, parentTwo, "AB"))
            return A_possible | B_possible;
        
        else if (OneIsValue(parentOne, parentTwo, "A"))
            return A_possible | O_possible;
    
        else if (OneIsValue(parentOne, parentTwo, "B"))
            return B_possible | O_possible;
        
        else
            return O_possible;
    }
    
    else if (OneIsValue(parentOne, parentTwo, "AB"))
    {
        
        return A_possible | B_possible | AB_possible;
    }
    
    else if (OneIsValue(parentOne, parentTwo, "A"))
    {
        if (OneIsValue(parentOne, parentTwo, "B"))
            return ALL_possible;
            
        else
            return A_possible | O_possible;
    }
    
    else
        return B_possible | O_possible;
}


bool ParentCanBeNegative(const char & otherParent, const char & child)  //Checking whether child have negative and parent have positive values or not and returning
{
    return (child == '-' || otherParent == '+');
}


bool ChildCanHavePositive(const char & parentOne, const char & parentTwo)  //bool function determines positive or negative values of blood groups
{
    return parentOne == '+' || parentTwo == '+';
}

string Separate(const string & fullType, char & rhFactor)   //function used to separate blood group and rh factor
{
    int size = fullType.size();
    rhFactor = fullType[size - 1];
    
    return fullType.substr(0, size - 1);  //separating blood groups and their rh factor and storing into variables
}

vector<string> GenerateValuespossible(const int & value)   //Generating values returned by unknown finding function
{
    vector<string> allValues;               //Declaring vector of type string  which is a container can store string values
    
    const int A_possible = 1, B_possible = 2, AB_possible = 4, O_possible = 8;
    
    if (value & A_possible)
        allValues.push_back("A");   //pushback is a function of vector used to insert the values in vector container
    
    if (value & AB_possible)
        allValues.push_back("AB"); 
    
    if (value & B_possible)
        allValues.push_back("B");
        
    if (value & O_possible)
        allValues.push_back("O");

    return allValues;              //Returning all the values to the function
}

vector<string> ParentIsUnknown(const string & otherParent, const string & child, bool & canBePositive, bool & canBeNegative) //This function will pass blood group to separate function
                                                                                                   
{
    char otherParentRh;                                             //This function will generate the possible values
    string otherParentABO = Separate(otherParent, otherParentRh);
    
    char childRh;
    string childABO = Separate(child, childRh);                     //separating string
    
    canBePositive = true;
    canBeNegative = ParentCanBeNegative(otherParentRh, childRh);
    
    return GenerateValuespossible(GetParentUnknownABO(otherParentABO, childABO)); //Generating possible values
}

vector<string> ChildIsUnknown(const string & parent1, const string & parent2, bool & canBePositive, bool & canBeNegative) //This function will pass blood group to separate function
{
    char parent1Rh;                                                 //This function will generate the possible values   
    string parent1ABO = Separate(parent1, parent1Rh);
    
    char parent2Rh;
    string parent2ABO = Separate(parent2, parent2Rh);               //separating string
    
    canBePositive = ChildCanHavePositive(parent1Rh, parent2Rh);
    canBeNegative = true;
    
    return GenerateValuespossible(GetChildUnknownABO(parent1ABO, parent2ABO));  //Generating possible values
}

void PrintOutUnknown(const vector<string> & valuespossible, const bool & canBePositive, const bool & canBeNegative) //Function for printing all possible values
{
    if (valuespossible.size() == 0)  //if function return null values then it will show "IMPOSSIBlE"
        cout << "IMPOSSIBLE";
    else if (valuespossible.size() == 1 && (canBePositive ^ canBeNegative))
        cout << valuespossible[0] << (canBePositive ? '+' : '-');    //Determining whether rh factor is negative or positive returned by the function
        
    else
    {
        cout << '{';
        bool first = true;
        
        for (int i = 0; i < valuespossible.size(); ++i)  //loop for size or number of values present in vector
        {
            if (canBePositive)
            {
                if (!first)
                    cout << ", ";
                first = false;
                
                cout << valuespossible[i] << '+';  //Printing the values possible which belongs to positive rh factor
            }
            
            if (canBeNegative)
            {
                if (!first)
                    cout << ", ";
                first = false;
                cout << valuespossible[i] << '-'; //Printing the values possible which belongs to negative rh factor
            }
        }
        
        cout << "}"<< "\n";
    }                                             //Ending the function with curly braces
}
};

int main()
{
    Application user1;                    //Creating the object "user1" of class Application
    Blood user2;                          //Creating the object "user2" of class Blood
    string parent1, parent2, child;       //Declaring string to store blood groups
    int choice1,Count=1;                  //Count for increasing cases
    char choice2,choice3,choice4,choice5; //Choices for the user
    
    
    do
    {
       system("cls");  //system("clear");
       system("color f3");
       system("cls");     //Displaying the main menu from which user can select his desired choice
       cout<<"\n\n\n\n\n\n\t\t\t********** Pathological System **********\n\n\n\t\t\t1. Pathological Application\n"<<"\t\t\t2. Blood Group Calculator\n"<<"\t\t\t3. Previous Records\n"<<"\t\t\t4. Print Reports\n"<<"\t\t\t5. Developers\n"<<"\t\t\t6. Help Mode\n"<<"\t\t\t7. Exit\n\t\t\t";
       cin>>choice1;
       
       switch(choice1)   //switching the choices
       {
       	
	  case 1:
  	 system("cls");
     user1.DisplayApplication();  //Accesing the function which belongs to class Application by using user1 object
	 user1.GetInputData();        //Accesing the function which belongs to class Application by using user1 object
	 cin>>choice2;
	 
      if(choice2=='y'|choice2=='Y')
	  {
       user1.DisplayReport();   //Accesing the function which belongs to class Application by using user1 object
       user1.StoreReport();     //Accesing the function which belongs to class Application by using user1 object
       }  
	  else
	  {
	  	exit(0);
	  }
       break;

	  case 2:
      system("cls");  //system("clear");
      cout<<"***Enter Blood Groups***Ex.   A+  B+  ?\n\n";
      while (cin>> parent1 >> parent2 >> child, parent1 != "E")
    {
        bool canBePositive = false, canBeNegative = false;
        
        cout << "\nCase " << Count++ << ": ";   //Starting with the intial cases
        
        if (parent1 == "?")
        {
            vector<string> valuespossible = user2.ParentIsUnknown(parent2, child, canBePositive, canBeNegative); //passing the blood groups given by user to this function
            user2.PrintOutUnknown(valuespossible, canBePositive, canBeNegative);   //accesing the printoutunknown function which prints all values by using user2 object
        }
        
        else
            cout << parent1;     //Displaying parent1 Blood group
        
        cout << ' ';
        
        if (parent2 == "?")
        {
            vector<string> valuespossible = user2.ParentIsUnknown(parent1, child, canBePositive, canBeNegative); //passing the blood groups given by user to this function
            user2.PrintOutUnknown(valuespossible, canBePositive, canBeNegative);  //accesing the printoutunknown function which prints all values by using user2 object
        }
        
        else
            cout << parent2;     //Displaying parent2 Blood group
        
        cout << ' ';
        
        if (child == "?")
        {
            vector<string> valuespossible = user2.ChildIsUnknown(parent1, parent2, canBePositive, canBeNegative); //passing the blood groups given by user to this function
            user2.PrintOutUnknown(valuespossible, canBePositive, canBeNegative);  //accesing the printoutunknown function which prints all values by using user2 object
        }
        
        else
            cout << child<<"\n";  //Displaying child Blood group
        
    }
        break;
	  
	  case 3:
           
           user1.ReadPreviousRecord();  //Accesing the function which belongs to class Application by using user1 object which reads previous records
           cin>>choice3;
           
           if(choice3=='y'||choice3=='Y')
           {
           system("cls");   //system("clear");    //Asking user for his choice
           break;
           }
           else
           {
           exit(0);     //Ending the program exicution
           }
	  
	  case 4:
           
           system("cls");   //system("clear");
           
           user1.SendToPrinter();
           cin>>choice4;
           
           if(choice4=='Y'||choice4=='y')
           {break;}
           else
           {
           	exit(0);
           }
           
           
       case 5:
       	    
       	    system("color f2");
       	    cout<<"\n\n\n\n\t\tOnkar Abhay Musale\n\n\t\t";
       	    system("pause");
            break;    
           
       case 6:
            
            system("cls");  //system("clear");        //Instructions for using this particular app
			system("color f3");  
            cout<<"\n";
            cout<<"Use Our Pathological Application To Save & Print The Test Samples Of Blood\n";
            cout<<"For Application Enter 1...& Insert The Records Into It.\n";
            cout<<"Enter 'Y' To Display & Print Records (Enter File Name To Store)\n\n";
            cout<<"Use Our Blood Group Calculator To Find Blood Groups Of Parent/Child From Others\n";
            cout<<"\nfor e.g  I Want To Find Child Blood Group From 2 Parents then i will enter\n\n";
            cout<<"A+(Parent 1) B+(Parent 2) ?(Question Mark For Child)\n\nPress Enter To Show Result\n";
            cout<<"Similarly You Can Find Other Parents Blood Group Also..\n\n";
            
            cout<<"Use Option 3 To Read Previous Records\n\n";
            cout<<"Use Option 4 To Print Your Report\n\n";
            
            cout<<"THANKING YOU................";
            cout<<"\n\nDo You Want To Continue(Y/N): ";
            cin>>choice5;
            
            if(choice5=='Y'|| choice5=='y')
            {break;
			system("cls");}
            else
            exit(0);    

	  case 7:
	       exit(0);   //Ending the program
	       break;
	       
	  default:
	  cout<<"\n\n\n\n\n\n\t\t\tEnter valid Choice...\n";
	  system("cls");
	  break;     
 }
 }while(choice1!=7);

return 0;
}
