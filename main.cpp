#include <iostream>
#include <iostream>

#include <ctime>    // For time()
#include <string>   // For string manipulation
#include <cctype>   // For character conversion (tolower)
using namespace std;
int main() {
  
  const int NUM_KEYS = 26; // Number of keys to generate (one for each letter of the alphabet)
 
  int mjkey[NUM_KEYS] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 }; 
  
  int mjkey2[NUM_KEYS] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26 }; 
  // Print the generated keys for verification
  cout << "mjkey: ";
  for (int i = 0; i < NUM_KEYS; i++) {
    cout << mjkey[i] << " ";
  }
  cout << endl;
  cout << "mjkey2: ";
  for (int i = 0; i < NUM_KEYS; i++) {
    cout << mjkey2[i] << " ";
  }
  cout << endl;
  
  // Encryption process
  cout << "\nEnter a message to encrypt: ";
  string message;
  getline(cin, message);
  // Convert each letter to its corresponding number (A=1, B=2, etc.)
  for (char c : message) {
    char lowerCaseC = tolower(c); // Convert to lowercase for consistency
    if (lowerCaseC >= 'a' && lowerCaseC <= 'z') { 
      int letterNumber = lowerCaseC - 'a' + 1; // Calculate number (a=1, b=2, etc.)
      cout << "Number: " << letterNumber << endl;
    }
  }
  // Decryption process (Note: This isn't actually decrypting, just displaying the message)
  cout << "\nEnter the encryption key: ";
  int encryptionkey;
  cin >> encryptionkey;
  bool keyFound = false; // Flag to check if the entered key is valid
  // Check if the entered key exists in our generated keys
  for (int i = 0; i < NUM_KEYS; i++) {
    if (mjkey[i] == encryptionkey){
      keyFound = true;
      break;
    }
  }
  // If a valid key was entered, display the original message with letter-number pairs
  if (keyFound) {
    for (char c : message) {
      char lowerCaseC = tolower(c); // Convert to lowercase for consistency
      if (lowerCaseC >= 'a' && lowerCaseC <= 'z') { 
        int letterNumber = lowerCaseC - 'a' + 1; // Calculate number (a=1, b=2, etc.)
        cout << "Letter: " << c << " Number: " << letterNumber << endl;
      }
    }
  }
  cout << endl;
  return 0;
}


