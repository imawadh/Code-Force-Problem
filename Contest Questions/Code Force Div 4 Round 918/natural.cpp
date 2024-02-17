# include <iostream>
# include <string>
void funct(int ,int, string);
// Need to solve 

void funct(int a,int b, string str){

    for(int j = a; j<=b ;)
        {
            if((str[j]=='b'||str[j]=='c'||str[j]=='d') && (str[j+2]=='b'||str[j+2]=='c'||str[j+2]=='d')&&(str[j+3]=='b'||str[j+3]=='c'||str[j+3]=='d'))
            {
                cout<<str[j]<<str[j+1]<<str[j+2]<<'.';
                j = j+3;    
            }
            else
            {
                cout<<str[j]<<str[j+1]<<'.';
                j=j+2;
            }
        }



}





using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i = 0; i<t ; i++)
    {
        int a;
        cin>>a;
        string str;
        cin>>str;
        if(str[a-1]=='a'|| str[a-1]=='e'){
            funct(0,a-1,str);
        }else{
            funct(0,a-4,str);
            cout <<'.'<<str[a-3]<<str[a-2]<<str[a-1];
        }
        

        cout<<'\n';
    }
}