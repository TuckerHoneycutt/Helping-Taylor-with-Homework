#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string filePath = "/Users/tuckerhoneycutt/csprojects/learningC++/helping/UAH_sample.txt";
    ifstream inputFile(filePath);
    if(!inputFile.is_open()){
        cerr<<"Error: Couldn't open the file "<<filePath;
        return 1;
    }
    string temp;
    char ch;
    while(inputFile.get(ch)){
        temp += ch;
    }
    inputFile.close();
    int wordLength = 0, len1=0, len2=0, len3=0, len4=0, len5=0, len6=0, len7=0, len8=0, len9=0, len10=0;
    int start, end;
    for(int i = 0; i < temp.length(); i++){ //possibly change to temp.length()-1
        ch = temp[i];
        if(ch != ' '){
            wordLength += 1;
            end = i;
        }else{
            for(int i = start; i < end; i++){
                if(isdigit(temp[i])){
                    wordLength = 0;
                }
            }
            if(ispunct(temp[end])){
                wordLength -= 1;
            }
            switch(wordLength){
                case 1:
                    len1 += 1;
                    wordLength = 0;
                    break;
                case 2:
                    len2 += 1;
                    wordLength = 0;
                    break;
                case 3:
                    len3 += 1;
                    wordLength = 0;
                    break;
                case 4:
                    len4 += 1;
                    wordLength = 0;
                    break;
                case 5:
                    len5 += 1;
                    wordLength = 0;
                    break;
                case 6:
                    len6 += 1;
                    wordLength = 0;
                    break;
                case 7:
                    len7 += 1;
                    wordLength = 0;
                    break;
                case 8:
                    len8 += 1;
                    wordLength = 0;
                    break;
                case 9:
                    len9 += 1;
                    wordLength = 0;
                    break;
                case 10:
                    len10 += 1;
                    wordLength = 0;
                    break;
                default:
                    wordLength = 0;
            }
            start = i;
        }
    }
    cout << "Word Length  Count" << endl;
    cout << "    1         " << len1 << endl;
    cout << "    2         " << len2 << endl;
    cout << "    3         " << len3 << endl;
    cout << "    4         " << len4 << endl;
    cout << "    5         " << len5 << endl;
    cout << "    6         " << len6 << endl;
    cout << "    7         " << len7 << endl;
    cout << "    8         " << len8 << endl;
    cout << "    9         " << len9 << endl;
    cout << "   10         " << len10 << endl << endl;


    int iA=0, iB=0, iC=0, iD=0, iE=0, iF=0, iG=0, iH=0, iI=0, iJ=0, iK=0, iL=0, iM=0;
    int iN=0, iO=0, iP=0, iQ=0, iR=0, iS=0, iT=0, iU=0, iV=0, iW=0, iX=0, iY=0, iZ=0;

    for (int i = 0; i < temp.length()-1 ; i++)
    {
        ch = temp[i];
        if (ch == 65 || ch == 97)  iA++;
        if (ch == 66 || ch == 98)  iB++;
        if (ch == 67 || ch == 99)  iC++;
        if (ch == 68 || ch == 100) iD++;
        if (ch == 69 || ch == 101) iE++;
        if (ch == 70 || ch == 102) iF++;
        if (ch == 71 || ch == 103) iG++;
        if (ch == 72 || ch == 104) iH++;
        if (ch == 73 || ch == 105) iI++;
        if (ch == 74 || ch == 106) iJ++;
        if (ch == 75 || ch == 107) iK++;
        if (ch == 76 || ch == 108) iL++;
        if (ch == 77 || ch == 109) iM++;
        if (ch == 78 || ch == 110) iN++;
        if (ch == 79 || ch == 111) iO++;
        if (ch == 80 || ch == 112) iP++;
        if (ch == 81 || ch == 113) iQ++;
        if (ch == 82 || ch == 114) iR++;
        if (ch == 83 || ch == 115) iS++;
        if (ch == 84 || ch == 116) iT++;
        if (ch == 85 || ch == 117) iU++;
        if (ch == 86 || ch == 118) iV++;
        if (ch == 87 || ch == 119) iW++;
        if (ch == 88 || ch == 120) iX++;
        if (ch == 89 || ch == 121) iY++;
        if (ch == 90 || ch == 122) iZ++;
    }
    cout << "Letter  Count" << endl;
    cout << "   a     " << iA << endl;
    cout << "   b     " << iB << endl;
    cout << "   c     " << iC << endl;
    cout << "   d     " << iD << endl;
    cout << "   e     " << iE << endl;
    cout << "   f     " << iF << endl;
    cout << "   g     " << iG << endl;
    cout << "   h     " << iH << endl;
    cout << "   i     " << iI << endl;
    cout << "   j     " << iJ << endl;
    cout << "   k     " << iK << endl;
    cout << "   l     " << iL << endl;
    cout << "   m     " << iM << endl;
    cout << "   n     " << iN << endl;
    cout << "   o     " << iO << endl;
    cout << "   p     " << iP << endl;
    cout << "   q     " << iQ << endl;
    cout << "   r     " << iR << endl;
    cout << "   s     " << iS << endl;
    cout << "   t     " << iT << endl;
    cout << "   u     " << iU << endl;
    cout << "   v     " << iV << endl;
    cout << "   w     " << iW << endl;
    cout << "   x     " << iX << endl;
    cout << "   y     " << iY << endl;
    cout << "   z     " << iZ << endl << endl;
    return 0;





}
