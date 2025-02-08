/*

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<4;i++){
        for(char ch='A'; ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


o/p-  
A 
A B 
A B C 
A B C D 

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for(char ch='A'; ch<='A'+(4-i-1); ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
   
}
A B C D 
A B C 
A B 
A 


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
A 
B B 
C C C 
D D D D 
E E E E E 
*/

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include<iostream>
using namespace std;
int main(){
    int init=0;
    for(int i=0;i<5;i++){

    
    for(int j=1;j<=5-i;j++){
        cout<< "*";
    }
    for(int j=0;j<init;j++){
        cout<< " ";
    }

    for(int j=1;j<=5-i;j++){
        cout<< "*";
    }
    init+=2;
    cout << endl;
    }
    
    
}

/*
**********
****  ****
***    ***
**      **
*        *
*/