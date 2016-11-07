










																																	/*
    ****************************************************************************
    ****************  PROJECT ON CRIME INVESTIGATION DEPARTMENT  ***************
    ****************************************************************************

     
   ************************************************************************** 
   ************************** HIMANSHU JINDAL  **************************** 
   ************************************************************************** 
     

	********************************************************************
	*       THESE ARE THE HEADER FILES USED BY THE PROJECT             *
	********************************************************************
																																	*/




			   #include<fstream.h>
			   #include<iomanip.h>
			   #include<graphics.h>
			   #include<conio.h>
			   #include<stdio.h>
			   #include<process.h>
			   #include<string.h>
			   #include<dos.h>
																					      /*

     ********************************************************************
     *      THIS IS THE CLASS HAVING THE DATA MEMBERS & FUNCTIONS       *
     ********************************************************************                                                                                                     */



int count=0,choice,mrec=0,offset=0,j;
class Cid
	 {
		  char name[40];
		  char punishment[80];
		  float code;
				  public:
					  void getdata(void);
					  void display(void);
					  void mod_data(void);
	 };
																					  /*
     ********************************************************************
     *      THIS IS THE CLASS HAVING THE DATA MEMBERS & FUNCTIONS       *
     ********************************************************************                                                                                                     */

class cid
	 {             public:
				   void accident();
			 void theft();
				   void missing();
			 void murder();
				   void search();
			 void error();
				   void dacoity();
	  };

																					  /*
     ********************************************************************
     *     THESE ARE THE DECLARATIONS OF THE FUNCTIONS OF THE CLASS     *
     ********************************************************************                                                                                                     */




void Cid::getdata(void)
{    char ch;
     cin.get(ch);
     clrscr();
     gotoxy(15,10);
     cout<<"Add Criminal's Data\n";
     gotoxy(17,12);
     cout<<"Record #"<<(++count)<<endl;
     gotoxy(1,14);
     for(int i=0;i<40;i++)
     code=0.0;
     cout<<"Enter Name :";
     cin.getline(name,40);
     cout<<"\n Enter punishment :";
     cin.getline(punishment,80);
     cout<<"Enter code :";
     cin>>code;
     cout<<"\n";
}

   void Cid::display(void)
{
  clrscr();
  gotoxy(15,10);
  cout<<"Criminal's Detail\n";
  gotoxy(1,12);
  cout<<"Name:"<<name<<"\t"<<"punishment:"<<punishment<<"\t"<<"code :"<<code<<"\n";

}
   void Cid::mod_data(void)
   {
    char nm[40],gr;float mk=-1;
    clrscr();
    gotoxy(15,8);
    cout<<"Modify Criminal's Data\n"<<endl;
    char ch = cin.get();
    cout<<ch;
    gotoxy(17,10);
    cout<<"Current details";
    gotoxy(17,11);
    cout<<"_________________\n\n";
    cout<<"Name:"<<name<<"\npunishment"<<punishment<<"\ncode"<<code<<endl;
    gotoxy(17,16);
    cout<<"Enter New Details\n";
    gotoxy(17,17);
    cout<<"__________________\n\n";
    gotoxy(10,24);
    cout<<"If you want to retain old name or code just press enter";
    gotoxy(50,17);
    cout<<endl;
    cout<<"Name";     cin.getline(nm,40);
    cout<<"Punishment";  gr=getche();
    cout<<"\tcode";    cin>>mk;
    if(strlen(nm)!=0)strcpy(name,nm);
    if((gr!=13)&&(gr!=32))
    //punishment= gr;
    if(mk>=0)code=mk;
    gotoxy(10,24);
    clreol();
    }
   void board();

																					  /*
     ********************************************************************
     * FROM HERE STARTS THE MAIN FUNCTION WHICH HAS THE FUNCTION CALLS  *
     ********************************************************************                                                                                                     */


void main()
{cid a;
clrscr();
long int pass;
for(int i=100;i<200;i++)
{
sound(i);
delay(10);
nosound();}
 clrscr();
   delay(500);
   gotoxy(12,12);
   cout<<"THE PROGRAM STARTS NOW";
   delay(100);
cout<<".";
delay(100);
cout<<".";
delay(100);
cout<<".";
delay(100);
cout<<".";
delay(100);
cout<<".";
delay(100);
cout<<".";
delay(100);
cout<<".";
delay(100);
cout<<".";
cout<<".";
delay(100);
cout<<".";
delay(100);
cout<<".";

textcolor(LIGHTGREEN);
clrscr();

delay(300);
cout<<"\n";
textcolor(BROWN);
cprintf("");
for(i=0;i<79;i++)
{
delay(i);
textcolor(BROWN);
cprintf("");}
delay(200);
cout<<"\n\n                               ";                                                                 ;
delay(100);
cout<<"W";
delay(100);
cout<<"E";
delay(100);
cout<<"L";
delay(100);
cout<<"C";
delay(100);
cout<<"O";
delay(100);
cout<<"M";
delay(100);
cout<<"E";
cout<<"      ";
delay(100);
cout<<"T";
delay(100);
cout<<"O";
cout<<"\n\n\t\t\t\t\t\t\t                   \t";
textcolor(RED+BLINK);
cout<<"\n\t\t  ";
cprintf("CCCCCCCCC      IIIIIIIIIIIII       DDDDDDDDD   ");
cout<<"\n\t\t  ";
cprintf("CC     CC           III            DD      DD  ");
cout<<"\n\t\t  ";
cprintf("CC                  III            DD      DD  ");
cout<<"\n\t\t  ";
cprintf("CC                  III            DD      DD  ");
cout<<"\n\t\t  ";
cprintf("CC     CC           III            DD      DD  ");
cout<<"\n\t\t  ";
cprintf("CCCCCCCCC     IIIIIIIIIIIII      DDDDDDDDD   ");
cout<<"\n\n\t            ";
delay(100);
cout<<"C";
delay(100);
cout<<"R";
delay(100);
cout<<"I";
delay(100);
cout<<"M";
delay(100);
cout<<"E";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<"I";
delay(100);
cout<<"N";
delay(100);
cout<<"V";
delay(100);
cout<<"E";
delay(100);
cout<<"S";
delay(100);
cout<<"T";
delay(100);
cout<<"I";
delay(100);
cout<<"G";
delay(100);
cout<<"A";
delay(100);
cout<<"T";
delay(100);
cout<<"I";
delay(100);
cout<<"O";
delay(100);
cout<<"N";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<"D";
delay(100);
cout<<"E";
delay(100);
cout<<"P";
delay(100);
cout<<"A";
delay(100);
cout<<"R";
delay(100);
cout<<"T";
delay(100);
cout<<"M";
delay(100);
cout<<"E";
delay(100);
cout<<"N";
delay(100);
cout<<"T";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<" ";



     cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\a";
     textcolor(LIGHTRED+BLINK);
     cprintf("               ");


textcolor(MAGENTA);
delay(100);
cout<<"\n\n";                                                                 ;
delay(100);
cout<<"B";
delay(100);
cout<<"Y";
delay(100);
cout<<" ";
delay(100);
cout<<" ";
delay(100);
cout<<"K";
delay(100);
cout<<"E";
delay(100);
cout<<"S";
delay(100);
cout<<"H";
delay(100);
cout<<"A";
delay(100);
cout<<"V";
delay(100);
cout<<" ";
delay(100);
cout<<"  ";
cout<<"C";
delay(100);
cout<<"O";
delay(100);
cout<<"M";
delay(100);
cout<<"P";


delay(100);
cout<<"L";
delay(100);
cout<<"A";
delay(100);
cout<<"I";
delay(100);
cout<<"N";
delay(100);
cout<<"T";
delay(100);
cout<<"/";
delay(100);
cout<<"F";
delay(100);
cout<<"I";
delay(100);
cout<<"R";
delay(100);
cout<<".";
delay(100);
cout<<" ";
delay(100);
cout<<"W";
delay(100);
cout<<"E";
delay(100);
cout<<" ";
delay(100);
cout<<"A";
delay(100);
cout<<"S";
delay(100);
cout<<"S";
delay(100);
cout<<"U";
delay(100);
cout<<"R";
delay(100);
cout<<"E";
delay(100);
cout<<" ";
delay(100);
cout<<"Y";
delay(100);
cout<<"O";
delay(100);
cout<<"U";
delay(100);
cout<<" ";
delay(100);
cout<<"C";
delay(100);
cout<<"O";
delay(100);
cout<<"N";
delay(100);
cout<<"F";
delay(100);
cout<<"I";
delay(100);
cout<<"N";
delay(100);
cout<<"D";
delay(100);
cout<<"E";
delay(100);
cout<<"N";
delay(100);
cout<<"T";
delay(100);
cout<<"I";
delay(100);
cout<<"A";
delay(100);
cout<<"L";
delay(100);
cout<<"I";
delay(100);
cout<<"T";
delay(100);
cout<<"Y";
delay(100);
cout<<" ";
delay(100);
cout<<"&";
delay(100);
cout<<" ";
delay(100);
cout<<"F";
delay(100);
cout<<"U";
delay(100);
cout<<"L";
delay(100);
cout<<"L";
delay(100);
cout<<" ";
delay(100);
cout<<"S";
delay(100);
cout<<"U";
delay(100);
cout<<"P";
delay(100);
cout<<"P";
delay(100);
cout<<"O";
delay(100);
cout<<"R";
delay(100);
cout<<"T";
delay(300);
cout<<"\n\a";
textcolor(BROWN);
cprintf("");
for(i=0;i<79;i++)
{
delay(i);
textcolor(BROWN);
cprintf("");}
textcolor(LIGHTCYAN);
cprintf("\nIF YOU WANT TO LODGE A FIR-PRES 1 & ENTER, GIVE INFORMATION-PRESS 2 & ENTER  ");
cout<<"\t\t";

int ch;
cin>>ch;
if(ch==1)
{
  board();
 }
if(ch==2)
{char inf[1000];
clrscr();
cout<<"        WRITE YOUR COMPLETE NAME,ADDRESS,TELEPHONE NO. BEFORE YOU START";
gets(inf);

cout<<"Press 1 To Go To Main Menu";
cin>>ch;
board();
}
}

																					  /*
     ********************************************************************
     *      THIS FUNCTION TAKE THE INFORMATION ABOUT DACOITY CASES      *
     ********************************************************************                                                                                                     */


void dacoity()
{ char name[20],add[80],sus[50];
  float amount,ch1;


 clrscr();
 cout<<"\a\n\n\t\t MENU ";
 cout<<"\n\n\t ENTER THE DETAILS";
 cout<<"\n\n\n\tName    ";
 gets(name);
 cout<<"\n\t Amount of property damaged/stolen   ";
 cin>>amount;
 cout<<"\n\t Address  ";
 gets(add);
 cout<<"\n\t You Suspect  ";
 gets(sus);
 clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\Thank you for the information";
cout<<"\n\n\t\t We will get in touch with you very shortly";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t press 1 to go to the main menu";
cin>>ch1;
if(ch1 == 1)
board();


}

																					  /*
     ********************************************************************
     *   THIS FUNCTION GIVES AN ERROR MESSAGE ON WRONG CHOICE ENTERED   *
     ********************************************************************                                                                                                     */


void error()
{ textcolor(LIGHTMAGENTA);
clrscr();

cout<<"\a\n\n\n\n\n\n\n\n\n\n\n\t\t            SORRY! WRONG CHOICE";
cout<<"\n                                        ";
cout<<"\n\n\n\n\n\n                          ";
delay(900);
cout<<"W";
delay(300);
cout<<"I";
delay(300);
cout<<"T";
delay(300);
cout<<"H";
delay(300);
cout<<" ";
delay(300);
cout<<"U";
delay(300);
cout<<" ";
delay(900);
cout<<"F";
delay(300);
cout<<"O";
delay(300);
cout<<"R";
delay(300);
cout<<" ";
delay(300);
cout<<"U";
delay(300);
cout<<" ";
delay(300);
cout<<"A";
delay(900);
cout<<"L";
delay(300);
cout<<"W";
delay(300);
cout<<"A";
delay(300);
cout<<"Y";
delay(300);
cout<<"S";
delay(300);
cout<<" ";
getch();

}


																					  /*
******************************************************************************
* THIS FUNCTION SEARCHES FOR THE CRIMINALS WITH LITTLE INFORMATION ABOUT THEM          *
******************************************************************************                                                                                                     */



void search()
{textcolor(LIGHTRED);
clrscr();

cout<<"\n\n\n\n\n\n\n\n\n\tThis menu helps you to search for the criminal with just a little\n\n\t";
cout<<" information you have about him/her.You will get many menus like\n\n ";
cout<<"      scars ,pimples ,big eyes etc.you can click on them & get their names";
getch();

clrscr();

int ch,ch1;
cout<<"\n\n\n\n\n\n\n\t MENU ";
cout<<"\n1:> He has scars";
cout<<"\n2:> He has pimples";
cout<<"\n3:> Big eyes";
cout<<"\n4:> Big lips";
cout<<"\n5:> He leans while walking";
cout<<"\n6:> He is fat";
cout<<"\n7:> He has big mostache";
cout<<"\n8:> He is Bald";
cout<<"\n9:> Combinations";
cout<<"\n\t\t\t Enter Your Choice\t";
 cin>>ch;
 if((ch<1)||(ch>9))
 {clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter the correct choice ";
 cout<<"\n\t\t\t\tPlease!!";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tpress 1 to go to main menu";
 cin>>ch;
 getch();
 if(ch==1)
 { search();

 }
 }
 if(ch==1)
 { clrscr();
 cout<<"\n\n\t\t    The People With Scars Are";
 cout<<"\n\t\t\t 1:> Jaggu Dada ";
 cout<<"\n\t\t\t 2:> Sher Singh ";
 cout<<"\n\t\t\t 3:> Kharak Kumar";
 cout<<"\n\t\t\t 4:> Daku Maan Singh";
 cout<<"\n\t\t\t 5:> Sheriya";
 cout<<"\n\t\t\t 6:> Aslam Bhai";
 cout<<"\n\t\t\t 7:> Laraku Dua";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n write the code to get information about them or press 8 to go to main menu";
 cin>>ch1;
   switch(ch1)
   {


 case 1: textcolor(LIGHTRED);
 clrscr();
  cout<<"  \n\t\t\t\t  CRIME REPORT  ";
  cout<<"  \n\t\t\t\t________________";
  textcolor(YELLOW+BLINK);
  cout<<"\n\t";
  cprintf("  ARRESTED");
  cout<<"\n\t";
  cprintf("************");

  textcolor(LIGHTRED);
  cout<<"\n\n";
  cout<<"\n\nNAME : Jaggu Dada" <<"\n"<<"Code : 01"<<"\nDate :27 Jan 01";
  cout<<"\nFather's Name:Gulcharan Singh"<<"\nAge : 30"<<"\nUnder Section :307";
  cout<<"\nDate of conviction:27 Jan 01"<<"\nDate to be released:27 Jan 04";
  cout<<"\n\n";

  cout<<"\n\n\n\n\n\n\t\t\t\t\t\tPress 1 to go to main menu ";
  cin>>ch1;
  if(ch1==1)
  board();
  else
  error();


 case 2:textcolor(LIGHTGREEN);
 clrscr();
  cout<<"  \n\t\t\t\t  CRIME REPORT  ";
  cout<<"  \n\t\t\t\t________________";
  textcolor(YELLOW+BLINK);
  cout<<"\n\t";
  cprintf(" NOT ARRESTED");
  cout<<"\n\t";
  cprintf("***************");

  textcolor(LIGHTRED);
  cout<<"\n\n";
  cout<<"\n\nNAME : Sher Singh" <<"\n"<<"Code : 02"<<"\nDate :7 Nov 01";
  cout<<"\nFather's Name:Mullah Singh"<<"\nAge : 40"<<"\nUnder Section :401";
  cout<<"\nDate of conviction:7 Nov 01"<<"\nDate to be released:7 Nov 04";
  cout<<"\n\n";
	int ch2;
  cout<<"\n\n\n\n\n\n\t\t\t\t\t\tPress 1 to go to main menu ";
  cin>>ch2;
  if(ch2==1)
  board();
  else
  error();
case 3:textcolor(LIGHTGREEN);
 clrscr();
  cout<<"  \n\t\t\t\t  CRIME REPORT  ";
  cout<<"  \n\t\t\t\t________________";
  textcolor(YELLOW+BLINK);
  cout<<"\n\t";
  cprintf(" ARRESTED");
  cout<<"\n\t";
  cprintf("**********");

  textcolor(LIGHTRED);
  cout<<"\n\n";
  cout<<"\n\nNAME : Kharak Kumar" <<"\n"<<"Code : 03"<<"\nDate :10 june 95";
  cout<<"\nFather's Name: Shiv Kumar"<<"\nAge : 80"<<"\nUnder Section :420";
  cout<<"\nDate of conviction:10 june 05"<<"\nDate to be released:7 Nov 04";
  cout<<"\n\n";

  cout<<"\n\n\n\n\n\n\t\t\t\t\t\tPress 1 to go to main menu ";
  cin>>ch2;
  if(ch2==1)
  board();
  else
  error();
 case 4:textcolor(BROWN);
 clrscr();
  cout<<"  \n\t\t\t\t  CRIME REPORT  ";
  cout<<"  \n\t\t\t\t________________";
  textcolor(YELLOW+BLINK);
  cout<<"\n\t";
  cprintf(" ARRESTED");
  cout<<"\n\t";
  cprintf("**********");

  textcolor(BROWN);
  cout<<"\n\n";
  cout<<"\n\nNAME :Daku Man Singh " <<"\n"<<"Code : 04"<<"\nDate :10 july 95";
  cout<<"\nFather's Name: Umaar Singh"<<"\nAge : 60"<<"\nUnder Section :402";
  cout<<"\nDate of conviction:10 july 09"<<"\nDate to be released:10 july 09";
  cout<<"\n\n";

  cout<<"\n\n\n\n\n\n\t\t\t\t\t\tPress 1 to go to main menu ";
  cin>>ch2;
  if(ch2==1)
  board();
  else
  error();
 case 5:textcolor(BROWN);
 clrscr();
  cout<<"  \n\t\t\t\t  CRIME REPORT  ";
  cout<<"  \n\t\t\t\t________________";
  textcolor(YELLOW+BLINK);
  cout<<"\n\t";
  cprintf(" ARRESTED");
  cout<<"\n\t";
  cprintf("**********");

  textcolor(BROWN);
  cout<<"\n\n";
  cout<<"\n\nNAME :Daku Man Singh " <<"\n"<<"Code : 04"<<"\nDate :10 july 95";
  cout<<"\nFather's Name: Umaar Singh"<<"\nAge : 60"<<"\nUnder Section :402";
  cout<<"\nDate of conviction:10 july 09"<<"\nDate to be released:10 july 09";
  cout<<"\n\n";

  cout<<"\n\n\n\n\n\n\t\t\t\t\t\tPress 1 to go to main menu ";
  cin>>ch2;
  if(ch2==1)
  board();
  else
  error();

case 8:board();

}
}
if(ch==2)
{clrscr();
cout<<"\n\n\t\t    The People With Pimples Are";
 cout<<"\n\t\t\t 1:> Jaggu Dada ";
 cout<<"\n\t\t\t 2:> Sher Singh ";
 cout<<"\n\t\t\t 3:> Moogo Singh";
 cout<<"\n\t\t\t 4:> Daku Maan Singh";
 cout<<"\n\t\t\t 5:> Raju Bhai";
 cout<<"\n\t\t\t 6:> Aslam Bhai";
 cout<<"\n\t\t\t 7:> Naresh Kumar";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n write the code to get information about them or press 8 to go to main menu";
 cin>>ch1;
  if((ch1<1)||(ch1>9))
 {clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter the correct choice ";
 cout<<"\n\t\t\t\tPlease!!";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tpress 1 to go to main menu";
 cin>>ch1;
 getch();
 if(ch1==1)
 { search();

 }
 }
 if(ch1==8)
 { board();
 getch();}
 }
 if(ch==3)
{clrscr();
cout<<"\n\n\t\t    The People With Big Eyes Are";
 cout<<"\n\t\t\t 1:> Jaggu Dada ";
 cout<<"\n\t\t\t 2:> Sher Singh ";
 cout<<"\n\t\t\t 3:> Moogo Singh";
 cout<<"\n\t\t\t 4:> Daku Maan Singh";
 cout<<"\n\t\t\t 5:> Raju Bhai";
 cout<<"\n\t\t\t 6:> Dawood Bhai";
 cout<<"\n\t\t\t 7:> Naresh Kumar";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n write the code to get information about them or press 8 to go to main menu";
 cin>>ch1;
  if((ch1<1)||(ch1>9))
 {clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter the correct choice ";
 cout<<"\n\t\t\t\tPlease!!";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tpress 1 to go to main menu";
 cin>>ch1;
 getch();
 if(ch1==1)
 { search();

 }
 }
 if(ch1==8)
 { board();
 getch();}
 }
 if(ch==4)
 { clrscr();
cout<<"\n\n\t\t    The People With Big Lips Are";
 cout<<"\n\t\t\t 1:> Jaggu Seth ";
 cout<<"\n\t\t\t 2:> Sher Singh ";
 cout<<"\n\t\t\t 3:> Mulana Garg";
 cout<<"\n\t\t\t 4:> Daku Maan Singh";
 cout<<"\n\t\t\t 5:> Kaku Malik";
 cout<<"\n\t\t\t 6:> Aslam Bhai";
 cout<<"\n\t\t\t 7:> Nikhil Kumar";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n write the code to get information about them or press 8 to go to main menu";
cin>>ch1;
  if((ch1<1)||(ch1>9))
 {clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter the correct choice ";
 cout<<"\n\t\t\t\tPlease!!";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tpress 1 to go to main menu";
 cin>>ch1;
 getch();
 if(ch1==1)
 { search();

 }
 }
 if(ch1==8)
 { board();
 getch();}

 }
 if(ch==5)
 { clrscr();
cout<<"\n\n\t\t    The People Who Lean Are";
 cout<<"\n\t\t\t 1:> Kunni Yadav ";
 cout<<"\n\t\t\t 2:> Sher Singh ";
 cout<<"\n\t\t\t 3:> Vijay Singh";
 cout<<"\n\t\t\t 4:> Arhan Yadav";
 cout<<"\n\t\t\t 5:> Ali Masoor";
 cout<<"\n\t\t\t 6:> Ranjit Singh";
 cout<<"\n\t\t\t 7:> Sandhu Yadav";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n write the code to get information about them or press 8 to go to main menu";
 cin>>ch1;
  if((ch1<1)||(ch1>9))
 {clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter the correct choice ";
 cout<<"\n\t\t\t\tPlease!!";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tpress 1 to go to main menu";
 cin>>ch1;
 getch();
 if(ch1==1)
 { search();

 }
 }
 if(ch1==8)
 { board();
 getch();}

 }
 if(ch==6)
 { clrscr();
cout<<"\n\n\t\t    The People Who Are Fat Are";
 cout<<"\n\t\t\t 1:> Mukesh Gupta ";
 cout<<"\n\t\t\t 2:> Sher Singh ";
 cout<<"\n\t\t\t 3:> Mulana Garg";
 cout<<"\n\t\t\t 4:> Daku Maan Singh";
 cout<<"\n\t\t\t 5:> Kaku Malik";
 cout<<"\n\t\t\t 6:> Aslam Kumar";
 cout<<"\n\t\t\t 7:> Nikhil Kumar";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n write the code to get information about them or press 8 to go to main menu";
 cin>>ch1;

  if((ch1<1)||(ch1>9))
 {clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter the correct choice ";
 cout<<"\n\t\t\t\tPlease!!";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tpress 1 to go to main menu";
 cin>>ch1;
 getch();
 if(ch1==1)
 { search();

 }
 }if(ch1==8)
 { board();
 getch();}

 }
  if(ch==7)
{ clrscr();
cout<<"\n\n\t\t    The People Who Have A Mostache Are";
 cout<<"\n\t\t\t 1:> Mukesh Gupta ";
 cout<<"\n\t\t\t 2:> Sher Singh ";
 cout<<"\n\t\t\t 3:> Mulana Garg";
 cout<<"\n\t\t\t 4:> Kurni Yadav";
 cout<<"\n\t\t\t 5:> Kaku Malik";
 cout<<"\n\t\t\t 6:> Rajnikant Khanna";
 cout<<"\n\t\t\t 7:> Nitish Kumar";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n write the code to get information about them or press 8 to go to main menu";
 cin>>ch1;
  if((ch1<1)||(ch1>9))
 {clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter the correct choice ";
 cout<<"\n\t\t\t\tPlease!!";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tpress 1 to go to main menu";
 cin>>ch1;
 getch();
 if(ch1==1)
 { search();

 }
 }
 if(ch1==8)
 { board();
 getch();}

 }
   if(ch==8)
{ clrscr();
cout<<"\n\n\t\t    The People Who Are Bald Are";
 cout<<"\n\t\t\t 1:> Laloo Singh ";
 cout<<"\n\t\t\t 2:> Gola Kumar ";
 cout<<"\n\t\t\t 3:> Akhil Ghambir";
 cout<<"\n\t\t\t 4:> Shushant Bahl";
 cout<<"\n\t\t\t 5:> Rahul Tiwari";
 cout<<"\n\t\t\t 6:> Dada";
 cout<<"\n\t\t\t 7:> Nitish Kumar";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n write the code to get information about them or press 8 to go to main menu";
 cin>>ch1;
  if((ch1<1)||(ch1>9))
 {clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Enter the correct choice ";
 cout<<"\n\t\t\t\tPlease!!";
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tpress 1 to go to main menu";
 cin>>ch1;
 getch();
 if(ch1==1)
 { search();

 }
 }
 if(ch1==8)
 { board();
 getch();}
 }
 if(ch==9)
 { clrscr();
  cout<<"\n\n\n\n\n\n\n\n\n";
  cout<<"This menu helps you to serach for criminals";
 clrscr();

 cout<<"\n\n\t  COMBINATIONS ";
  cout<<"\n\n";
cout<<"\n1:> He has scars ";
cout<<"\n2:> He has pimples";
cout<<"\n3:> Big eyes";
cout<<"\n4:> Big lips";
cout<<"\n5:> He leans while walking";
cout<<"\n6:> He is fat";
cout<<"\n7:> He has big mostache";
cout<<"\n8:> He is Bald";
cout<<"\n9:> Combinations";
cout<<"\n\t\t\t Enter Your Choice\t";
 cin>>ch;

 getch();
 }
 }

																					  /*
     ********************************************************************
     *      THIS FUNCTION TAKES INFORMATION ABOUT MISSING PERSONS       *
     ********************************************************************                                                                                                     */


void missing()
{ clrscr();
  int ch1;
  char name[15];
  char age[3];
  char mf[2];
  char height[5];
  char comp[10];
  char add[50];
  char place[10];
  char weight[10];
  char clothes[50];
 cout<<"\n\n\t\t MAIN MENU ";
cout<<"\n\t  ENTER THE INFORMATION";
cout<<"\n\t Name  \t";
gets(name);
cout<<"\n\t Age \t";
gets(age);
cout<<"\n\t M/F \t";
gets(mf);
cout<<"\n\t Height\t";
gets(height);
cout<<"\n\t Weight\t";
gets(weight);
cout<<"\n\t Complexion\t";
gets(comp);
cout<<"\n\t Address\t";
gets(add);
cout<<"\n\t Place & Date where last seen\t";
gets(place);
cout<<"\n\t Clothes wearing\t";
gets(clothes);
clrscr();
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\Thank you for the information";
cout<<"\n\n\t\t We will get in touch with you very shortly";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t press 1 to go to the main menu";
cin>>ch1;
if(ch1 == 1)
board();
cin>>ch1;
if(ch1 == 1)
{ missing();
}

																					  /*
     ********************************************************************
     *      THIS FUNCTION TAKES INFORMATION ABOUT THE MURDER CASES      *
     ********************************************************************                                                                                                     */


}

void murder()
{clrscr();
int ch;
char address[20];
char date[10];
char name[10];
char place[10];
char witness[10];
char tool[10];
cout<<"\n\n\t\t\t\ MAIN MENU ";
cout<<"\n\n\tDate of Murder\t ";
gets(date);
cout<<"\n\tName of the Person Killed\t";
gets(name);
cout<<"\n\tWhere he has been Killed\t";
gets(place);
cout<<"\n\tAny Witness\t";
gets(witness);
cout<<"\n\tWhich Weapon has been used\t";
gets(tool);
cout<<"\n Your address";
gets(address);
clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\Thank you for the information";
cout<<"\n\n\t\t We will get in touch with you very shortly";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t press 1 to go to the main menu";

 cin>>ch;
 if(ch==1)
 {  board();}
    getch();

    }

																					  /*
     ************************************************************************
     * THIS FUNCTION TAKES INFORMATION ABOUT THE CASES OF THEFT OF VEHICLES *
     ************************************************************************                                                                                                     */



void theft()
{ clrscr();
char name[20];
char car[10];
char colour[15],owner[15];
int no,model,ch;
cout<<"\n\n\t";
cout<<"####################### MENU #########################";

cout<<"\n\tYour Name\t";
gets(name);
cout<<"\n\tYour vehicle name\t";
gets(car);
cout<<"\n\tYour vehicle no\t";
cin>>no;
cout<<"\n\tYour vehicle colour\t";
gets(colour);
cout<<"\n\tYour vehicle model\t";
cin>>model;
cout<<"\n\tOwner of the model\t";
gets(owner);
clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\Thank you for the information";
cout<<"\n\n\t\t We will get in touch with you very shortly";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t press 1 to go to the main menu";

 cin>>ch;
 if(ch==1)
 {  board();}
    getch();

    }

																					  /*
     ********************************************************************
     *     THIS FUNCTION TAKES INFORMATION ABOUT THE ACCIDENT CASES     *
     ********************************************************************                                                                                                     */



void accident()
{ clrscr();
 char name[15];
 char road[30];
 char time[20];
 char info[80];
 char mf[2];
 int age,no,date,ch;
 cout<<"\n\n\t";
 cout<<"\t######### ACCIDENT CASES #########";
 cout<<"\n\t Name           ";
 gets(name);
 cout<<"\n\t How he died            ";
 gets(info);
 cout<<"\n\t Vehicle No	";
 cin>>no;
 cout<<"\n\t Date              " ;
 cin>>date;
 cout<<"\n\t Time                ";
 gets(time);
 cout<<"\n\t Road                ";
 gets(road);
 cout<<"\n\t Age               ";
 cin>>age;
 cout<<"\n\t Sex M/F\t";
 gets(mf);
 clrscr();
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\Thank you for the information";
cout<<"\n\n\t\t We will get in touch with you very shortly";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t press 1 to go to the main menu";

 cin>>ch;
 if(ch==1)
 {  board();}
    getch();

    }

																					  /*
     ********************************************************************
     *       THIS FUNCTION DISPLAYS THE MAIN MENU OF THE PROGRAM        *
     ********************************************************************                                                                                                     */




void board()
{ int ch;
textcolor(LIGHTGREEN);
clrscr();

cout<<"\n";
cout<<"\t####################";
textcolor(LIGHTMAGENTA+BLINK);
delay(100);
cprintf(" ");
delay(100);
cprintf(" ");
delay(100);
cprintf("C");
delay(100);
cprintf("R");
delay(100);
cprintf("I");
delay(100);
cprintf("M");
delay(100);
cprintf("E");
delay(100);
cprintf(" ");
delay(100);
cprintf("B");
delay(100);
cprintf("R");
delay(100);
cprintf("A");
delay(100);

cprintf("N");
delay(100);
cprintf("C");
delay(100);
cprintf("H");
delay(100);
cprintf(" ");
delay(100);
cprintf("B");
delay(100);
cprintf("O");
delay(100);
cprintf("A");
delay(100);
cprintf("R");
delay(100);
cprintf("D");
textcolor(LIGHTGREEN);
cprintf("  ####################");

cout<<"\n          1: Missing Persons Cases ";
cout<<"\n\n                                                     2: Murder Cases  ";
cout<<"\n\n          3: Accident Cases";
cout<<"\n\n                                                     4: Dacoity/Robbery cases";
cout<<"\n\n          5: Any Other F.I.R ";
cout<<"\n\n                                                     6: Theft Of Motor Vehicles";
cout<<"\n\n          7: Exit";
cout<<"\n\n                                                     8: Search";
cout<<"\n\n          9: Modify/Add/Delete";
cout<<"\n\n\n\n\t\t\tEnter your choice\t";
cin>>ch;
if(ch == 9)
{ clrscr();
    Cid stud;
    fstream finout;
    finout.open("Cid.dat",ios::in|ios::out|ios::binary);
    if(!finout)
      { cout<<"Cannot open a file!!\n";

      }

    char ans;
    do
    { textcolor(YELLOW);
      clrscr();
      cout<<"\n\n\n\tMain Menu\n";
      cout<<"       ___________\n"<<endl;
      cout<<"1.Add Record."<<endl;
      cout<<"2.Modify Record."<<endl;
      cout<<"3.Display Record."<<endl;
      cout<<"4.Exit"<<endl;
      cout<<"Enter Your Choice...(1-4)..";
      cin>>choice;
       switch(choice)
      {

      case 1: stud.getdata();
	      mrec = count;
	      offset= ((mrec-1)*sizeof(Cid));
	      finout.seekp(offset,ios::beg);
	      finout.write((char*)&stud,sizeof(Cid));
	      break;

      case 2:   if(!count)
	    {  cout<<"No Record has been added yet.\n";
	    cout<<"Please run option no 1 first of all\n\n";
	    gotoxy(10,23);
	    cout<<"Press a key to continue...\n ";
	    getch();
	    break;
	    }
	    else
	    { offset = (mrec-1)*sizeof(Cid);
	    finout.seekg(offset,ios::beg);
	    finout.read((char*)&stud,sizeof(Cid));
	    stud.display();
	    cout<<"Modify this record ?(y/n)";
	    cin>>ans;
	    if(ans=='y'||ans=='Y')
	    {cout<<"Enter new details\n";
	    stud.mod_data();
	    finout.seekp(offset,ios::beg);
	    finout.write((char*)&stud,sizeof(Cid));
	    cout<<"\n Record Modified\n";
	    gotoxy(30,24);
	    cout<<"Press a key to continue..."<<endl;
	    getch();
	    }
	    break;
	    }

       case 3:   if(!count)
	       {
	       cout<<"No Record has been added yet.\n";
	    cout<<"Please run option no 1 first of all\n\n";
	    gotoxy(10,23);
	    cout<<"Press a key to continue...\n ";
	    getch();
	    break;
	    }
	    cout<<"\n\nDisplay Which record ?#";
	    cin>>mrec; cout<<endl;
	    if(mrec>count)
	    { cout<<"\n\n\nOnly"<<count<<"records have been added.\n";
	    cout<<"Invalid Record Number..\n";
	    gotoxy(15,23);
	    cout<<"Press a key to continue...\n";
	    getch();
	    break;
       }

	    else
	    { offset = (mrec-1)*sizeof(Cid);
	      finout.seekg(offset,ios::beg);
	      finout.read((char*)&stud,sizeof(Cid));
	      stud.display();
	      gotoxy(10,23);
	      cout<<"Press a key to continue...\n";
	      getch();

	      }
	      break;

	case 4:  board();

	default:cout<<"Wrong choice!!Valid choices are (1-4)...\n";
	break;
       }
   }while(choice>=1 && choice<=3);

   finout.close();
}
if(ch==4)
{ dacoity();}
if(ch == 1)
{ missing();
}
if(ch==2)
{ murder();}
if(ch ==8)
{search();
}
if(ch==7)
{   int i;
     clrscr();
    gotoxy(15,10);
   for (i=0; i<9; i++)
   {
       textattr(i + ((i+1) << 4));
	 cout<<"\n";
       cprintf("THIS IS THE END BYE!BYE!\r\n");

   }getch();
   textmode(C40);
   for(i=0;i<71;i++)
   {
   textcolor(BLUE);

 delay(10);
cprintf("K");
textcolor(RED);
delay(10);
cprintf("E");
textcolor(GREEN);
delay(10);
cprintf("S");
textcolor(BROWN);
delay(10);
cprintf("H");
textcolor(YELLOW);
delay(10);
cprintf("A");
textcolor(MAGENTA);
delay(10);
cprintf("V");
textcolor(MAGENTA);
delay(10);
/*cprintf("T");
textcolor(CYAN);*/

  textcolor(LIGHTRED);

delay(10);
cprintf("S");
textcolor(LIGHTBLUE);
delay(10);
cprintf("H");
textcolor(LIGHTGRAY);
delay(10);
cprintf("A");
textcolor(LIGHTMAGENTA);
delay(10);
cprintf("R");
textcolor(LIGHTCYAN);
delay(10);
cprintf("M");
delay(10);
cprintf("A");
/*textcolor(LIGHTMAGENTA);
delay(10);
cprintf("A");*/
textcolor(LIGHTGREEN);
delay(10);
cprintf("");
cout<<"  ";
}
gotoxy(10,12);
textcolor(WHITE+BLINK);

 delay(40);
cprintf("D");
textcolor(WHITE+BLINK);
delay(40);
cprintf("O");
textcolor(WHITE+BLINK);
delay(40);
cprintf("N");
textcolor(WHITE+BLINK);
delay(40);
cprintf("T");
textcolor(WHITE+BLINK);
delay(40);
cprintf(" ");
textcolor(WHITE+BLINK);
delay(40);
cprintf("M");
textcolor(WHITE+BLINK);

  textcolor(WHITE+BLINK);
  cprintf("A");
delay(40);
cprintf("K");
textcolor(WHITE+BLINK);
delay(40);
cprintf("E");
textcolor(WHITE+BLINK);
delay(40);
cprintf(" ");
textcolor(WHITE+BLINK);
delay(40);
cprintf("I");
textcolor(WHITE+BLINK);
delay(40);
cprintf("L");
textcolor(WHITE+BLINK);
delay(40);
cprintf("L");

textcolor(WHITE+BLINK);

 delay(40);
cprintf("E");
textcolor(WHITE+BLINK);
delay(40);
cprintf("G");
textcolor(WHITE+BLINK);
delay(40);
cprintf("A");
textcolor(WHITE+BLINK);
delay(40);
cprintf("L");
textcolor(WHITE+BLINK);
delay(40);
cprintf(" ");
textcolor(WHITE+BLINK);
delay(40);
cprintf("C");
textcolor(WHITE+BLINK);
cprintf("O");
textcolor(WHITE+BLINK);
delay(40);
cprintf("P");
textcolor(WHITE+BLINK);
delay(40);
cprintf("I");
textcolor(WHITE+BLINK);
delay(40);
cprintf("E");
textcolor(WHITE+BLINK);
delay(40);
cprintf("S");

getch();

exit(0);}
if(ch==6)
{ theft();
}
if(ch==3)
{
accident();
}
if((ch<1)||(ch>9))
{
error();
board();
}
}

