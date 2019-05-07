#include <iostream>
using namespace std;
class human
{
    private:
        string fullname;
        int day_DOB;
        int month_DOB;
        int year_DOB;
        string phonenumber;
        bool sex;
        string mail;
        int ID;
   public:
   
        human(string fullname,int day,int month,int year,string phonenumber,bool sex,string mail,int ID)
        {
            this -> fullname = fullname;
            this -> day_DOB = day;
            this -> month_DOB =month;
            this -> year_DOB = year;
            this -> phonenumber = phonenumber;
            this -> sex=sex;
            this -> mail=mail;
            this -> ID=ID;
        }        
        void run()
        {
        
            cout<<this->fullname<<" RUNNNNNN....."<<endl;
        }
        void sing()
        {
            cout<<this->fullname<<" sing a song"<<endl;
        }
        void say(string content)
        {
            cout<<this->fullname<<" said: "<<content<<endl;
        }
       
   
       
};
int main()
{
    
    human truong("TRINH VAN TRUONG",18,3,2000,"0366662673",true,"trinhtruong1803@gmail.com",32692);
    truong.say("haha");
    return 0;
}
