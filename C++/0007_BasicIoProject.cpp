#include <iostream>

using namespace std;

int main()
{
    cout << "hello world!" << endl;

    cout << "hello";
    cout << "world!" << endl;
    //kyunki isme first part mein endl nhi laga tha ...so isne in dono ko ek hi line print kar diya and space bhi nhi aayi....but world! print hone ke baad it will change the line.
    
    cout << "hello" << "world" << endl;
    //is wale mein it will print both the words together....but space nhi read karega...if space dena h toh we will do it accordingly...

    cout << "hello" << "world" << "\n";
    //in this one we used \n in place of endl..does the same job...almost.....endl also removes the buffer window...

    cout << "hello\nout\nthere\n";
    //every time compiler \n encounter karega...it will change to a new line....and start printing from there

    int num1;
    int num2;
    int num3;
    int num4;
    double num5;

    cout << "Enter an integer ";
    cin >> num1;
    //whitespaces will be ignored.....and everything after a sequence of characters will be ignored....

    //also cin ko pata h ki num1 is an integer.....so if hum integer ki jagah string enter karte h toh it will just consider the default value of integer...jo h....0

    //agar hum double ya float value enter karte h toh it will take the  part of the number that is before the decimal...suppose humne enter kiya 12.8 ...toh woh bas 12 hi accept karega

    cout << "You entered : " << num1 << endl;
    //this will display the value stored in num1 with a space after :

    cout << "Enter value of num2" << endl;
    cin >> num2;

    cout << "Enter value of num3" << endl;
    cin >> num3;
    //ab is wale mein twist h....agar hum normally enter kare.....joki h ....enter a number....press enter....enter another number....press enter....toh woh normal process h....but isko alag tarah se bhi kar sakte h

    //hum 2 enter ek sath enter kar sakte h....with a space in between.....ab aap sochoge ki ek number toh ignore ho jaega....but yahi toh buffer window kaam ati h....space se pehle tak jo bhi enter kiya h...woh read karke num2 mein store ho jaega....and jo dusra number h...woh buffer mein stored rahega...and jab firse it'll search for an input...toh buffer wala number read hoke num3 mein store ho jaega...

    //if apko ek hi line mein dono numbers enter karne h...toh aap ye type kar sakte h ---
    //    cin >> num2 >> num3;

    //yippiiiesss...

    cout << "you entered : " << num2 << " and " << num3 << endl;

    cout << "Enter an integer" << endl;
    cin >> num4;

    cout << "Enter a double" << endl;
    cin >> num5;
    //yahan pe agar normally enter kare numbers toh koi problem nhi hogi.....but suppose humne integer mein enter kiya -- 10.5....toh woh 10 tak read karega....and it'll think...yahan tak integer h...toh 10 store kar dega num 4 mein.....par...par ...... 0.5 abhi bhi buffer mein pada h.....so next time woh value ke liye search karega buffer mein toh usko 0.5 milega pada hua.....joki ek double value h...toh woh store ho jaegi num5 mein

    cout << "The integer is : " << num4 << endl;
    cout << "The double is : " << num5 << endl;

    return 0;
}