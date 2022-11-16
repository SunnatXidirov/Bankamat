#include<iostream>

using namespace std;

double balance = 1000000, tek;
string pin = "1122";
string tpin, code, dcode;
string lang;
int til, y, kirish, a;
int x = 0;
void balanc();
void Menu();
void close();
void Pul_yechish();
void Pin();
void stop();
void Uzb();
void Til();

int main() {


    cout << endl;
    cout << "                     ASSALOM ALEKUM BANKAMATIMIZGA HUSH KELIBSIZ" << endl << endl << endl;

    cout << endl << endl;
    Til();

    main();
    return 0;
}

void balanc() {

    cout << "sizning balasingiz : " << balance << endl << endl << endl;

    cout << "                                                      1.  Menu ga qaytish " << endl;
    cout << "                                                      2.  Operatsiya to'xtatilsin " << endl;
    cin >> a;
    switch (a) {

        case 1:
            Menu();
            break;
        case 2:
            stop();
            break;
        default: {
            cout << "    " << endl << endl; balanc();
            break;
        }
    }
}

void Menu() {

    cout << "1.Balance tekshirish " << endl;
    cout << "2.Pul yechish " << endl;
    cout << "3.Pin o'zgartirish " << endl << endl;
    cout << "4.Chiqish" << endl;
    cin >> kirish;
    switch (kirish) {
        case 1:
            balanc();
            break;
        case 2:
            Pul_yechish();
            break;
        case 3:
            Pin();
            break;
        case 4:
            stop();
            break;
        default:
            cout << "     " << endl << endl; Menu(); break;

    }

}


void close() {

    cout << "                                                      1.  Menu ga qaytish " << endl;
    cout << "                                                      2.  Operatsiya to'xtatilsin " << endl;
    cin >> a;
    switch (a)
    {
        case 1:
            Menu(); break;
        case 2:
            stop(); break;
        default:
            cout << "     " << endl << endl; close(); break;
    }

}

void Pul_yechish() {

    cout << " Summani kiriting :" ;
    cin >> y;

    tek = balance - y - y * 0.01;

    if (tek > 0) {
        x = 0;

        balance = balance - y - y * 0.01;
        cout << endl << endl;
        cout << "                    Tranzaksiya muvofaqiyatli amalga oshdi " << endl << endl;

        close();


    }
    else {
        cout << "Mablag' yetarli emas !!" << endl << endl;
        close();
    }
}

void Pin() {
    while (true) {
        cout << "eski kodni kiriting :";
        cin >> code;

        if (code == pin) {
            x = 0;
            cout << " Yangi Kodni kiriting :";
            cin >> dcode;
            pin = dcode;
            cout << endl;
            cout << "Operatsiya Muvofaqiyatli amalga oshdi " << endl << endl;

            close();
        }
        else if (x == 3) {

            cout << "Tabriklayman kartanggiz blocklandi !! " << endl << endl;
            return;

        }
        else if (x == 1) {
            x++;
            cout << "Kod Xato !!!" << endl;
            cout << "3 ta Xatodan keyin kartangiz bloklanadi !" << endl;

        }
        else {
            x++;
            cout << "Kod Xato !" << endl;
        }

    }


}

void stop() {
    cout << "                " << endl << endl; Til();
}


void Uzb() {
    while (true) {

        cout << " pin : ";
        cin >> tpin;
        cout << endl << endl;
        if (pin == tpin) {
            x = 0;
            cout << "1.Balance tekshirish " << endl << endl;
            cout << "2.Pul yechish " << endl << endl;
            cout << "3.Pin o'zgartirish " << endl << endl;
            cout << "4.Chiqish" << endl;
            cin >> kirish;
            switch (kirish) {
                case 1:
                    balanc(); break;
                case 2:
                    Pul_yechish(); break;
                case 3:
                    Pin(); break;
                case 4:
                    stop(); break;

                default: cout << "     " << endl << endl; Menu(); break;
            }
        }
        else if (x == 3) {

            cout << "Tabriklayman kartanggiz blocklandi !! " << endl << endl;
            return ;

        }
        else if (x == 1) {
            x++;
            cout << "Kod Xato !!!" << endl;
            cout << "3 ta Xatodan keyin kartangiz bloklanadi !" << endl;

        }
        else {
            x++;
            cout << "Kod Xato !" << endl;
        }


    }
}

void Til() {

    cout << "1. O'zbek" << endl;
    cout << "2. English" << endl;
    cin >> til;
    switch (til) {
        case 1:
            Uzb();
            break;
        case 2:
            cout << "Uzur hali ingliz tiliga tarjima qilishga ulgurmagandim " << endl << endl;
            stop();
            break;
        default:
            cout << "      " << endl << endl;
            Til();

    }
}




