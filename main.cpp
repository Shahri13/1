#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    /*cout << "Problem 1" << endl;
    string name;
    int age;
    cout << "Please, enter your name: " <<name<<endl;
    cin >> name;
    cout << "Please enter your age: " <<age<< endl;
    cin >> age;
    cout << "Hello " << name << ". YOU are " << age <<endl;
 */
    /*cout <<"Problem 2" << endl;
    cout << setw(5) << "1";
    cout << setw(5) << "2";
    cout << setw(5) << "3";
    cout << setw(5) << "4";
    cout << setw(5) << "5";
    cout << endl;
    */
    /*cout << "Problem 3" << endl;
    int n, m;
    cout << "enter the first number: " << endl;
    cin >> n;
    cout << "enter the second number: " << endl;
    cin >> m;
    int temp = n;
    n = m;
    m = temp;
    cout << "After swapping: " << endl;
    cout << n << endl;
    cout << m << endl;
*/
    /*cout << "Problem 4" << endl;
    int n;
    cout <<"Enter a number: " <<endl;
    cin >> n;
    cout << "Number\tSquare" << endl;
    cout << "-----\t-----" <<endl;
    for (int i = 1; i <= n; i++) {
        cout << i << "\t" << i*i << endl;}
*/
    cout << "Problem 5" <<endl;
    string input;
    cout << "enter a string: ";
    getline(cin, input);
    int width = 50;
    int spaces = (width - input.length()) /2;
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }
    cout << input <<endl;
    return 0;
}


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.