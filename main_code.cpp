#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include"main_code.h"
#include <stdio.h>
#include <string.h>
#include <sstream>

using namespace std;

// ====================== FileEncryptor Class =======================

    // FileEncryptor() {
    //     inputFileName = "";
    //     outputFileName = "";
    //     key = 0;
    // }


    void FileEncryptor::setFileNames(string input, string output) {
        inputFileName = input;
        outputFileName = output;
    }

    void FileEncryptor::setKey(int k) {
        key = k;
    }

    void FileEncryptor::setVigenereKey(string k) {
        vigenereKey = k;
    }

    bool FileEncryptor::encryptFile() {
        bool checker ;
        ifstream inputFile(inputFileName);
        ofstream outputFile(outputFileName);
        if (!inputFile || !outputFile) {
            cerr << "Error opening file!" << endl;
            checker = true;
            return checker;
        }

        string line;
        while (getline(inputFile, line)) {
            for (char& ch : line) ch ^= key;
            outputFile << line << endl;
        }
        inputFile.close();
        outputFile.close();
        cout << "Encryption completed successfully!" << endl;
        checker = false;
        return checker ;

    }

    bool FileEncryptor::decryptFile() {
        bool checker ;
        ifstream inputFile(inputFileName);
        ofstream outputFile(outputFileName);
        if (!inputFile || !outputFile) {
            cerr << "Error opening file!" << endl;
            checker = true;
            return checker;


        }

        string line;
        while (getline(inputFile, line)) {
            for (char& ch : line) ch ^= key; // XOR again to decrypt
            outputFile << line << endl;
        }
        inputFile.close();
        outputFile.close();
        cout << "Decryption completed successfully!" << endl;
        checker = false ;
        return checker;
    }


    bool FileEncryptor::VigenereEncryptFile() {
        bool checker;
        ifstream inputFile(inputFileName);
        ofstream outputFile(outputFileName);
        if (!inputFile || !outputFile) {
            cerr << "Error opening file!" << endl;
            checker = true ;
            return checker;
        }

        string line;
        int keyLen = vigenereKey.length();
        while (getline(inputFile, line)) {
            string encrypted = line;
            for (int i = 0, j = 0; i < line.length(); i++) {
                char ch = line[i];
                if (isalpha(ch)) {
                    char base = isupper(ch) ? 'A' : 'a';
                    int keyChar = tolower(vigenereKey[j % keyLen]) - 'a';
                    encrypted[i] = (tolower(ch) - 'a' + keyChar) % 26 + base;
                    j++;
                }
            }
            outputFile << encrypted << endl;
        }
        inputFile.close();
        outputFile.close();
        cout << "Vigenere Encryption completed successfully!" << endl;
        checker = false ;
        return checker ;
    }

    bool FileEncryptor::VigenereDecryptFile() {
        bool checker;
        ifstream inputFile(inputFileName);
        ofstream outputFile(outputFileName);
        if (!inputFile || !outputFile) {
            cerr << "Error opening file!" << endl;
            checker = true ;
            return checker;
        }

        string line;
        int keyLen = vigenereKey.length();
        while (getline(inputFile, line)) {
            string decrypted = line;
            for (int i = 0, j = 0; i < line.length(); i++) {
                char ch = line[i];
                if (isalpha(ch)) {
                    char base = isupper(ch) ? 'A' : 'a';
                    int keyChar = tolower(vigenereKey[j % keyLen]) - 'a';
                    decrypted[i] = (tolower(ch) - 'a' - keyChar + 26) % 26 + base;
                    j++;
                }
            }
            outputFile << decrypted << endl;
        }
        inputFile.close();
        outputFile.close();
        cout << "Vigenere Decryption completed successfully!" << endl;
        checker = false;
        return checker;
    }


//========================= Logger Class ============================


    LogNode::LogNode(string ts, string act, string file) : timestamp(ts), action(act), fileName(file), next(nullptr) {}





    void Logger::Loggerset(string fileName){
         logFileName = fileName ;}

    string Logger::getTimestamp() {
        time_t now = time(0);
        char* dt = ctime(&now);
        string timestamp(dt);
        timestamp.pop_back(); // Remove newline
        return timestamp;
    }

    void Logger::log(const string& action, const string& fileName) {
        ofstream logFile(logFileName, ios::app);
        if (!logFile) {
            cerr << "Error opening log file!" << endl;
            return;
        }
        logFile << "[" << getTimestamp() << "] "
                << action << " file: " << fileName << endl;
        logFile.close();
        cout << "Log added successfully.\n";
    }

    string Logger::showLogs() {
        std::ifstream logFile(logFileName);
        if (!logFile) {
            return "No logs found or failed to open log file.\n";
        }
        std::stringstream logs;
        logs << "\n--- Activity Log ---\n";
        std::string line;
        while (std::getline(logFile, line)) {
            logs << line << "\n";
        }
        logFile.close();
        return logs.str();
    }

    void Logger::clearLogs() {
        ofstream logFile(logFileName, ios::trunc);
        if (!logFile) {
            cerr << "Failed to clear logs.\n";
            return;
        }
        logFile.close();
        cout << "Logs cleared successfully.\n";
    }








// // ======================= PasswordChecker Class ========================






    int PasswordChecker::getPasswordScore(string password) {
        int score = 0;
        if (password.length() >= 8) score++;
        if (password.find_first_of("0123456789") != string::npos) score++;
        if (password.find_first_of("!@#$%^&*()_+[]{}|;':\\,.<>?/") != string::npos) score++;
        if (password.find_first_of("abcdefghijklmnopqrstuvwxyz") != string::npos) score++;
        if (password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos) score++;
        return score;
    }

    string PasswordChecker::getPasswordStrength(int score) {
        if (score <= 2) return "Weak";
        else if (score <= 4) return "Moderate";
        else return "Strong";
    }

    int PasswordChecker::analyzePassword(string password) {
        int score = getPasswordScore(password);
        string strength = getPasswordStrength(score);
        cout << "\nPassword Analysis:\n";
        cout << "Score (out of 5): " << score << "\nStrength: " << strength << endl;
        return score;
    }

    // bool PasswordChecker::isBreached(string password) {
    //     ifstream file("/Users/mianhusnain/cyber/breached_passwords.txt");

    //     // cout<<"breach";
    //     if (!file) return false;
    //     string breached;
    //     while (getline(file, breached)) {
    //         if (password == breached) return true;
    //     }

    //     return false;
    // }

    bool PasswordChecker::isBreached(string password) {
        ifstream file("/Users/mianhusnain/cyber/breached_passwords.txt");
        cout<< "Enter pass "<< password<<endl;

        if (!file) {
            cout << "Failed to open file.\n";
            return false;
        }

        string breached;

        while (file>>breached) {

            if (password == breached) {

                return true ;
            }

            file.ignore();
        }

        return false;
    }

    string PasswordChecker::generateStrongPassword() {
        int length = 10;
        string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string lower = "abcdefghijklmnopqrstuvwxyz";
        string digits = "0123456789";
        string symbols = "!@#$%^&*()_+[]{}";
        string all = upper + lower + digits + symbols;
        string password = "";
        srand(time(0));
        for (int i = 0; i < length; ++i) {
            password += all[rand() % all.length()];
        }
        return password;
    }









// // ======================= CyberHealthAnalyzer Class ========================



    CyberHealthAnalyzer::CyberHealthAnalyzer(string logFile, int pwScore) {
        logFileName = logFile;
        passwordScore = pwScore;
    }



    int CyberHealthAnalyzer::countLogActions(string keyword) {
        ifstream file(logFileName);
        if (!file) return 0;

        string line;
        int count = 0;
        while (getline(file, line)) {
            if (line.find(keyword) != string::npos) count++;
        }
        return count;
    }



    int CyberHealthAnalyzer::calculateHealthScore(int encryptCount, int decryptCount) {
        encryptCount = min(encryptCount, 3);
        decryptCount = min(decryptCount, 2);
        return passwordScore + encryptCount + decryptCount;
    }



    std::string CyberHealthAnalyzer::showReport() {
        int encryptCount = countLogActions("Encrypted");
        int decryptCount = countLogActions("Decrypted");
        int score = calculateHealthScore(encryptCount, decryptCount);

        std::ostringstream report;
        report << "\nCyber Health Report\n";
        report << "-----------------------------\n";
        report << "Password Score     : " << passwordScore << " / 5\n";
        report << "Files Encrypted    : " << encryptCount << "\n";
        report << "Files Decrypted    : " << decryptCount << "\n";
        report << "Cyber Health Score : " << score << " / 10\n";

        if (score >= 8)
            report << "Status:  Excellent — You're secure!\n";
        else if (score >= 5)
            report << "Status:  Moderate — Improve password or encrypt more files.\n";
        else
            report << "Status:  Weak — Use stronger passwords & secure more files.\n";

        return report.str();
    }













// *lass Steganography {
// public:

//     // Hide a secret message inside a BMP image
//     bool encodeMessage(const string& inputImagePath, const string& outputImagePath, const string& message) {
//         ifstream inFile(inputImagePath, ios::binary);
//         if (!inFile) {
//             cerr << " Error: Cannot open input image.\n";
//             return false;
//         }

//         vector<unsigned char> imageData((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
//         inFile.close();

//         const int HEADER_SIZE = 54;
//         if (imageData.size() <= HEADER_SIZE) {
//             cerr << "Not a valid BMP file.\n";
//             return false;
//         }

//         string binaryMsg;
//         for (char ch : message)
//             binaryMsg += bitset<8>(ch).to_string();
//         binaryMsg += "00000000"; // null-terminator

//         if (binaryMsg.size() > imageData.size() - HEADER_SIZE) {
//             cerr << "Message too long for the selected image.\n";
//             return false;
//         }

//         int idx = HEADER_SIZE;
//         for (char bit : binaryMsg) {
//             imageData[idx] &= 0xFE; // clear last bit
//             imageData[idx] |= (bit == '1'); // set bit
//             idx++;
//         }

//         ofstream outFile(outputImagePath, ios::binary);
//         if (!outFile) {
//             cerr << "Error: Cannot create output image.\n";
//             return false;
//         }

//         outFile.write(reinterpret_cast<char*>(&imageData[0]), imageData.size());
//         outFile.close();

//         cout << "Message hidden in image successfully.\n";
//         return true;
//     }

//     // Extract hidden message from BMP image
//     string decodeMessage(const string& inputImagePath) {
//         ifstream inFile(inputImagePath, ios::binary);
//         if (!inFile) {
//             cerr << "Error: Cannot open image.\n";
//             return "";
//         }

//         vector<unsigned char> imageData((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
//         inFile.close();

//         const int HEADER_SIZE = 54;
//         string message = "", byteStr = "";

//         for (size_t i = HEADER_SIZE; i < imageData.size(); ++i) {
//             byteStr += (imageData[i] & 1) ? '1' : '0';
//             if (byteStr.size() == 8) {
//                 char ch = static_cast<char>(bitset<8>(byteStr).to_ulong());
//                 if (ch == '\0') break;
//                 message += ch;
//                 byteStr = "";
//             }
//         }

//         return message;
//     }
// };*/



        bool Steganography::encodeMessage(const string& inputImagePath, const string& outputImagePath, const string& message) {
        ifstream inFile(inputImagePath, ios::binary);
        if (!inFile) {
            cerr << "Error: Cannot open input image.\n";
            return false;
        }

        vector<unsigned char> imageData((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
        inFile.close();

        const int HEADER_SIZE = 54;
        if (imageData.size() <= HEADER_SIZE) {
            cerr << "Not a valid BMP file.\n";
            return false;
        }

        string binaryMsg;
        for (char ch : message)
            binaryMsg += bitset<8>(ch).to_string();
        binaryMsg += "00000000"; // null-terminator

        if (binaryMsg.size() > imageData.size() - HEADER_SIZE) {
            cerr << "Message too long for the selected image.\n";
            return false;
        }

        int idx = HEADER_SIZE;
        for (char bit : binaryMsg) {
            imageData[idx] &= 0xFE;           // clear last bit
            imageData[idx] |= (bit == '1');   // set last bit
            idx++;
        }

        ofstream outFile(outputImagePath, ios::binary);
        if (!outFile) {
            cerr << "Error: Cannot create output image.\n";
            return false;
        }

        outFile.write(reinterpret_cast<char*>(&imageData[0]), imageData.size());
        outFile.close();

        cout << "Message hidden in image successfully.\n";
        return true;
    }

    string Steganography::decodeMessage(const string& inputImagePath) {
        ifstream inFile(inputImagePath, ios::binary);
        if (!inFile) {
            cerr << "Error: Cannot open image.\n";
            return "";
        }

        vector<unsigned char> imageData((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
        inFile.close();

        const int HEADER_SIZE = 54;
        string message = "", byteStr = "";

        for (size_t i = HEADER_SIZE; i < imageData.size(); ++i) {
            byteStr += (imageData[i] & 1) ? '1' : '0';

            if (byteStr.size() == 8) {
                char ch = static_cast<char>(bitset<8>(byteStr).to_ulong());
                if (ch == '\0') break;
                message += ch;
                byteStr.clear();
            }
        }

        return message;
    }







// ============================ Main ================================
// int main() {
//     FileEncryptor f;
//     Logger logger("vault_log.txt");
//     PasswordChecker checker;
//     Steganography steg;

//     int choice;
//     string inputFile, outputFile, vKey, userPassword;
//     int xorKey;

//     do {
//         showMenu();
//         cout << "Enter your choice: ";
//         while (!(cin >> choice)) {
//             cin.clear();
//             cin.ignore(numeric_limits<streamsize>::max(), '\n');
//             cout << " Invalid input. Please enter a number: ";
//         }
//         cin.ignore();

//         switch (choice) {
//         case 1:
//             cout << "Enter BMP input image file path: ";
//             getline(cin, inputFile);
//             cout << "Enter output BMP image file path: ";
//             getline(cin, outputFile);
//             cout << "Enter secret message to hide: ";
//             getline(cin, userPassword);
//             steg.encodeMessage(inputFile, outputFile, userPassword);
//             break;

//         case 2:
//             cout << "Enter BMP image to extract hidden message from: ";
//             getline(cin, inputFile);
//             cout << "Hidden Message: " << steg.decodeMessage(inputFile) << endl;
//             break;

//         case 3:
//             cout << "Enter input file: ";
//             getline(cin, inputFile);
//             cout << "Enter output file: ";
//             getline(cin, outputFile);
//             cout << "Enter XOR key: ";
//             while (!(cin >> xorKey)) {
//                 cin.clear();
//                 cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                 cout << "Invalid XOR key. Enter a number: ";
//             }
//             cin.ignore();
//             f.setFileNames(inputFile, outputFile);
//             f.setKey(xorKey);
//             f.encryptFile();
//             logger.log("Encrypted", inputFile);
//             break;

//         case 4:
//             cout << "Enter input file: ";
//             getline(cin, inputFile);
//             cout << "Enter output file: ";
//             getline(cin, outputFile);
//             cout << "Enter XOR key: ";
//             while (!(cin >> xorKey)) {
//                 cin.clear();
//                 cin.ignore(numeric_limits<streamsize>::max(), '\n');
//                 cout << "Invalid XOR key. Enter a number: ";
//             }
//             cin.ignore();
//             f.setFileNames(inputFile, outputFile);
//             f.setKey(xorKey);
//             f.decryptFile();
//             logger.log("Decrypted", inputFile);
//             break;

//         case 5:
//             cout << "Enter input file: ";
//             getline(cin, inputFile);
//             cout << "Enter output file: ";
//             getline(cin, outputFile);
//             cout << "Enter Vigenere key: ";
//             getline(cin, vKey);
//             f.setFileNames(inputFile, outputFile);
//             f.setVigenereKey(vKey);
//             f.VigenereEncryptFile();
//             logger.log("Encrypted", inputFile);
//             break;

//         case 6:
//             cout << "Enter input file: ";
//             getline(cin, inputFile);
//             cout << "Enter output file: ";
//             getline(cin, outputFile);
//             cout << "Enter Vigenere key: ";
//             getline(cin, vKey);
//             f.setFileNames(inputFile, outputFile);
//             f.setVigenereKey(vKey);
//             f.VigenereDecryptFile();
//             logger.log("Decrypted", inputFile);
//             break;

//         case 7:
//             cout << "Enter password: ";
//             getline(cin, userPassword);
//             checker.analyzePassword(userPassword);
//             if (checker.isBreached(userPassword)) {
//                 cout << " This password was found in a breach!\n";
//             }
//             if (checker.getPasswordScore(userPassword) <= 2) {
//                 cout << " Suggested strong password: " << checker.generateStrongPassword() << endl;
//             }
//             {
//                 int score = checker.getPasswordScore(userPassword);
//                 CyberHealthAnalyzer analyzer("vault_log.txt", score);
//                 analyzer.showReport();
//             }
//             break;

//         case 8:
//             logger.showLogs();
//             break;

//         case 9:
//             cout << "Enter password to check: ";
//             getline(cin, userPassword);
//             if (checker.isBreached(userPassword)) {
//                 cout << " Password is in breach list!\n";
//             } else {
//                 cout << " Password not found in breaches.\n";
//             }
//             break;

//         case 10:
//             logger.clearLogs();
//             break;

//         case 11:
//             cout << "Exiting. Stay secure! \n";
//             break;

//         default:
//             cout << " Invalid option. Try again.\n";
//         }

//     } while (choice != 11);

//     return 0;
// }
// // ============================ End of Code ============================
// // ============================ End of Code ============================
