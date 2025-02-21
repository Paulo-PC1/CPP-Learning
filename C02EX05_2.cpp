 //C02EX05_2

 #include <iostream>
 #include <locale>
 #include <windows.h>
 #include <string>

 using namespace std;

 int main(void)
 {
     wstring nome;

     setlocale(LC_ALL, "Portuguese_Brazil.1252");
     SetConsoleCP(1252);
     SetConsoleOutputCP(1252);

     wcout << L"Olá. \nQual sua graça? ";
     getline(wcin, nome);

     cout<< endl;
     wcout << L"Oi " << nome << L", vamos estudar. " << endl;
     cout << endl;

     cout << "Tecle <Enter> para encerarr...";
     cin.get();
     return 0;
 }
