
#include "Operating System.h"

OperatingSystem ::OperatingSystem ()
    {
        top = 0;
    }

OperatingSystem ::~OperatingSystem ()
    {

    }


int OperatingSystem :: Searching (string s) {
    for (int i = 0; i < top; i++) {
        if (Database[i].Get_UserID() == s) {
            return i;
        }
    }
    return -1;
}

void OperatingSystem :: Headers()
{
    system("cls");
    HFC.open("Headers.txt");
	if (HFC.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(HFC , hfc))
		{
		    system("COLOR 0C");
			cout << "\t" << hfc << endl;
		}
	}

	HFC.close();

}

void OperatingSystem :: Sources()
{
    system("cls");
    SFC.open("Sources.txt");
	if (HFC.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(SFC , sfc))
		{
			cout << "\t" << sfc << endl;
		}
	}

	SFC.close();

}


void OperatingSystem :: GameOver()
{
    getch();
    system("cls");
    GO.open("Game Over.txt");
	if (GO.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(GO , go))
		{
			cout << "\t\t" << go << endl;
		}
	}

	GO.close();
	getch();

}

void OperatingSystem :: LineBar()
{
    system("cls");
    L.open("Line.txt");
	if (L.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(L , l))
		{
			cout << "\t\t" << l << endl;
		}
	}

	L.close();

}

void OperatingSystem :: Delete()
{
    system("cls");
    DE.open("Delete.txt");
	if (DE.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(DE , de))
		{
			cout << "\t\t" << de << endl;
		}
	}

	DE.close();

}

void OperatingSystem :: Info()
{
    system("cls");
    IFO.open("Info.txt");
	if (IFO.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(IFO , ifo))
		{
			cout << ifo << endl;
		}
	}

	IFO.close();

}

void OperatingSystem :: Editing()
{
    system("cls");
    ED.open("Editing.txt");
	if (ED.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(ED , ed))
		{
			cout << ed << endl;
		}
	}

	ED.close();

}

void OperatingSystem :: Invalid()
{
    system("cls");
    IV.open("Invalid User.txt");
	if (IV.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(IV , iv))
		{
			cout << iv << endl;
		}
	}

	IV.close();

}

void OperatingSystem :: SignMemu ()
{
    system("cls");
    SMp.open("Sign Menu.txt");
	if (SMp.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(SMp , smp))
		{
			system("COLOR FC");
			cout << "\t\t" << smp << endl;
		}
	}

	SMp.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";

}

void OperatingSystem :: ThankYou()
{
    system("cls");
    TYp.open("Thank You.txt");
	if (TYp.is_open())
		cout << "\n\n\n\n";
	{
		while (getline(TYp , typ))
		{
			system("COLOR 0E");
			cout << "\t\t" << typ << endl;
		}
	}

	TYp.close();

}


void OperatingSystem :: SignUpMenu()
{
    system("cls");
    SUP.open("SignUpMenu.txt");
	if (SUP.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(SUP , sup))
		{
			cout << "\t\t" << sup << endl;
		}
	}

	SUP.close();

}

void OperatingSystem :: SignInMenu()
{
    system("cls");
    SIP.open("SignInMenu.txt");
	if (SIP.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(SIP , sip))
		{
			cout << "\t\t" << sip << endl;
		}
	}

	SIP.close();

}

void OperatingSystem :: ScreenSize()
{
    system("cls");
    SSp.open("Screen Size.txt");
	if (SSp.is_open())
    cout << "\n\n\n\n\n\n";
	{
		while (getline(SSp , ssp))
		{
			cout  << ssp << endl;
		}
	}

	SSp.close();

	cout << "\n\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t";

	char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            system("mode 130");
            ScreenSize();
            break;

            case 2:
            system("cls");
            system("mode 200");
            ScreenSize();
            break;

            case 0:
            Option();
            break;

            default:
            system("cls");
            ScreenSize();
            break;

        }


    }

}


void OperatingSystem :: ScreenColor()
{
    system("cls");
    SCp.open("Screen Color.txt");
	if (SCp.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(SCp , scp))
		{
			cout << "\t\t" << scp << endl;
		}
	}

	SCp.close();
	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
	char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("COLOR 0F");
            ScreenColor();
            break;

            case 2:
            system("COLOR 0C");
            ScreenColor();
            break;

            case 3:
            system("COLOR F9");
            ScreenColor();
            break;

            case 4:
            system("COLOR 0E");
            ScreenColor();
            break;

            case 5:
            system("COLOR F5");
            ScreenColor();
            break;

            case 6:
            system("COLOR 60");
            ScreenColor();
            break;

            case 7:
            system("COLOR 0A");
            ScreenColor();
            break;

            case 8:
            system("COLOR 2E");
            ScreenColor();
            break;

            case 9:
            system("COLOR 50");
            ScreenColor();
            break;

            case 0:
            Option();
            break;

            default:
            ScreenColor();
            break;

        }

    }

}

void OperatingSystem ::Account ()
{
    string  FN, LN, ID, dob, ads ;

    cout << "\n\n\t\t\t\t\t\t\t\tPut Your First Name : ";
    cin >> FN;
    Database[top].Set_First_Name(FN);

    cout << "\n\n\t\t\t\t\t\t\t\tPut Your Last Name : ";
    cin >> LN;
    Database[top].Set_Last_Name(LN);

    cout << "\n\n\t\t\t\t\t\t\t\tPut Your User User ID number : ";
    cin >> ID;
    Database[top].Set_UserID(ID);

    cout << "\n\n\t\t\t\t\t\t\t\tPut Your Date of Birth : ";
    cin >> dob;
    Database[top].Set_DOB(dob);

    cout << "\n\n\t\t\t\t\t\t\t\tPut Your Address : ";
    cin >> ads;
    Database[top].Set_Ads(ads);

    top++;
    cout << "\n\n\t\t\t\t\t\t\t     ...Your Registration is complete...   " << endl;
    cout << "\n\t\t\t\t\t\t\t ..........Press Enter For continue........." << endl;
    cout << "\n\t\t\t\t\t\t\t\t\t\t";
    _getch();

}


void OperatingSystem :: Delete_Account() {
    string s;
    cout << "\n\n\n\t\t\t\t\t\t\t\tEnter Your ID Number: ";
    cin >> s;

    int m = Searching(s);
    if ( m > -1)
    {
        for(int i = m; i < top; i++)
        {
            Database[m] = Database[m+1];
            top--;
        }

        Delete();
        cout << "\n\t\t\t\t\t\t\t ..........Press Enter For continue........." << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t";
        _getch();

        if (top == 0)
        {
            SignMemu();
        }
        else
        {
            Extra();
        }
    }
    else
    {
        system("cls");
        Invalid();
        cout << "\n\t\t\t\t\t\t\t ..........Press Enter For continue........." << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t";
        _getch();
        system("cls");
        Delete_Account();

    }
}



void OperatingSystem :: Edit_Members_Profile ()
{
    string s;
    cout << "\n\n\n\t\t\t\t\t\t\t\tPut Your User ID Number: ";
    cin >> s;
    system("cls");

    int m = Searching(s);
    if ( m > -1)
    {
        system("cls");
        Editing();
        string FN, LN, ID, dob, ads;

        cout << "\n\n\n\t\t\t\t\t\t\t\tPut New Your First Name : ";
        cin >> FN;
        Database[top].Set_First_Name(FN);

        cout << "\n\n\t\t\t\t\t\t\t\tPut New Your Last Name : ";
        cin >> LN;
        Database[top].Set_Last_Name(LN);

        cout << "\n\n\t\t\t\t\t\t\t\tPut New Your User ID number : ";
        cin >> ID;
        Database[top].Set_UserID(ID);

        cout << "\n\n\t\t\t\t\t\t\t\tPut New Your Date of Birth : ";
        cin >> dob;
        Database[top].Set_DOB(dob);

        cout << "\n\n\t\t\t\t\t\t\t\tPut New Your Address Name : ";
        cin >> ads;
        Database[top].Set_Ads(ads);

        cout << "\n\n\n\t\t\t\t\t\t\t   ......Your Editing is Successful......   " << endl;
        cout << "\n\t\t\t\t\t\t\t ..........Press Enter For continue........." << endl;
        _getch();
        system("cls");
        Extra();



    }
    else
    {
        system("cls");
        Invalid();
        cout << "\n\t\t\t\t\t\t\t ..........Press Enter For continue........." << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t";
        _getch();
        system("cls");
        Edit_Members_Profile();

    }
}


void OperatingSystem :: Information_Of_A_Member ()
{
    string s;
    cout << "\n\n\n\t\t\t\t\t\t\t\tPut Your User ID Number: ";
    cin >> s;

    int m = Searching(s);
    if ( m > -1)
    {
        Info();
        Database[m].Display();

        cout << "\n\n\t\t\t\t\t\t\t........Press Enter For continue........." << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t";
        _getch();
        system("cls");
        Extra();
    }
    else
    {
        system("cls");
        Invalid();
        cout << "\n\t\t\t\t\t\t\t ..........Press Enter For continue........." << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t";
        _getch();
        system("cls");
        Information_Of_A_Member();

    }
}



void OperatingSystem :: Checking()
{
    if(top == 0)
    {
        system("cls");
        SignInMenu();
		cout << "\n\n\t\t\t\t\t\t\t\t\t.....Please Sign Up First....." << endl;
		cout << "\n\t\t\t\t\t\t\t\t.........Press Enter For Sign Up Menu........." << endl;
		cout << "\n\t\t\t\t\t\t\t\t\t\t";
		_getch();
		system("cls");
		SignMemu();
		Database_Operator();

	}
    else
    {
        string s;
        system("cls");
        SignInMenu();
        cout << "\n\t\t\t\t\t\t\t\tPut Your User ID Number: ";
        cin >> s;

        int m = Searching(s);

        if ( m > -1)
            {
                MainMenu();
            }
        else
            {
                system("cls");
                SignInMenu();
                system("cls");
                Invalid();
                cout << "\n\t\t\t\t\t\t\t   ***** Press Enter For Try Again****** " << endl;
                cout << "\n\t\t\t\t\t\t\t\t\t     " ;
                _getch();
                Checking();
            }

    }

}


void OperatingSystem :: MainMenu()
 {
    system("cls");
    MMp.open("Main Menu.txt");
	if (MMp.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(MMp , mmp))
		{
			cout << "\t\t" << mmp << endl;
		}
	}

	MMp.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            Games();
            break;

            case 2:
            system("cls");
            Option();
            break;

            case 3:
            system("cls");
            Extra();
            break;

            case 0:
            system("cls");
            SignMemu();
            Database_Operator();
            break;

            default:
            system("cls");
            MainMenu();
            break;

        }

    }

}



void OperatingSystem :: Option()
{
    system("cls");
    Op.open("Option.txt");
	if (Op.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(Op , op))
		{
			cout << "\t\t" << op << endl;
		}
	}

	Op.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";

    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            ScreenSize();
            break;

            case 2:
            system("cls");
            ScreenColor();
            break;

            case 0:
            MainMenu();
            break;

            default:
            Option();
            break;

        }
    }

}

void OperatingSystem :: Extra()
{
    system("cls");
    Ex.open("Extra.txt");
	if (Ex.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(Ex , ex))
		{
			cout << "\t\t" << ex << endl;
		}
	}

	Ex.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";

    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            Edit_Members_Profile();
            break;

            case 2:
            system("cls");
            Information_Of_A_Member();
            break;

            case 3:
            system("cls");
            Delete_Account();
            break;

            case 4:
            system("cls");
            Admin();
            break;

            case 0:
            MainMenu();
            break;

            default:
            Extra();
            break;

        }
    }

}

void OperatingSystem :: Admin()
{
    string Admin_Name("Roky");
    string Admin_Password("14266142");
    string N;
    string P;
    while(1)
    {
        cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t..........Enter Admin's Name.........." << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t   ";
        cin >> N;
        int A = Admin_Name.compare(N);
        if(A == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t..........Enter Admin's Password.........." << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t";
            cin >> P;
            int B = Admin_Password.compare(P);
            if(B == 0)
            {
                Codes();
            }
            else
            {
                cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t..........Invalid Passord -_- !!.........." << endl;
                cout << "\n\t\t\t\t\t\t\t\t.......... Try Again !! ..............." << endl;

            }
        }
        else
        {
            cout << "\n\n\n\n\n\n\t\t\t\t\t\t\t\t..........Invalid Name -_- !! .........." << endl;
            cout << "\n\t\t\t\t\t\t\t\t.......... Try Again !! ..............." << endl;

        }
    }



}

void OperatingSystem :: Codes()
{
    system("cls");
    CDM.open("Codes Menu.txt");
	if (CDM.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(CDM , cdm))
		{
			cout << "\t\t" << cdm << endl;
		}
	}

	CDM.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";

    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            Headers();
            getch();
            Codes();
            break;

            case 2:
            system("cls");
            Sources();
            getch();
            Codes();
            break;

            case 0:
            Extra();
            break;

            default:
            Codes();
            break;

        }
    }

}


void OperatingSystem :: Database_Operator ()
 {
    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            Checking();
            break;

            case 2:
            system("cls");
            SignUpMenu();
            Account();
            SignMemu();
            Database_Operator();
            break;

            case 0:
            ThankYou();
            exit(0);
            break;

            default:
            system("cls");
            SignMemu();
            Database_Operator();
            break;

        }
    }

}



void OperatingSystem :: Games()
{
    system("cls");
    GS.open("Games.txt");
	if (GS.is_open())
		cout << "\n\n";
	{
		while (getline(GS , gs))
		{
			cout << "\t\t" << gs << endl;
		}
	}

	GS.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";

    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            MathTricks();
            break;

            case 2:
            system("cls");
            cout << "\n\t\t\t\t\t\t\t\t......... Empty .........." << endl;
            cout << "\n\t\t\t\t\t\t\t\t..........Press Enter For Back.........." << endl;
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t";
            getch();
            Games();
            break;

            case 0:
            MainMenu();
            break;

            default:
            Games();
            break;

        }
    }

}

void OperatingSystem :: MathTricks()
{
    system("cls");
    MT.open("Math Tricks.txt");
	if (MT.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(MT , mt))
		{
			cout << "\t\t" << mt << endl;
		}
	}

	MT.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";

    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            Summation();
            break;

            case 2:
            system("cls");
            Subtraction();
            break;

            case 0:
            Games();
            break;

            default:
            MathTricks();
            break;

        }
    }

}

void OperatingSystem :: Summation()
{
    system("cls");
    Sum.open("Summation.txt");
	if (Sum.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(Sum , sum))
		{
			cout << "\t\t" << sum << endl;
		}
	}

	Sum.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";

    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            LineBar();
            SimpleSum();
            GameOver();
            Summation();
            break;

            case 2:
            system("cls");
            LineBar();
            MediumSum();
            GameOver();
            Summation();
            break;

            case 3:
            system("cls");
            LineBar();
            ComplexSum();
            GameOver();
            Summation();
            break;

            case 0:
            Games();
            break;

            default:
            MathTricks();
            break;

        }
    }

}

void OperatingSystem :: Subtraction()
{
    system("cls");
    Sub.open("Subtraction.txt");
	if (Sub.is_open())
		cout << "\n\n\n\n\n\n";
	{
		while (getline(Sub , sub))
		{
			cout << "\t\t" << sub << endl;
		}
	}

	Sub.close();

	cout << "\n\t\t\t\t\t\t\t\t..........Press Your Choose Option.........." << endl;
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t";

    char ch = '\0';
    while (ch != 'n' && ch != 'N')
    {
        int s;
        cin >> s;
        switch (s)
        {
            case 1:
            system("cls");
            LineBar();
            SimpleSub();
            GameOver();
            Subtraction();

            break;

            case 2:
            system("cls");
            LineBar();
            MediumSub();
            GameOver();
            Subtraction();
            break;

            case 3:
            system("cls");
            LineBar();
            ComplexSub();
            GameOver();
            Subtraction();
            break;

            case 0:
            Games();
            break;

            default:
            MathTricks();
            break;

        }
    }

}

void OperatingSystem :: SimpleSum()
{
    int x[SIZE];
    int y[SIZE];
    int z[SIZE];
    int a;
    int  m = 0 , n = 0 ;

    for (int i = 0 ; i < SIZE ; i++)
    {
        x[i] = rand() % 6 + 1;
        y[i] = rand() % 6 + 1;

    }

    for (int i = 0 ; i < SIZE ; i++)
    {
        z[i] = x[i] + y [i];
        cout << "\n\t\t\t\t\t\t\t\tWhat is the answer  of This Equation ?? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t" << x[i] << "  +  " << y[i] << "  =   ";
        cin >> a ;
        if (z[i] == a)
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is  right !! ^_^ \n\n" << endl;
            m++;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is Wrong !! \n\n " << endl;
            n++;
        }

    }
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tTotal right ans is " << m << endl;
    cout << "\n\t\t\t\t\t\t\t\t\tTotal wrong ans is " << n << endl;

}


void OperatingSystem :: MediumSum()
{
    int x[SIZE];
    int y[SIZE];
    int z[SIZE];
    int a;
    int  m = 0 , n = 0 ;

    for (int i = 0 ; i < SIZE ; i++)
    {
        x[i] = rand() % 101;
        y[i] = rand() % 101;

    }

    for (int i = 0 ; i < SIZE ; i++)
    {
        z[i] = x[i] + y [i];
        cout << "\n\t\t\t\t\t\t\t\tWhat is the answer  of This Equation ?? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t" << x[i] << "  +  " << y[i] << "  =   ";
        cin >> a ;
        if (z[i] == a)
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is  right !! ^_^ \n\n" << endl;
            m++;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is Wrong !! \n\n " << endl;
            n++;
        }

    }
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tTotal right ans is " << m << endl;
    cout << "\n\t\t\t\t\t\t\t\t\tTotal wrong ans is " << n << endl;
}


void OperatingSystem :: ComplexSum()
{
    double x[SIZE];
    double y[SIZE];
    double z[SIZE];
    double a;
    int  m = 0 , n = 0 ;

    for (int i = 0 ; i < SIZE ; i++)
    {
        x[i] = rand() % 101;
        y[i] = rand() % 101;

        x[i] = x[i] / 3.3;
        y[i] = x [i] /3.3;

    }

    for (int i = 0 ; i < SIZE ; i++)
    {
        z[i] = x[i] + y [i];
        cout << "\n\t\t\t\t\t\t\t\tWhat is the answer  of This Equation ?? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t" << x[i] << "  +  " << y[i] << "  =   ";
        cin >> a ;
        if (z[i] == a)
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is  right !! ^_^ \n\n" << endl;
            m++;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is Wrong !! \n\n " << endl;
            n++;
        }

    }
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tTotal right ans is " << m << endl;
    cout << "\n\t\t\t\t\t\t\t\t\tTotal wrong ans is " << n << endl;
}

void OperatingSystem :: SimpleSub()
{
    int x[SIZE];
    int y[SIZE];
    int z[SIZE];
    int a;
    int  m = 0 , n = 0 ;

    for (int i = 0 ; i < SIZE ; i++)
    {
        x[i] = rand() % 6 + 1;
        y[i] = rand() % 6 + 1;

    }

    for (int i = 0 ; i < SIZE ; i++)
    {
        z[i] = x[i] - y [i];
        cout << "\n\t\t\t\t\t\t\t\tWhat is the answer  of This Equation ?? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t" << x[i] << "  -  " << y[i] << "  =   ";
        cin >> a ;
        if (z[i] == a)
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is  right !! ^_^ \n\n" << endl;
            m++;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is Wrong !! \n\n " << endl;
            n++;
        }

    }
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tTotal right ans is " << m << endl;
    cout << "\n\t\t\t\t\t\t\t\t\tTotal wrong ans is " << n << endl;
}


void OperatingSystem :: MediumSub()
{
    int x[SIZE];
    int y[SIZE];
    int z[SIZE];
    int a;
    int  m = 0 , n = 0 ;

    for (int i = 0 ; i < SIZE ; i++)
    {
        x[i] = rand() % 101;
        y[i] = rand() % 101;

    }

    for (int i = 0 ; i < SIZE ; i++)
    {
        z[i] = x[i] - y [i];
        cout << "\n\t\t\t\t\t\t\t\tWhat is the answer  of This Equation ?? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t" << x[i] << "  -  " << y[i] << "  =   ";
        cin >> a ;
        if (z[i] == a)
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is  right !! ^_^ \n\n" << endl;
            m++;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is Wrong !! \n\n " << endl;
            n++;
        }

    }
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tTotal right ans is " << m << endl;
    cout << "\n\t\t\t\t\t\t\t\t\tTotal wrong ans is " << n << endl;
}


void OperatingSystem :: ComplexSub()
{
    double x[SIZE];
    double y[SIZE];
    double z[SIZE];
    double a;
    int  m = 0 , n = 0 ;

    for (int i = 0 ; i < SIZE ; i++)
    {
        x[i] = rand() % 101;
        y[i] = rand() % 101;

        x[i] = x[i] / 3.3;
        y[i] = x [i] /3.3;

    }

    for (int i = 0 ; i < SIZE ; i++)
    {
        z[i] = x[i] - y [i];
        cout << "\n\t\t\t\t\t\t\t\tWhat is the answer  of This Equation ?? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t" << x[i] << "  -  " << y[i] << "  =   ";
        cin >> a ;
        if (z[i] == a)
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is  right !! ^_^ \n\n" << endl;
            m++;
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t\t\t\tAns is Wrong !! \n\n " << endl;
            n++;
        }

    }
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tTotal right ans is " << m << endl;
    cout << "\n\t\t\t\t\t\t\t\t\tTotal wrong ans is " << n << endl;
}



