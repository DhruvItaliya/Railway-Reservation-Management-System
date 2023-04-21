#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <cstdio>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#include <graphics.h>

using namespace std;

class Details
{
public:
    static string name[6], gender[6];
    int phoneNo;
    static int age[6];
    static string bp[6];
    static int cId[6];
    char arr[100];
    static int pnr;
    static int n;
    void information()
    {
        pnr = 1000000000 + (rand() % 9000000000);
        cout << "\nYour PNR number is: " << pnr << endl;
        cout << "\nEnter the number of passengers: ";
        cin.ignore();
        cin.clear();
        fflush(stdin);
        cin >> n;
        if (n > 6)
        {
            cout << "You can book tickets for only 6 passengers in a ticket!" << endl<< endl;
        }
        for (int i = 0; i < n; i++)
        {
            cout << "\n Enter the customer ID :";
            cin >> cId[i];

            cout << "\n Enter the Name :";
            cin >> name[i];
            cout << "\n Enter the age :";
            cin >> age[i];
            cout << "\n Enter Birth Preference :";
            cin >> bp[i];
            cout << "\n Gender:";
            cin >> gender[i];
        }
        cout << "Yours details are saved with us.\n";

        cout << "Your PNR number is: " << pnr << endl;
        cout << "Please use this PNR number to book tickets!" << endl << endl;
    }
};

int Details::cId[6];
string Details::name[6];
string Details::gender[6];
int Details::pnr;
string Details::bp[6];
int Details::age[6];
int Details::n;

class registration : public Details
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void trains()
    {
        string trainsN[] = {"DELHI", "KOLKATA", "PATNA", "NAGPUR", "JAIPUR", "MUMBAI"};

        for (int a = 0; a < 6; a++)
        {
            cout << (a + 1) << ".train to " << trainsN[a] << endl;
        }

        cout << "\nWELCOME TO THE RAIWAYS!" << endl;
        cout << "Press the number of the city you want to book the train:";
        cin >> choice;
        int f;

        switch (choice)
        {
        case 1:
        {
            cout << "_WELCOME TO DELHI_\n"<< endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n"<< endl;
            cout << " 1.DEL-123 " << endl;
            cout << "\t08-01-2022  8:00AM  10hrs  3A-Rs.2100 2A-Rs.3100 1A-Rs.5200" << endl;
            cout << " 2.DEL-345 " << endl;
            cout << "\t09-01-2022  10:00AM  15hrs  3A-Rs.2300 2A-Rs.3300 1A-Rs.5400" << endl;
            cout << " 3.DEL-456" << endl;
            cout << "\t10-01-2022  11:00AM  20hrs  3A-Rs.2400 2A-Rs.3500 1A-Rs.5100" << endl;

            cout << "\n Select the Trains you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3) charges = 2100;
                else if (f == 2) charges = 3100;
                else if (f == 1) charges = 5200;

                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN DEL-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }

            else if (choice1 == 2)
            {
                if (f == 3) charges = 2300;
                else if (f == 2) charges = 3300;
                else if (f == 1) charges = 5400;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN DEL-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3) charges = 2400;
                else if (f == 2) charges = 3500;
                else if (f == 1) charges = 5100;

                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN DEL-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }

            cout << " press any key to go back to the main menu: " << endl;
            break;
        }

        case 2:
        {
            cout << "_WELCOME TO KOLKATA_\n"<< endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the Trains \n"<< endl;

            cout << " 1.KOL-897 " << endl;
            cout << "\t20-01-2022  8:00PM  10hrs 3A-Rs.1800 2A-Rs.2600 1A-Rs.4400" << endl;
            cout << " 2.KOL-567 " << endl;
            cout << "\t21-01-2022  10:00PM  15hrs 3AC-Rs.1900 2AC-Rs.2200 1AC-Rs.4800" << endl;
            cout << " 3.KOL-789" << endl;
            cout << "\t22-01-2022  11:00PM  20hrs 3A-Rs.1700 2A-Rs.2100 1A-Rs.4500" << endl;

            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3) charges = 1800;
                else if (f == 2) charges = 2600;
                else if (f == 1) charges = 4400;

                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN KOL-897" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3) charges = 1900;
                else if (f == 2) charges = 2200;
                else if (f == 1) charges = 4800;

                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN KOL-567" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3) charges = 1700;
                else if (f == 2) charges = 2100;
                else if (f == 1) charges = 4500;

                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN KOL-789" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }
            break;
        }

        case 3:
        {
            cout << "_WELCOME TO PATNA_\n"<< endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the TRAINS \n"<< endl;

            cout << " 1.PAT-123 " << endl;
            cout << "\t24-01-2022  12:00AM  10hrs 3A-Rs.2200 2A-Rs.3200 1A-Rs.5500" << endl;
            cout << " 2.PAT-345 " << endl;
            cout << "\t25-01-2022  2:00PM 15hrs  3A-Rs.2300 2A-Rs.3400 1A-Rs.5600" << endl;
            cout << " 3.PAT-456" << endl;
            cout << "\t26-01-2022  4:00PM  20hrs  3A-Rs.2400 2A-Rs.3600 1A-Rs.5700" << endl;

            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3) charges = 2200;
                else if (f == 2) charges = 3200;
                else if (f == 1) charges = 5500;

                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN PAT-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3) charges = 2300;
                else if (f == 2) charges = 3400;
                else if (f == 1) charges = 5600;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN PAT-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3) charges = 2400;
                else if (f == 2) charges = 3600;
                else if (f == 1) charges = 5700;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN PAT-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }
            break;
        }
        case 4:
        {
            cout << "_WELCOME TO NAGPUR_\n"<< endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the TRAINS \n"<< endl;

            cout << " 1.NAG-123 " << endl;
            cout << "\t14-03-2022  12:00AM  10hrs 3AC-Rs.1300 2AC-Rs.1900 1AC-Rs.3400" << endl;
            cout << " 1.NAG-345 " << endl;
            cout << "\t15-03-2022  2:00PM 15hrs  3AC-Rs.1400 2AC-Rs.2000 1AC-Rs.3500" << endl;
            cout << " 1.NAG-456" << endl;
            cout << "\t16-03-2022  4:00PM  20hrs 3AC-Rs.1500 2AC-Rs.2100 1AC-Rs.4200" << endl;

            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3) charges = 1300;
                else if (f == 2) charges = 1900;
                else if (f == 1) charges = 3400;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN NAG-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3) charges = 1400;
                else if (f == 2) charges = 2000;
                else if (f == 1) charges = 3500;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN NAG-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3) charges = 1500;
                else if (f == 2) charges = 2100;
                else if (f == 1) charges = 4200;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN NAG-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }
            break;
        }

        case 5:
        {
            cout << "_WELCOME TO JAIPUR_\n" << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the TRAINS \n" << endl;

            cout << " 1.JAI-123 " << endl;
            cout << "\t17-01-2022  12:00AM  10hrs 3A-Rs.2200 2A-Rs.3200 1A-Rs.5300" << endl;
            cout << " 2.JAI-345 " << endl;
            cout << "\t18-01-2022  2:00PM 15hrs 3A-Rs.2300 2A-Rs.3300 1A-Rs.5400" << endl;
            cout << " 3.JAI-456" << endl;
            cout << "\t19-01-2022  4:00PM  20hrs 3A-Rs.2400 2A-Rs.3500 1A-Rs.5500" << endl;

            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";

            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3) charges = 2200;
                else if (f == 2) charges = 3200;
                else if (f == 1) charges = 5300;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN JAI-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3) charges = 2300;
                else if (f == 2) charges = 3300;
                else if (f == 1) charges = 5400;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN JAI-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3) charges = 2400;
                else if (f == 2) charges = 3500;
                else if (f == 1) charges = 5500;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN JAI-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }
            break;
        }

        case 6:
        {
            cout << "_WELCOME TO MUMBAI_\n" << endl;
            cout << " your comfort is our priority , Enjoy the journey!" << endl;
            cout << " Following are the TRAINS \n" << endl;

            cout << " 1.MUM-123 " << endl;
            cout << "\t04-09-2022  12:00AM  10hrs  3A-Rs.1500 2A-Rs.2200 1A-Rs.3700" << endl;
            cout << " 2.MUM-345 " << endl;
            cout << "\t05-09-2022  2:00PM 15hrs  3A-Rs.1600 2A-Rs.2300 1A-Rs.3800" << endl;
            cout << " 3.MUM-456" << endl;
            cout << "\t06-09-2022  4:00PM  20hrs  3A-Rs.1700 2A-Rs.2400 1A-Rs.3900" << endl;

            cout << "\n Select the TRAINS you want to book : ";
            cin >> choice1;
            cout << "\n Enter the AC class in which u want to travel : ";
            cin >> f;

            if (choice1 == 1)
            {
                if (f == 3) charges = 1500;
                else if (f == 2) charges = 2200;
                else if (f == 1) charges = 3700;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN MUM-123" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 2)
            {
                if (f == 3) charges = 1600;
                else if (f == 2) charges = 2300;
                else if (f == 1) charges = 3800;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN MUM-345" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else if (choice1 == 3)
            {
                if (f == 3) charges = 1700;
                else if (f == 2) charges = 2400;
                else if (f == 1) charges = 3900;
                cout << "\n YOU HAVE SUCCESFULLY BOOKED THE TRAIN MUM-456" << endl;
                cout << " YOU CAN GO BACK TO MENU AND TAKE THE TICKET " << endl;
            }
            else
            {
                cout << " Invalid input,shifting to previous menu" << endl;
                trains();
            }
            break;
        }
        }
    }
};

float registration::charges;
int registration::choice;

class ticket : public registration
{

public:
    void Bill()
    {
        string destination[6] = {};

        for (int i = 0; i < n; i++)
        {

            ofstream outf("tickets.txt", ios::app);
            {
                outf << pnr << "\t\t|";
                outf << cId[i] << "\t\t|";
                outf << name[i] << "\t|";
                outf << gender[i] << "\t|";

                if (registration::choice == 1) destination[i] = "Delhi";
                else if (registration::choice == 2) destination[i] = "Chennai";
                else if (registration::choice == 3) destination[i] = "Patna";
                else if (registration::choice == 4) destination[i] = "Nagpur";
                else if (registration::choice == 5) destination[i] = "Jaipur";
                else if (registration::choice == 6) destination[i] = "Mumbai";
                outf << "CHN" << "\t\t|";
                outf << destination[i] << "\t\t|";
                outf << registration::charges << "\t|";
                outf << endl;
                database();
            }

            outf.close();
        }
        cout << "Total Cost: " << charges * n<<endl;
        int back;
        cout<<"press any key to back";
        cin.ignore();
        cin.clear();
        fflush(stdin);
        cin>>back;
        if(back==1)
        {
            return;
        }
        else
        {
            return;
        }
    }

    void database()
    {
        string destination[6] = {};

        for (int i = 0; i < n; i++)
        {
            ofstream outf("records.txt", ios::app);
            {
                outf << pnr << " ";
                outf << cId[i] << " ";
                outf << name[i] << " ";
                outf << gender[i] << " ";

                if (registration::choice == 1) destination[i] = "Delhi";
                else if (registration::choice == 2) destination[i] = "Chennai";
                else if (registration::choice == 3) destination[i] = "Patna";
                else if (registration::choice == 4) destination[i] = "Nagpur";
                else if (registration::choice == 5) destination[i] = "Jaipur";
                else if (registration::choice == 6) destination[i] = "Mumbai";
                outf << destination[i] << " ";
                outf << registration::charges;
                outf << endl;
            }

            outf.close();
        }
    }

    void dispDatabase()
    {
        string cpnr,cid,cname,cgen,cdest,ccharge;

        cout << "____XYZ Railways_____" << endl;
        cout << "____Tickets______" << endl;
        cout << "___________" << endl << endl;

        cout << "|PNR Num\t|"<< "Customer ID\t|"<< "Name\t\t|"<< "Gender\t|"<< "Destination\t|"<< "Charge\t\t|" << endl;

        ifstream ifs;
        ifs.open("records.txt");

        while(ifs>>cpnr>>cid>>cname>>cgen>>cdest>>ccharge)
        {
            cout<<"|"<<cpnr<<"\t|"<<cid<<"\t\t|"<<cname<<"\t\t|"<<cgen<<"\t|"<<cdest<<"\t\t|Rs. "<<ccharge<<"\t|"<<endl;
        }
        cout<<endl;

        int back;
        cout<<"press any key to back";
        cin.ignore();
        cin.clear();
        fflush(stdin);
        cin>>back;
        ifs.close();
        if(back==1)
        {
            return;
        }
        else
        {
            return;
        }

    }

    void deletedata()
    {
        int w;
        cin.ignore();
        cin.clear();
        fflush(stdin);
        cout << "Enter PNR no.:" << endl;
        cin >> w;
        string line;
        int cpnr, ccharges, ccid;
        string cname, cgen, cdest;

        ifstream myfile;
        ofstream temp;
        myfile.open("records.txt");
        temp.open("temp.txt");
        while (myfile >> cpnr >> ccid >> cname >> cgen >> cdest >> ccharges)
        {
            if (cpnr != w)
                temp << cpnr << " " << ccid << " " << cname << " " << cgen << " " << cdest << " " << ccharges << endl<< flush;
        }
        cout << "The record with the name " << w << " has been deleted if it exsisted" << endl;
        myfile.close();
        temp.close();
        remove("records.txt");
        getchar();
        rename("temp.txt", "records.txt");
        int back;
        cout<<"press any key to back";
        cin>>back;
        if(back==1)
        {
            return;
        }
        else
        {
            return;
        }
    }
};

int up_down_menu(char* menu[],int n)
{
    int k;
    int arrow = 0;
    char *text;
    int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CXSCREEN);
    line(0, 240, width, 240);
    line(0, 675, width, 675);
    setcolor(BLUE);
    settextstyle(8, HORIZ_DIR, 4);
    outtextxy(100, 700, "---->Press UP & Down Key For Moving the Arrow.<----");
    outtextxy(100, 740, "---------->Press Enter to select.<---------------");
    setcolor(LIGHTGREEN);
    text = new char[strlen(menu[0]) + 1];
    strcpy(text, menu[0]);
    outtextxy(200,300,text);
    for(int i=1; i<n; i++)
    {
        setcolor(BLACK);
        text = new char[strlen(menu[i]) + 1];
        strcpy(text, menu[i]);
        outtextxy(200,300 + i*40,text);
    }

    do
    {
        k = getch();
        switch(k)
        {
        case 0:
            k = getch();
            switch(k)
            {
            case 80:
                text = new char[strlen(menu[arrow]) + 1];
                strcpy(text, menu[arrow]);
                setcolor(BLACK);
                outtextxy(200,300 + arrow*40,text);
                arrow = (arrow + 1) % n;
                text = new char[strlen(menu[arrow]) + 1];
                strcpy(text, menu[arrow]);
                setcolor(LIGHTGREEN);
                outtextxy(200,300 + arrow*40,text);
                break;
            case 72:
                text = new char[strlen(menu[arrow]) + 1];
                strcpy(text, menu[arrow]);
                setcolor(BLACK);
                outtextxy(200,300 + arrow*40,text);
                arrow = (arrow + n - 1) % n;
                text = new char[strlen(menu[arrow]) + 1];
                strcpy(text, menu[arrow]);
                setcolor(LIGHTGREEN);
                outtextxy(200,300 + arrow*40,text);
                break;
            }
            break;
        case 13:
            return arrow;
            break;
        }

    }
    while(true);

}



class Management : public ticket
{
public:
    Management()
    {
        firstPage();
    }

    void firstPage()
    {
        int height = GetSystemMetrics(SM_CYSCREEN);
        int width = GetSystemMetrics(SM_CXSCREEN);
        initwindow(width,height,"Menu");
fpage:
        setfillstyle(SOLID_FILL, LIGHTBLUE);
        floodfill(0, 0, WHITE);
        setbkcolor(LIGHTBLUE);
        setcolor(MAGENTA);
        settextstyle(10, HORIZ_DIR, 8);
        outtextxy(100, 50, "RAILWAY RESERVATION");
        outtextxy(100, 150, "SYSTEM");

        char* menu[2] = {"Admin","Exit"};
        int pos = up_down_menu(menu,2);

        while(true)
        {
            switch(pos)
            {
            case 0:
            {
                closegraph();
                system("cls");
                initwindow(width,height,"Menu");
                int pos1;
                char* menu1[3] = {"Create New Account","Login using existing account","Exit"};
login:
                setfillstyle(SOLID_FILL, LIGHTBLUE);
                floodfill(0, 0, WHITE);
                setbkcolor(LIGHTBLUE);
                setcolor(MAGENTA);
                settextstyle(10, HORIZ_DIR, 8);
                outtextxy(100, 50, "WELCOME TO ADMIN");
                outtextxy(100, 150, "MODE");
                pos1 = up_down_menu(menu1,3);
                switch(pos1)
                {
                case 0:
                {
                    closegraph();
                    string uid, upass;
                    cout << "__________________________________________________________________________________" << endl;
                    cout << "______________________________CREATING NEW ACCOUNT_________________________________" << endl;
                    cout << "\nEnter the New ID: ";
                    cin >> uid;
                    cout << "\nEnter Password: ";
                    cin >> upass;

                    fstream f("admin.txt", ios::app);
                    f << uid << " " << upass << endl;
                    f.close();
                    cout << "New Admin ID created!";
                    cout << "Your Admin ID is " << uid << " and password is " << upass << endl;
                    cout << "Use this as Login Credentials!" << endl<< endl;
                    break;
                }
                case 1:
                {
                    closegraph();
                    cout << "__________________________________________________________________________________" << endl;
                    cout << "__________________________________LOGING IN_______________________________________" << endl;

                    string uid, upass;
                    string cuid, cupass;

                    cout << "\nEnter ID: ";
                    cin >> uid;

                    cout << "\nEnter Password: ";
                    cin >> upass;

                    fstream f1("admin.txt", ios::in);
                    while (!f1.eof())
                    {

                        f1 >> cuid >> cupass;
                        cout << endl;

                        if (uid == cuid && upass == cupass)
                        {
                            cout << "\nCredentials Matched!" << endl;
                            cout << "\n_____________________________________________________________________________________" << endl;
                            int pos2;
                            char* menu2[6] = {"Add the Customer Details",
                                              "Train Booking",
                                              "Ticket and Charges",
                                              "Display Database",
                                              "Cancel Ticket",
                                              "Exit"
                                             };
info :
                            initwindow(width,height,"Menu");
                            setfillstyle(SOLID_FILL, LIGHTBLUE);
                            floodfill(0, 0, WHITE);
                            setbkcolor(LIGHTBLUE);
                            setcolor(MAGENTA);
                            settextstyle(10, HORIZ_DIR, 8);
                            outtextxy(100, 50, "XYZ Railways");
                            outtextxy(100, 150, "Main Menu");
                            pos2 = up_down_menu(menu2,6);

                            switch(pos2)
                            {
                            case 0:
                            {
                                closegraph();
                                information();
                                goto info;
                                break;
                            }
                            case 1:
                            {
                                closegraph();
                                trains();
                                goto info;
                                break;
                            }
                            case 2:
                            {
                                closegraph();
                                Bill();
                                goto info;
                                break;
                            }
                            case 3:
                            {
                                closegraph();
                                dispDatabase();
                                goto info;
                                break;
                            }
                            case 4:
                            {
                                closegraph();
                                deletedata();
                                goto info;
                                break;
                            }
                            case 5:
                            {
                                goto login;
                                break;
                            }

                            }
                        }
                    }

                    cout << "Please enter correct details" << endl;
                    cout << "\n_____________________________________________________________________________________" << endl;
                    break;
                }
                case 2:
                    goto fpage;
                    break;
                }
                break;
            }
            case 1:
                exit(0);
                break;

            }

        }
        getch();
    }
};

int main()
{
    Management mobj;
    return 0;
}
