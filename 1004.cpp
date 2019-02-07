#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    long long N,M;
    int T;
    cin>>T;
    while(T--)
    {
        cin>>N>>M;
        if(N%2==0 && M%2==0)
        {
            if(N>M)
            {
                cout<<"U"<<endl;
            }
            else
            {
                cout<<"L"<<endl;
            }
        }
        else
        {
            if(N%2!=0 && M%2!=0)
            {
                if(M>=N)
                {
                    cout<<"R"<<endl;
                }
                else
                {
                    cout<<"D"<<endl;
                }

            }
            else
            {
                if(N%2==0 && M%2!=0)
                {
                    if(N>M)
                    {
                        cout<<"D"<<endl;
                    }
                    else
                    {
                        cout<<"L"<<endl;
                    }
                }
                else
                {
                    if(N>M)
                    {
                        cout<<"U"<<endl;
                    }
                    else
                    {
                        cout<<"R"<<endl;
                    }
                }
            }
        }

        
    }
    



    return 0;
}