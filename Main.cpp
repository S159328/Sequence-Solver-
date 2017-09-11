#include <iostream>
#include <string.h>
#include <math.h>
#include <cmath>
using namespace std;
int main () 
{ 
    int reply;
    cout << "Hello Human. Welcome to Sequence Solver. Select An Operation." << endl;
    cout << "1)Geometeric" << endl << "2)Arithmetic" << endl << "3)Gauss Formula" << endl << "4)Euclidean Algorithm (GCF)" << endl << "5)Euclidean Method (Sum)" << endl << "6)Convergent Formula" << endl;
    cin >> reply;
    //Geometeric Function
    if (reply == 1) 
    { 
        int reply;
        float a;
        float n;
        float r;
        float power;
        float base;
        cout << endl << "1) A(n) = A1 * (R)^N-1" << endl << "Or" << endl << "2) A(n) = A1 / (R)^N-1" << endl;
        cin >> reply;
        if (reply == 1) 
        { 
        cout << "A: ";
        cin >> a;
        cout << "R: ";
        cin >> r;
        cout << "N: ";
        cin >> n;
        power = n - 1;
        base = r;
        cout << a * pow (base, power);
        } else if (reply == 2)
        { 
        cout << "A: ";
        cin >> a;
        cout << "R: ";
        cin >> r;
        cout << "N: ";
        cin >> n;
        power = n - 1;
        base = r;
        cout << a / pow (base, power);
        } else 
        {
            cout << "Error"; return 0; 
            
        }
        }
        
        //Arithmetic Function
        else if (reply == 2) 
        { 
        float a;
        float n;
        float d;
        cout << "A(n) = A + (N-1) * (D)" << endl;
        cout << "A: ";
        cin >> a;
        cout << "N: ";
        cin >> n;
        cout << "D: ";
        cin >> d;
        cout << a + (n - 1) * d;
        return 0;
        } 
        //Gauss Formula 
        else if (reply == 3) 
        { 
        float A1;
        float An;
        float N;
        cout << "Sn = (N * (A1 + An)) / 2" << endl;
        cout << "N: ";
        cin >> N;
        cout << "A1: ";
        cin >> A1;
        cout << "An: ";
        cin >> An;
        cout << ((N * (A1 + An)) / 2);
        } 
        
        //Euclidean Algorithm For GCF 
        else if (reply == 4) 
        { 
        double initA;
        double initB;
        cout << "GCD(A, B)" << endl;
        cout << "A: ";
        cin >> initA;
        cout << "B: ";
        cin >> initB;
        while (initA != 0) 
        { 
        double Remainder;
        Remainder = fmod (initA, initB);
        cout << "GCD(" << initA << "," << initB << ") = " << Remainder << endl;
        initA = initB;
        initB = Remainder;
        }
        }
        //Euclidean Method For Sum 
        else if (reply == 5) 
        { 
        double g1;
        double r;
        double n;
        cout << "Sn = ((g1(1-r^n)) / (1 -r))" << endl;
        cout << "g1: ";
        cin >> g1;
        cout << "r: ";
        cin >> r;
        cout << "n: ";
        cin >> n;
        cout << ((g1 * (1 - pow (r, n))) / (1 - r)); return 0; 
            
        } 
        //Convergent Formula 
        else if (reply == 6) 
        { 
        double g1;
        double r;
        cout << "S(∞) = g1 / (1-r)" << endl;
        cout << "g1: ";
        cin >> g1;
        cout << "r: ";
        cin >> r;
        cout << g1 / (1 - r);
        return 0;
        } else { cout << "You did not follow instructions YOU LOSER"; return 0; } }
