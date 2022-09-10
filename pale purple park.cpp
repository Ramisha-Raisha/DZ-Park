// project name: Pale Purple Park Management system
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class park{
public:

    void homepage();
    //void homepage1();
    void genpanel();
    void invalid();
    void adminpanel();
    void empinf();
    void custpanel();
    void emppanel();
    void empl2();
    void food();
    void food2();
    void ticket();
    void schedule();
    void edit();
    void edit2();

};
//void park::
void park:: homepage()
{
    cout<<"                                                                                         "<<endl;
    cout<<"                                                                                         "<<endl;
    cout<<"                                                                                         "<<endl;
    cout<<"                                                                                         "<<endl;
    cout<<"                                                                                         "<<endl;
    cout<<"                       *           * *******  *          *****  *******  *        *  *******     "<<endl;
    cout<<"                        *         *  *****    *         *       *     *  * *    * *  *****       "<<endl;  //mahjajsbx
    cout<<"                         *   *   *   ****     *         *       *     *  *   *    *  ****        "<<endl;
    cout<<"                          * * * *    *****    *         *       *     *  *        *  *****       "<<endl;
    cout<<"                           *   *     *******  *********  ****** *******  *        *  *******     "<<endl;
    cout<<"                                                                                                 "<<endl;
    cout<<"                                                                                         "<<endl;
    cout<<"                                                                                         "<<endl;

    cout<<"                                                       ******* *******                  "<<endl;
    cout<<"                                                          *    *     *                  "<<endl;
    cout<<"                                                          *    *     *                  "<<endl;
    cout<<"                                                          *    *     *                  "<<endl;
    cout<<"                                                          *    *******                  "<<endl;
    cout<<"                                                                                   "<<endl;
    cout<<"                                                                                   "<<endl;
    cout<<"                                                                                   "<<endl;
    cout<<"                                   ******  *******         ******     *     ******   *   *    "<<endl;
    cout<<"                                   *     *       *         *     *   * *    *     *  * *      "<<endl;
    cout<<"                                   *     *      *          ******   *   *   ******   *        "<<endl;
    cout<<"                                   *     *    *            *       *     *  *   *    * *      "<<endl;
    cout<<"                                   ******   *******        *      *       * *     *  *   *    "<<endl;
    cout<<"                                                                                                "<<endl;


    system("Color 0B");
}
void park:: genpanel()//General panel
{

system("cls");
    int choice;
    cout<<"                                                                                            "<<endl;
    cout<<"                                                 #############                              "<<endl;
    cout<<"                                               ##################                           "<<endl;
    cout<<"                                             ######################                         "<<endl;
    cout<<"                                           ##########################                       "<<endl;
    cout<<"                                        ##############################                      "<<endl;
    cout<<"                                       ###################################                  "<<endl;
    cout<<"                                    ####### Welcome to Employee Panel ######                "<<endl;
    cout<<"                                      ###################################                   "<<endl;
    cout<<"                                        ##############################                      "<<endl;
    cout<<"                                          ##########################                        "<<endl;
    cout<<"                                            ######################                          "<<endl;
    cout<<"                                              ##################                            "<<endl;
    cout<<"                                               ##############                               "<<endl;
    cout<<"                                                                                            "<<endl;
    cout<<"                               **************************************************           "<<endl;
    cout<<"                               *                                                *           "<<endl;
    cout<<"                               *                1) Administrator                *           "<<endl;
    cout<<"                               *                                                *           "<<endl;
    cout<<"                               *                2) Employee                     *           "<<endl;
    cout<<"                               *                                                *           "<<endl;
    cout<<"                               *                3) Patron                       *           "<<endl;
    cout<<"                               *                                                *           "<<endl;
    cout<<"                               *                4) Exit                         *           "<<endl;
    cout<<"                               *                                                *           "<<endl;
    cout<<"                               **************************************************           "<<endl;
    cout<<"\n\n\n\t                   Please enter the number according to your recognition:           ";
    cin>>choice;
    cout<<endl;
    system("cls");
    switch(choice)
    {
    case 1:{
       string mail;
    string pass;

    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                    Please Enter your mail address : ";
    cin>>mail;
    cout<<"                                                                             "<<endl;
    cout<<endl;
    cout<<"                                    Please Enter your password: ";
    cin>>pass;
    cout<<endl;
    if(mail=="easy@123" && pass=="Raisha")
    {
        system("cls");
       //cout<<"Successfully Login!"<<"\n Welcome to the administrator Panel."<<endl;
         adminpanel();
     }
    else{
        invalid();
    }

    }
       break;
    case 2:
        emppanel();
        break;
    case 3:
        custpanel();
        break;
   case 4:
        exit(0);
        break;
    default:{
        cout<<"Invalid Choice"<<"\n Try Again"<<endl;

        }
        }

getch();

}


void park :: adminpanel() //Admimistrator panel
{
        //system("pause");
        system("cls");
        cout<<"Successfully Login!"<<"\n Welcome to the administrator Panel."<<endl;

    system("cls");
    int a;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                **************************************************************       "<<endl;
    cout<<"                                **************************************************************       "<<endl;
    cout<<"                                **************************************************************       "<<endl;
    cout<<"                                ***                                                        ***       "<<endl;
    cout<<"                                ***       ##### Welcome to Administrator Panel #####       ***       "<<endl;
    cout<<"                                ***                                                        ***       "<<endl;
    cout<<"                                ***                                                        ***       "<<endl;
    cout<<"                                ***             1)Employee Information                     ***       "<<endl;
    cout<<"                                ***                                                        ***       "<<endl;
    cout<<"                                ***                                                        ***       "<<endl;
    cout<<"                                ***             2)Edit                                     ***       "<<endl;                ////ADMINISTRATOR PANEL////
    cout<<"                                ***                                                        ***       "<<endl;
    cout<<"                                ***                                                        ***       "<<endl;
    cout<<"                                ***             3)Back to General Panel                    ***       "<<endl;
    cout<<"                                ***                                                        ***       "<<endl;
    cout<<"                                **************************************************************       "<<endl;
    cout<<"                                **************************************************************       "<<endl;
    cout<<"                                **************************************************************                                                                     "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                        Please Enter Your Choice:         ";
    cin>>a;
    cout<<endl;

switch(a){

    case 1:
       empinf();
      break;
   case 2:
      edit();
        break;
/*case 3:
    totben();
      break;*/
   case 3:
      genpanel();
default:
    cout<<"Invalid Choice!!!"<<endl;

}
getch();
}
void park::empinf() //Administraror's employee informatrion paneel
{   system("cls");
    string line;
    ifstream file("emplyeee1.txt");
    while(getline(file,line)){
    cout<<line<<endl;
}
file.close();
}
void park::edit()
{
    system("cls");
    int t;
    cout<<"                                                                           "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                   Hi Admin!!!!            "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                   Do You Want To Edit Your Employee Information??       "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                       1. Yes                            "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                                       2. No                             "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                 Please Enter your choice.....     ";
    cin>>t;
    switch(t)
    {
    case(1):
        edit2();
        break;
    case 2:
        adminpanel();
        break;
    default:
        cout<<"Invalid Choice!!!"<<endl;
    }
  getch();
}
void park::edit2()
{
    system("cls");
    string name;
    int id;
    string line;
    fstream out;
    out.open("emplyeee1.txt",fstream::app);
    cout<<"                                   "<<endl;
    cout<<"                                   "<<endl;
    cout<<"                                   "<<endl;
    cout<<"                         Enter your edited information :"<<endl;
    cout<<"                                   "<<endl;
    cout<<"                         Enter the name of the Employee: ";
    cin>>name;
    cout<<"                                   "<<endl;

    cout<<"                           Enter the Id number: ";
    cin>>id;
    cout<<"                                   "<<endl;
    out<<"\n"<<name<<"         "<<id;

    out.close();

    getch();



}
void park::emppanel()
{
    system("cls");
    int w;
    cout<<"                                                                               "<<endl;
    cout<<"                                                                               "<<endl;
    cout<<"                                                                               "<<endl;
    cout<<"                                                                               "<<endl;
    cout<<"                                                                               "<<endl;
    cout<<"                                                                               "<<endl;

    cout<<"                                                 #############                              "<<endl;
    cout<<"                                               ##################                           "<<endl;
    cout<<"                                             ######################                         "<<endl;
    cout<<"                                           ##########################                       "<<endl;
    cout<<"                                        ##############################                      "<<endl;
    cout<<"                                       ###################################                  "<<endl;
    cout<<"                                    ####### Welcome to Employee Panel ######                "<<endl;
    cout<<"                                      ###################################                   "<<endl;
    cout<<"                                        ##############################                      "<<endl;
    cout<<"                                          ##########################                        "<<endl;
    cout<<"                                            ######################                          "<<endl;
    cout<<"                                              ##################                            "<<endl;
    cout<<"                                               ##############                               "<<endl;
    cout<<"                                                                               "<<endl;
    cout<<"                                                                               "<<endl;

    cout<<"                                             Are you an Employee?                               "<<endl;
    //cout<<"                                                                               "<<endl;
    cout<<"                                                    1. YES                                                     "<<endl;
    cout<<"                                                    2. NO                                                          "<<endl;
    cout<<"                                                                               "<<endl;
    //cout<<"                                                                               "<<endl;
    cout<<"                Please Enter your choice:   ";
    cin>>w;

    switch(w)
    {
    case(1):
        empl2();
        break;
    case 2:
        adminpanel();
        break;
    default:

        invalid();
    }
  getch();


}

void park::empl2()
{
    system("cls");
    string name;
    int pass;
    int id;
    cout<<"                                                         "<<endl;
    cout<<"                                                         "<<endl;
    cout<<"                                                         "<<endl;
    cout<<"                                                         "<<endl;
    cout<<"                                                         "<<endl;
    cout<<"                                    Enter the password: ";
    cin>>pass;
    cout<<endl;
    //cout<<"Please enter your name: ";
    //cin>>name;
    //cout<<endl;
    //cout<<"Now enter your id: ";
    //cin>>id;
    //cout<<endl;
    if(pass==123)
    {
        cout<<"                                 Please enter your name: ";
       cin>>name;
       cout<<endl;
      cout<<"                                    Now enter your Id: ";
      cin>>id;
      cout<<endl;

      if(name=="Raisha" && id==2210)
      {
          system("cls");
          string line;
          ifstream file("Raisha.txt");
         while(getline(file,line)){
            cout<<line<<endl;

      }
    }
    //getch();
    if(name=="Rita" && id==2211)
      {
          system("cls");
          string line;
          ifstream file("Rita.txt");
         while(getline(file,line)){
            cout<<line<<endl;
      }
    }//getch();

    }
    else
    {
        invalid();
    }

//getch();

}


void park::custpanel() //Customer panel
{

        system("cls");
        int t;

    cout<<"                                                                    "<<endl;
    cout<<"                                                                    "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                    ####### Welcome to Patron Panel #######             "<<endl;
    cout<<"                                _______________________________________________         "<<endl;
    cout<<"                                     |                                     |            "<<endl;
    cout<<"                                     |      1)Park Schedule                |            "<<endl;
    cout<<"                                     |                                     |            "<<endl;
    cout<<"                                     |      2)Booking Ticket               |            "<<endl;                     ////CUSTOMER PANEL////
    cout<<"                                     |                                     |            "<<endl;
    cout<<"                                     |      3)Food Court                   |            "<<endl;
    cout<<"                                     |                                     |            "<<endl;
    cout<<"                                     |      4)Back to General Panel        |            "<<endl;
    cout<<"                                     |                                     |            "<<endl;
    cout<<"                                _________________________________________________        "<<endl;
    cout<<"                                                                     "<<endl;
    cout<<"                                                                             "<<endl;
    cout<<"                                      Please Enter Your Choice:         ";
    cin>>t;
    cout<<endl;

switch(t){


case 1:
    schedule();
   break;
case 2:
    ticket();
    break;
case 3:
    food();
    break;
case 4:
    genpanel();
default:
    cout<<"Invalid Choice!!!"<<endl;

}
getch();
}
void park::schedule() //Schedule showing panel bt under customer panel
{


system("cls");

    int t;
  cout<<"                                                                             "<<endl;
  cout<<"                                                                             "<<endl;
  cout<<"                                                                             "<<endl;
  cout<<"                                                                             "<<endl;
  cout<<"                                                                             "<<endl;
  cout<<"                                                                             "<<endl;
  cout<<"                                                                             "<<endl;
  cout<<"                                                   DZ Park Schedule               "<<endl;
  cout<<"                                                                             "<<endl;
  cout<<"                                              ******************************      "<<endl;
  cout<<"                                               *     1)8 am - 12 pm       *       "<<endl;
  cout<<"                                               *                          *       "<<endl;
  cout<<"                                               *     2)12 pm - 5 pm       *       "<<endl;
  cout<<"                                               *                          *       "<<endl;             ////SCHEDULE PANEL////
  cout<<"                                               *     3)8 am - 5 pm        *       "<<endl;
  cout<<"                                               *                          *       "<<endl;
  cout<<"                                               *     4)Patron Panel       *       "<<endl;
  cout<<"                                               *                          *       "<<endl;
  cout<<"                                              ******************************     "<<endl;
  cout<<"                                                                             "<<endl;
  cout<<"                                            Please Enter Your Chosen Time:        ";
  cin>>t;
  cout<<endl;

 switch(t)
 {
       case(1):{
           cout<<"                                                                             "<<endl;
           cout<<"                                                                             "<<endl;
           cout<<"                                                Your choice recorded!!"<<endl;

           break;}

     case(2):{
           cout<<"     Your choice recorded!!"<<endl;

           break;}
     case(3):{
           cout<<"     Your choice recorded!!"<<endl;
            break;}
    case(4):{
          custpanel();
           break;}
    default:
        {cout<<"Invalid Choice!!"<<endl;
        cout<<"Please try again...."<<endl;}

}
getch();
//custpanel();

}

void park::ticket()//Booking Ticket panel
{
    system("cls");
    const double TICKET = 100;
    const double DISCOUNT = 15;


    int visitors;
    int age;
    double total = 0;
    double price;

    cout << "Please enter the number of visitors: " << endl;
    cin >> visitors;

    for (int i = 1; i <= visitors; i++)
    {   if (i % 5 == 0) // Every 5th ticket is free
        {   cout << "Your ticket is free!" << endl;                                             ////BOOKING TICKET PANEL////
            price = 0;
        }
        else
        {   cout << "Please enter age of visitor: " << endl;
            cin >> age;
            if (age < 5 || age > 65) //discount for younger than 5 or older than 65
            {   price = TICKET - DISCOUNT;
                cout << "You get a discount of 1.08 " << price <<" BDT"<<endl; // calculate discount
            }
            else
                price = TICKET;
        }
        total += price;
    }

    cout << "You have to pay " << total <<" BDT"<< endl;

getch();
//custpanel();
}
void park::food()
{
system("cls");
int y;

string f;


    cout<<"                                                                            "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                     Welcome to Food Court dear customer!   "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                                 Menu                       "<<endl;
    cout<<"                                    Name:                       Price       "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                    1. Burger                     200 tk    "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                    2. Sandwich                   150 tk    "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                    3. French Fries               80 tk     "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                    4. Pizza                      300 tk    "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                    |||||||Please place the order||||||||   "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                                        Do you wanna place order    "<<endl;
    cout<<"                                                                           "<<endl;
    cout<<"                                               1. Yes                                       "<<endl;
    cout<<"                                               2. No                                       "<<endl;
    cout<<"                                                                                       "<<endl;
    cout<<"                                      Please Enter your choice: ";
    cin>>y;
    switch(y)
    {
    case(1):
        food2();
        break;
    case 2:
        custpanel();
        break;
    default:
        cout<<"Invalid Choice!!!"<<endl;
    }
  getch();
}
void park::food2()
{
    system("cls");
   int n,p,tp=0;
    cout<<"Please Enter number of total items you want to order: "<<endl;
    cout<<endl;
    cin>>n;
    cout<<endl;
    //cout<<"Enter price: "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter price: "<<endl;
        cin>>p;
        cout<<endl;
        tp+=p;
    }
        cout<<"Your Order placed!"<<endl;
        cout<<"                  "<<endl;
        cout<<"You have to pay: "<<tp<<"Tk"<<endl;


getch();
custpanel();


}
void park::invalid()
{
  system("cls");
  int h;
  cout<<"                                                                            "<<endl;
  cout<<"                                                                            "<<endl;
  cout<<"                                                                            "<<endl;
  cout<<"                                                                            "<<endl;
  cout<<"                                                                            "<<endl;
    cout<<"                         Invalid Email Address or Password!!!"<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                          1. Wanna try again                                "<<endl;
    cout<<"                          2. Exit                                           "<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"                          Please Enter your choice:       ";
    cin>>h;
    switch(h)
    {
    case(1):
        genpanel();
        break;
    case 2:
        exit(0);
    default:
        cout<<"Invalid Choice!!!"<<endl;
    }
  getch();

}


int main()
{
    park obj;
    obj.homepage();
    system("pause");
    system("cls");
    obj.genpanel();
    system("pause");
    system("cls");
    obj.adminpanel();
    system("pause");
    system("cls");
    obj.empinf();
    system("cls");
    obj.edit();
    system("cls");
    obj.edit2();
    system("cls");
    obj.emppanel();
    system("cls");
    obj.empl2();
    system("cls");
    obj.custpanel();
    system("pause");
    system("cls");
    obj.schedule();

    return 0;
}
