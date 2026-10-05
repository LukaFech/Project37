#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

//Task1

//bool isLetter(char c)
//{
//    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
//}
//
//void filterLongWords(const char* inputFile, const char* outputFile)
//{
//    ifstream in(inputFile);
//    ofstream out(outputFile);
//
//    if (!in.is_open() || !out.is_open())
//    {
//        cout << "Error opening files!\n";
//        return;
//    }
//
//    char word[256];
//    bool isFirst = true;
//
//    while (in >> word)
//    {
//        int length = 0;
//        int wordLen = strlen(word);
//
//        for (int i = 0; i < wordLen; ++i)
//        {
//            if (isLetter(word[i]))
//            {
//                length++;
//            }
//        }
//
//        if (length >= 7)
//        {
//            if (!isFirst)
//            {
//                out << " ";
//            }
//            out << word;
//            isFirst = false;
//        }
//    }
//
//    in.close();
//    out.close();
//    cout << "Task 1 completed successfully!\n";
//}
//
//int main()
//{
//    filterLongWords("input1.txt", "output1.txt");
//}

//Task2

//void copyLinesSameOrder(const char* inputFile, const char* outputFile)
//{
//    ifstream in(inputFile);
//    ofstream out(outputFile);
//
//    if (!in.is_open() || !out.is_open())
//    {
//        cout << "Error opening files!\n";
//        return;
//    }
//
//    char line[1024];
//    while (in.getline(line, sizeof(line)))
//    {
//        out << line << "\n";
//    }
//
//    in.close();
//    out.close();
//    cout << "Task 2 completed successfully!\n";
//}
//
//int main()
//{
//    copyLinesSameOrder("input2.txt", "output2.txt");
//}

//Task3

//void copyLinesReverseOrder(const char* inputFile, const char* outputFile)
//{
//    ifstream in(inputFile);
//    if (!in.is_open())
//    {
//        cout << "Error opening input file!\n";
//        return;
//    }
//
//    int lineCount = 0;
//    char temp[1024];
//
//    while (in.getline(temp, sizeof(temp)))
//    {
//        lineCount++;
//    }
//
//    in.clear();
//    in.seekg(0, ios::beg);
//
//    char** lines = new char* [lineCount];
//    for (int i = 0; i < lineCount; ++i)
//    {
//        in.getline(temp, sizeof(temp));
//        lines[i] = new char[strlen(temp) + 1];
//        strcpy(lines[i], temp);
//    }
//    in.close();
//
//    ofstream out(outputFile);
//    if (!out.is_open())
//    {
//        cout << "Error opening output file!\n";
//        for (int i = 0; i < lineCount; ++i)
//        {
//            delete[] lines[i];
//        }
//        delete[] lines;
//        return;
//    }
//
//    for (int i = lineCount - 1; i >= 0; --i)
//    {
//        out << lines[i] << "\n";
//        delete[] lines[i];
//    }
//    delete[] lines;
//
//    out.close();
//    cout << "Task 3 completed successfully!\n";
//}
//
//int main()
//{
//    copyLinesReverseOrder("input3.txt", "output3.txt");
//}

//Task4

//bool hasNoSpace(const char* str)
//{
//    int len = strlen(str);
//    for (int i = 0; i < len; ++i)
//    {
//        if (str[i] == ' ')
//        {
//            return false;
//        }
//    }
//    return true;
//}
//
//void insertLineAfterLastNoSpace(const char* inputFile, const char* outputFile)
//{
//    ifstream in(inputFile);
//    if (!in.is_open())
//    {
//        cout << "Error opening input file!\n";
//        return;
//    }
//
//    int lineCount = 0;
//    char temp[1024];
//
//    while (in.getline(temp, sizeof(temp)))
//    {
//        lineCount++;
//    }
//
//    in.clear();
//    in.seekg(0, ios::beg);
//
//    char** lines = new char* [lineCount];
//    int targetIndex = -1;
//
//    for (int i = 0; i < lineCount; ++i)
//    {
//        in.getline(temp, sizeof(temp));
//        lines[i] = new char[strlen(temp) + 1];
//        strcpy(lines[i], temp);
//
//        if (hasNoSpace(lines[i]))
//        {
//            targetIndex = i;
//        }
//    }
//    in.close();
//
//    ofstream out(outputFile);
//    if (!out.is_open())
//    {
//        cout << "Error opening output file!\n";
//        for (int i = 0; i < lineCount; ++i)
//        {
//            delete[] lines[i];
//        }
//        delete[] lines;
//        return;
//    }
//
//    if (targetIndex == -1)
//    {
//        for (int i = 0; i < lineCount; ++i)
//        {
//            out << lines[i] << "\n";
//        }
//        out << "------------\n";
//    }
//    else
//    {
//        for (int i = 0; i < lineCount; ++i)
//        {
//            out << lines[i] << "\n";
//            if (i == targetIndex)
//            {
//                out << "------------\n";
//            }
//        }
//    }
//
//    for (int i = 0; i < lineCount; ++i)
//    {
//        delete[] lines[i];
//    }
//    delete[] lines;
//
//    out.close();
//    cout << "Task 4 completed successfully!\n";
//}
//
//int main()
//{
//    insertLineAfterLastNoSpace("input4.txt", "output4.txt");
//}