#include<iostream>
using namespace std;


int main(){
    int quant;
    int choise;

    int qrooms=0;
    int qpasta=0;
    int qburger=0;
    int qshake=0;
    int qchicken=0;

    int srooms=0;
    int spasta=0;
    int sburger=0;
    int sshake=0;
    int schicken=0;

    int total_rooms=0;
    int total_pasta=0, total_burger=0,total_shake=0, total_chicken=0;


    cout <<"\n\t Quantity if rooms we have";
    cout<<"\n rooms available";
    cin>> qrooms;
    cout <<"\n\t Quantity if pasta we have";
    cout<<"\n pasta available";
    cin>> qpasta;
    cout <<"\n\t Quantity if burger we have";
    cout<<"\n burger available";
    cin>> qburger;
    cout <<"\n\t Quantity if shake we have";
    cout<<"\n shake available";
    cin>> qshake;
    cout <<"\n\t Quantity if chicken we have";
    cout<<"\n chicken available";
    cin>> qchicken;

    m:
    cout<<"\n\t\t Please select fro the given menu options";
    cout<<"\n1) rooms";
    cout<<"\n2) pasta";
    cout<<"\n3) burger";
    cout<<"\n4) shake";
    cout<<"\n5) chicken";
    cout<<"\n6) info regrading sale and collection";
    cout<<"\n8) exit";
    cout<< "\n\n please enter you choise";
    cin>> choise;

    switch(choise){
        case 1:
            cout<< "\n\n enter the number of rooms you want: \n";
            cin>> quant;
            if(qrooms-srooms >=quant){
                srooms=srooms+quant;
                total_rooms=total_rooms+quant*1200;
                cout<< "\n\n\t\t "<<quant<<"rooms have been alloted to you! ";
            }else{
                cout<<"\n\t only"<< qrooms-srooms<<" rooms remaining in hotel";}
                break;
            
 
        case 2:
            cout<< "\n\n enter the pasta quantity: \n";
            cin>> quant;
            if(qpasta-spasta >=quant){
                spasta=spasta+quant;
                total_pasta=total_pasta+quant*1200;
                cout<< "\n\n\t\t "<<quant<<"pasta have been alloted to you! ";
            }else{
                cout<<"\n\t only"<< qpasta-spasta<<" pasta dishes remaining in hotel";}
                break;
    

        case 3:
            cout<< "\n\n enter the number of burger you want: ";
            cin>> quant;
            if(qburger-sburger >=quant){
                sburger=sburger+quant;
                total_burger=total_burger+quant*1200;
                cout<< "\n\n\t\t "<<quant<<"burgers have been alloted to you! ";
            }else{
                cout<<"\n\t only"<< qburger-sburger<<" burger remaining in hotel";}
                break;
            

        case 4:
            cout<< "\n\n enter the number of shake you want: ";
            cin>> quant;
            if(qshake-sshake >=quant){
                sshake=sshake+quant;
                total_shake=total_shake+quant*1200;
                cout<< "\n\n\t\t "<<quant<<"shakes have been alloted to you! ";
            }else{
                cout<<"\n\t only"<< qshake-sshake<<" shake remaining in hotel";}
                break;
            

        case 5:
            cout<< "\n\n enter the number of chicken you want: ";
            cin>> quant;
            if(qchicken-schicken >=quant){
                schicken=schicken+quant;
                total_chicken=total_chicken+quant*1200;
                cout<< "\n\n\t\t "<<quant<<"chicken have been alloted to you! ";
            }else{
                cout<<"\n\t only"<< qchicken-schicken<<" rooms remaining in hotel";}
                break;
            

        case 6:
            cout<<"\n\t details of sales and collections";
            cout<<"\n\t Number of rooms we had:"<<qrooms;
            cout<<"\n\t Number fo rooms we gave for rent"<<srooms;
            cout<<"\n\t remaning rooms :"<< qrooms-srooms;
            cout<<"\n\t total rooms collections for the day"<<total_rooms;
            cout<<"\n\n";
            cout<<"\n\t details of sales and collections";
            cout<<"\n\t Number of pasta we had:"<<qpasta;
            cout<<"\n\t Number fo pasta we gave for rent"<<spasta;
            cout<<"\n\t remaning pasta :"<< qpasta-spasta;
            cout<<"\n\t total pasta collections for the day"<<total_pasta;
            cout<<"\n\n";
            cout<<"\n\t details of sales and collections";
            cout<<"\n\t Number of burger we had:"<<qburger;
            cout<<"\n\t Number fo burger we gave for rent"<<sburger;
            cout<<"\n\t remaning burger :"<< qburger-sburger;
            cout<<"\n\t total burger collections for the day"<<total_burger;
            cout<<"\n\n";
            cout<<"\n\t details of sales and collections";
            cout<<"\n\t Number of shake we had:"<<qshake;
            cout<<"\n\t Number fo shake we gave for rent"<<sshake;
            cout<<"\n\t remaning shake :"<< qshake-sshake;
            cout<<"\n\t total shake collections for the day"<<total_shake;
            cout<<"\n\n";
            cout<<"\n\t details of sales and collections";
            cout<<"\n\t Number of chicken we had:"<<qchicken;
            cout<<"\n\t Number fo chicken we gave for rent"<<schicken;
            cout<<"\n\t remaning chicken :"<< qchicken-schicken;
            cout<<"\n\t total chicken collections for the day"<<total_chicken;
            break;
        case 7:
            exit(0);
            default:
                cout<< "\n\n\t please select the numbers mentioned above";

    }

    goto m;



}