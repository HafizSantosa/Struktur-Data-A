#include <iostream>
#include <string>
using namespace std;

const int SIZE_ARR = 26;

struct HashTable
{
  string username, password;
} dataAkun[SIZE_ARR];

int hashFunction(string username)
{
  if (username.empty() || !isalpha(username[0])) {
    return -1;  
  }

  return tolower(username[0]) - 'a';
}

void printAll()
{
  for (int i = 0; i < SIZE_ARR; i++)
  {
    cout << i << " [ " << dataAkun[i].username << " - " << dataAkun[i].password << " ]" << endl;
  }
}

bool login(string username, string password)
{
  int index = hashFunction(username);

  if (index != -1)
  {
    if (dataAkun[index].username == username && dataAkun[index].password == password)
    {
      cout << "Login successful!" << endl;
      return true;
    }
  }

  cout << "Login failed. Invalid username or password." << endl;
  return false;
}

void menu()
{
  while (true)
  {
    int input_user;

    cout << endl;
    cout << "MENU" << endl;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "3. Exit" << endl << endl;

    cout << "Pilih: ";
    cin >> input_user;
    cout << endl;

    if (input_user == 1)
    {
      string username, password;

      cout << "Masukkan Username: ";
      cin >> username;

      int index = hashFunction(username);

      if (index != -1)
      {
        if (dataAkun[index].username.empty() && dataAkun[index].password.empty())
        {
          cout << "Masukkan Password: ";
          cin >> password;
          dataAkun[index].username = username;
          dataAkun[index].password = password;
          cout << "Registrasi berhasil!" << endl;
        }
        else
        {
          cout << "Akun sudah ada!" << endl;
        }
      }
      else
      {
        cout << "Username tidak valid!" << endl;
      }
    }
    else if (input_user == 2)
    {
      string username, password;

      cout << "Masukkan Username: ";
      cin >> username;
      cout << "Masukkan Password: ";
      cin >> password;

      if (login(username, password))
      {
      }
    }
    else if (input_user == 3)
    {
      printAll();
      break;
    }
    else
    {
      cout << "Invalid!" << endl;
    }
  }
}

int main()
{
  menu();
}
