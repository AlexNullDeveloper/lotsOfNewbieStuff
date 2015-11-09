#include <iostream>
using namespace std;

int main(){
    char choise;
    do{
        cout << "Spravka po:\n";
        cout << "1. if\n";
        cout << "2. switch\n";
        cout << "3. for\n";
        cout << "4. while\n";
        cout << "5. do-while\n";
        cout << "6. break\n";
        cout << "7. continue\n";
        cout << "8. goto\n";
        cout << "viberite odin iz punktov(q dlya zavershenia): ";

        cin >> choise;


    }while (choise < '1'||choise >'8' && choise !='q');
    cout << "\n\n";
    switch (choise) {
        case '1':
        cout << "predlojenie if:\n\n";
        cout << "if (uslovie) predlojenie;\n";
        cout << "else predlojenie;\n";
        break;
        case '2':
        cout << "switch (virajenie){ case konstanta: posledovatelnost' virajeniy\n";
        cout << "break;\n";
        break;
        case '3':
        cout << "for (i=1, i<=5, i++)\n";
        break;
        case '4':
        cout << "cikl while: while (uslovie predlojenie)\n)";
        break;
        case '5':
        cout << "Cikl do-while: \n\n";
        cout << "do {\n";
        cout << "PREDLOJENIE;\n";
        cout << "}while (uslovie); \n";
        case '6':
        cout << "predlojenie break: \n\n";
        cout << "break;\n";
        break;
        case '7':
        cout << "Predlojnie continue:\n\n";
        cout << "continue;\n";
        break;
        case '8':
        cout << "Predlojenie goto:\n\n";
        cout << "goto metka;\n";
        break;
        }
        cout << "\n";
return 0;
}
