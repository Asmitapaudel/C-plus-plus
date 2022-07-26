/* Create a class employee which contains private  an dmember function like:Employee Name ,Employee-address ,phone,salary ,Net-salary 
,tax and calculate (),to calculate the net-salary (net-salary=salary-tax) and public member function like input () and output() to 
get information fo employee abd display the information along with the calculated Net-salary value respectively.Now write a main() ptogram
 */
#include<iostream> 
using namespace std;
class Employee{
    string name[30];
    string address[30]; 
    int phone[2];
    int salary[2];
    int tax[2];
    int Net_salary;
    int calculate(int a,int b){
        
        Net_salary = a - b;
        return Net_salary;
    }
    public:
    void input(){
    
    for (int i=1;i<=2;i++){
        cout<<"Enter the name,address,phonenumber ,salary,tax amount employee pays of employee "<<i<<endl;
        cin>>name[i];
        // cout<<"Enter the adress:"<<endl;
        cin>>address[i]; 
        // cout<<"Enter the phone number :"<<endl;
        cin>>phone[i];
        // cout<<"Enter the salary:"<<endl;
        cin>>salary[i];
        // cout<<"Enter the tax amount employee pays:"<<endl;
        cin>>tax[i];
    } 
    }
    void output(){
        for(int i=1;i<=2;i++){
        cout<<"The name is = "<<name[i]<<endl;
        cout<<"\tThe adress is = "<<address[i]<<endl;
        cout<<"\tThe phone number is = "<<phone[i]<<endl;
        cout<<"\tThe salary is = "<<salary[i]<<endl;
        cout<<"\tThe tax amount paid  is = "<<tax[i]<<endl;
        cout<<"\tThe net Salary of the employee is = "<<calculate(salary[i],tax[i]);

        cout<<endl;
    }
    }
};
int main(){

Employee e;

e.input();
e.output();
return 0;
}