#include <iostream>
#include<string.h>



int getLength(char name[]) {
    int length=0;
    int i = 0;

    while ((name[i]) != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void replaceSpaces(char sentences []){
    int i=0;
     int n = strlen(sentences);
    for(int i=0;i<n;i++){
        if (sentences[i]== ' '){
            sentences[i]='0';
        }    }
}



bool checkPalindrome(char word[]){
    int i=0;
    int n=strlen(word);
    int j=n-1;

    while (i<=j )
    {
        if(word[i]!=word[j]){
            return false;
        }
        else {
            i++;
            j--;

        }
    }
    return true;
}

using namespace std;
int main(){

char name[100];
cin>>name;

cout<< "length is "<<getLength(name)<<endl;
cout<< "length is "<<strlen(name)<<endl;

char sentences[100];
cin.getline(sentences,100);

replaceSpaces(sentences);
cout<<"printing sentence"<<endl<<sentences<<endl;


char arr[100]="racecar";
cout<<"palindrome check  "<< checkPalindrome(arr);


}