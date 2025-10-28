#include <iostream>


using namespace std;
void calcSum(int a, int b)
{
    cout<<"summa on: "<<a+b<<endl;
}

void calcDiv(float a, float b)
{
    if (b!=0)
    {
        cout<<"osamaara on: "<<a/b<<endl;

    } else cout<<"VIRHE! EI VOI JAKAA NOLLALLA"<<endl;
}

int retSum(int a, int b)
{
    return a+b;
}

float retDiv(float a, float b){
    if (b!=0)
    {
        return a/b;
    } else  throw std::runtime_error("JAKAJA EI SAA OLLA NOLLA.");


}

int main()
{
    int a;
    int b;
    float result;

    cout<<"Anna kokonaisluku"<< endl;
    cin>>a;
    cout<<"Anna toinen kokonaisluku"<< endl;
    cin>>b;

    calcSum(a,b);

    calcDiv(a, b);

    cout<<retSum(a,b)<<endl;

    try {
        result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;

}
