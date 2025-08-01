#ifndef MAIN_CODE_H
#define MAIN_CODE_H

#include <QDialog>


#include <string>
#include<iostream>

using namespace std;

class FileEncryptor {
private:
    string inputFileName;
    string outputFileName;
    int key;
    string vigenereKey;

public:
    // FileEncryptor(){
    //     inputFileName = "";
    //     outputFileName = "";
    //     key = 0;
    // }
    void setFileNames(string input, string output);
    void setKey(int k);
    void setVigenereKey(string k);
    bool encryptFile();
    bool decryptFile();
    bool VigenereEncryptFile();
    bool VigenereDecryptFile();

};









struct LogNode {
    string timestamp;
    string action;
    string fileName;
    LogNode* next;

    LogNode(string ts, string act, string file);

};



// new class

// class Logger {
// private:
//     string logFileName;
//     LogNode* head;

//     // void saveLogsToFile();

// public:
//     void Loggerset(string fileName);
//     ~Logger(){        // Save logs to file before exiting
//         saveLogsToFile();
//         // Free linked list memory
//         while (head) {
//             LogNode* temp = head;
//             head = head->next;
//             delete temp;
//         }}

//     string getTimestamp();
//     void log(string action, string fileName);
//     string getLogsAsString();
//     void clearLogs();
//     void loadLogsFromFile();
//     void saveLogsToFile();

// };


class Logger {
private:
    string logFileName;
    string getTimestamp();  // Only declare here

public:
    void Loggerset(string fileName);

    void log(const string& action, const string& fileName);
    string showLogs();
    void clearLogs();
};





class PasswordChecker {
public:
    int getPasswordScore(std::string password);
    std::string getPasswordStrength(int score);
    int analyzePassword(std::string password);
    bool isBreached(std::string password);
    std::string generateStrongPassword();
};






class CyberHealthAnalyzer {
private:
    string logFileName;
    int passwordScore;

public:
    CyberHealthAnalyzer(string logFile, int pwScore);
    int countLogActions(string keyword);
    int calculateHealthScore(int encryptCount, int decryptCount);
    string showReport();
};

class Steganography {
public:
    // Hide a secret message inside a BMP image
    bool encodeMessage(const std::string& inputImagePath, const std::string& outputImagePath, const std::string& message);

    // Extract hidden message from BMP image
    std::string decodeMessage(const std::string& inputImagePath);
};




#endif // MAIN_CODE_H
