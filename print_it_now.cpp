#include<iostream>
using namespace std;
int main()
{
    char str[100];

    cin.getline(str,100);
    cout<<str;
    cout<<"\n \n";
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";

// project by vamsi and AYON student of parul university

    for(int b=0;str[b]!='\0';b++){

        switch(str[b])
        {
        case 'a' :
            cout<<"\n     #      ";
            cout<<"\n    # #     ";
            cout<<"\n   #   #    ";
            cout<<"\n  #######   ";
            cout<<"\n #       #  ";
            cout<<"\n\n"   ;        
            break;

        case 'b' :
            cout<<"\n ######      ";
            cout<<"\n #     #     ";
            cout<<"\n ######      ";
            cout<<"\n #     #     ";
            cout<<"\n ######      "; 
            cout<<"\n\n"   ;        
            break;

        case 'c' :
            cout<<"\n  ######   ";
            cout<<"\n  #        ";
            cout<<"\n  #        ";
            cout<<"\n  #        ";
            cout<<"\n  ######   "; 
            cout<<"\n\n"   ;        
            break;

        case 'd' :
            cout<<"\n  #####     ";
            cout<<"\n  #     #   ";
            cout<<"\n  #     #   ";
            cout<<"\n  #     #   ";
            cout<<"\n  #####     ";
            cout<<"\n\n"   ;        
            break;
    
        case 'e' :
            cout<<"\n  ######     ";
            cout<<"\n  #         ";
            cout<<"\n  ######     ";
            cout<<"\n  #         ";
            cout<<"\n  ######     "; 
            cout<<"\n\n"   ;        
            break;

        case 'f' :
            cout<<"\n  ######    ";
            cout<<"\n  #         ";
            cout<<"\n  ######     ";
            cout<<"\n  #         ";
            cout<<"\n  #         ";
            cout<<"\n\n"   ;        
            break;

        case 'g' :
            cout<<"\n  #######    ";
            cout<<"\n  #         ";
            cout<<"\n  #   ####   ";
            cout<<"\n  #   #  #   ";
            cout<<"\n  ###### #    ";
            cout<<"\n\n"   ;        
            break;

        case 'h' :
            cout<<"\n  #       #   ";
            cout<<"\n  #       #  ";
            cout<<"\n  #########   ";
            cout<<"\n  #       #   ";
            cout<<"\n  #       #    "; 
            cout<<"\n\n"   ;        
            break;

        case 'i' :
            cout<<"\n  #########   ";
            cout<<"\n      #      ";
            cout<<"\n      #       ";
            cout<<"\n      #      ";
            cout<<"\n  #########    "; 
            cout<<"\n\n"   ;        
            break;

        case 'j' :
            cout<<"\n  #########   ";
            cout<<"\n      #      ";
            cout<<"\n      #       ";
            cout<<"\n  #   #      ";
            cout<<"\n  #####   "; 
            cout<<"\n\n"   ;        
            break;

        case 'k' :
            cout<<"\n  #    # ";
            cout<<"\n  #  #   ";
            cout<<"\n  # #     ";
            cout<<"\n  #  #     ";
            cout<<"\n  #    #  ";
            cout<<"\n\n"   ;        
            break;

        case 'l' :
            cout<<"\n  #        ";
            cout<<"\n  #        ";
            cout<<"\n  #        ";
            cout<<"\n  #        ";
            cout<<"\n  #######  "; 
            cout<<"\n\n"   ;        
            break;

        case 'm' :
            cout<<"\n  ##   ##   ";
            cout<<"\n  # # # #  ";
            cout<<"\n  #  #  #";
            cout<<"\n  #     #";
            cout<<"\n  #     #";
                        cout<<"\n\n"   ;        
            break;

        case 'n' :
            cout<<"\n  ##    #   ";
            cout<<"\n  # #   #  ";
            cout<<"\n  #  #  #   ";
            cout<<"\n  #   # #";
            cout<<"\n  #    ##";
            cout<<"\n\n"   ;        
            break;
        case 'o' :
            cout<<"\n  #######   ";
            cout<<"\n  #     #  ";
            cout<<"\n  #     #   ";
            cout<<"\n  #     #";
            cout<<"\n  #######";
            cout<<"\n\n"   ;
            break;

        case 'p' :
            cout<<"\n  ######   ";
            cout<<"\n  #    #   ";
            cout<<"\n  # ## #    ";
            cout<<"\n  #                ";
            cout<<"\n  #                "; 
            cout<<"\n\n"   ;        
            break;

        case 'q' :
            cout<<"\n  ####### ";
            cout<<"\n  #     #  ";
            cout<<"\n  #   # #   ";
            cout<<"\n  #     #   ";
            cout<<"\n  ####### #  ";
            cout<<"\n\n"   ;        
            break;

        case 'r' :
            cout<<"\n  ######   ";
            cout<<"\n  #    #  ";
            cout<<"\n  ######   ";
            cout<<"\n  #   #         ";
            cout<<"\n  #    #        ";
            cout<<"\n\n"   ;        
            break;

        case 's' :
            cout<<"\n  #######  ";
            cout<<"\n  #                ";
            cout<<"\n  #######   ";
            cout<<"\n        #   ";
            cout<<"\n  #######      "; 
            cout<<"\n\n"   ;        
            break;

        case 't' :
            cout<<"\n  ####### ";
            cout<<"\n     #      ";
            cout<<"\n     #      ";
            cout<<"\n     #      ";
            cout<<"\n     #     ";
            cout<<"\n\n"   ;        
            break;

        case 'u' :
            cout<<"\n  #      #  ";
            cout<<"\n  #      #";
            cout<<"\n  #      #   ";
            cout<<"\n  #      #";
            cout<<"\n  ########";
            cout<<"\n\n"   ;        
            break;

        case 'v' :
            cout<<"\n  #         #  ";
            cout<<"\n   #       #";
            cout<<"\n    #     #   ";
            cout<<"\n     #   #";
            cout<<"\n      ### ";
            cout<<"\n\n"   ;        
            break;

        case 'w' :
            cout<<"\n  #    #    #";
            cout<<"\n  #   # #   #";
            cout<<"\n  #  #   #  #";
            cout<<"\n  # #     # # ";
            cout<<"\n  ##       ## "; 
            cout<<"\n\n"   ;        
            break;

        case 'x' :
            cout<<"\n  #   #  ";
            cout<<"\n   # #   ";
            cout<<"\n    #  ";
            cout<<"\n   # #  ";
            cout<<"\n  #   # "; 
            cout<<"\n\n"   ;        
            break;

        case 'y' :
            cout<<"\n  #   #  ";
            cout<<"\n   # #   ";
            cout<<"\n    #  ";
            cout<<"\n    #  ";
            cout<<"\n    #   "; 
            cout<<"\n\n"   ;        
            break;

        case 'z' :
            cout<<"\n  ######";
            cout<<"\n      #      ";
            cout<<"\n     #       ";
            cout<<"\n    #   ";
            cout<<"\n   ######         "; 
            cout<<"\n\n"   ;        
            break;


        default:
            break;
        }
    }
}
