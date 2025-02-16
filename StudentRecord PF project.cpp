
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int size = 29;

    string rollNumbers[size] = {
        "F2024266530", "F2024266547", "F202426653B", "F2024266541", "F2024266545",
        "F2024266540", "F2024266539", "F2024266528", "F2024266548", "F2024266526",
        "F2024266538", "F2024266534", "F2024266536", "F2024266529", "F2024266535",
        "F2024266550", "F2024266532", "F2024266527", "F2024266537", "F2024266542",
        "F2024266531", "F2024266549", "F2024266543", "F2024266544", "F2024266519",
        "F2024266520", "F2024266501", "F2024266523", "F2024266509"
    };

    string names[size] = {
        "BISMAH BATOOL", "ALISHBA RIAZ", "ALI NIZAM", "ALISHBA", "ALISHBA SHAHID",
        "SAJJAD ZAIDI", "AHMAD ASHRAF", "SYEDA SAFA BOKHARI", "AMAMA SEHAR", "TAHA AZAM",
        "QASIM KAZMI", "SYEDA AMINA ALTAF", "SYED MUJTABA RAZA", "SYEDA HAREEM SALMAN", "SYED TALHA SHAHID",
        "AQSA FARZAND", "ISYEDA AMMARA SHAFIQ", "TALAIAA TANWEER", "SYED MUHAMMAD RAHIM HASSAN", "SYED MUHAMMAD ALI",
        "SYEDA AYESHA SHAFIQUE", "ANOOSHA", "MUAZZAM SADIQ", "KUMAIL SARFRAZ", "Talha Saeed",
        "Talha Imran", "Muhammad Talha", "Taha Ghouri", "Tehreem Fatima"
    };

    string grades[size] = {
        "A", "A-", "B+", "A", "A+", "C+", "B-", "A", "C", "A+",
        "A-", "A+", "B", "A", "B+", "C-", "A", "B-", "C+", "B",
        "A+", "A-", "B+", "C", "A+", "B", "A", "B-", "A"
    };

    string roll;
    cout << "Enter Your Roll Number: ";
    cin >> roll;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if (rollNumbers[i] == roll) {
            cout << "Advisor: Shariq Aziz\n";
            cout << "Roll Number: " << rollNumbers[i] << "";
            cout << "\nName: " << names[i] << "";
            cout << "\nGrade: " << grades[i] << "";
            found = true;
        }
    }

    if (!found) {
        cout << "Roll Number not found!";
    }

    return 0;
}
