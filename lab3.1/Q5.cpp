/* Create a class to represent batsmen in a circket team which includes the following member:
 Data member : Name, Runs made, No-of-fours, No-of-six.
 Member function: To assigne the inital value 
                  To display batsman information
Create an array of object to display the information of five batsmen.  */
#include<iostream>
using namespace std;
class Batsmen{
    int No_of_fours[5],No_of_sixes[5],Runs_made[5];
    string Name[5];
    public:
      void getinfo(){
        int i;
        for (i=0;i<5;i++){
            cout << "Enter the name of the batsman:" << endl;
            cin >> Name[i];
            cout << "Enter runs made by the batsman:" << endl;
            cin >> Runs_made[i];
            cout << "Enter the number of fours hit:" << endl;
            cin >> No_of_fours[i];
            cout << "Enter the number of sizes hit:" << endl;
            cin >> No_of_sixes[i];
        }
      }  
      void printinfo(){
        for (int i=0;i<5;i++){
            cout<<"Name of player:"<<Name[i]<< endl;
            cout<<"No_of_fours of player:"<<No_of_fours[i]<< endl;
            cout<<"No_of_sixes of player:"<<No_of_sixes[i]<< endl;
            cout<<"Runs_made of player:"<<Runs_made[i]<< endl;
            cout<< endl;
         }
      }

};
int main(){
    Batsmen B;
    B.getinfo();
    B.printinfo();
    return 0;
}