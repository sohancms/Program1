/*বিসমিল্লাহির_রহমানির_রহীম
 Author: SOHAN
*/
///*****************************************************************************************
///***************START************************START************************START***********
///*****************************************************************************************

#include <iostream>
using namespace std;

int main()
{
    int n,k,count=0,array[100];
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>array[i];
    for(int i=0;i<n;i++)
    {
        if((array[i]>=array[k-1])&&(array[i]>0))
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout<<count;
return 0;
}
//**************************Alhamdulillah**************************//
//**************************Alhamdulillah**************************//

/*               ____▄▄▄▀▀▀▀▀▀▀▄
             ___▄▀▀____▀▀▀▀▄____█
           _▄▀▀__▀▀▀▀▀▀▄___▀▄___█
          _█▄▄▄▄▄▄_______▀▄__▀▄__█
        __█_________▀▄______█____█_█
       ▄█_____________▀▄_____▐___▐_▌
       ██_______________▀▄___▐_▄▀▀▀▄
       █________██_______▌__▐▄▀______█
       █_________█_______▌__▐▐________▐
      ▐__________▌_____▄▀▀▀__▌_______▐      _______▄▄▄▄▄▄
       ▌__________▀▀▀▀________▀▀▄▄▄▀       ████▓▓▓▓▓▓▓███▄
       ▌____________________________▄▀__▄▄█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▄
       ▐__________________________▄▀_▄█▓▓▓▓▓▓▓▓▓▓_____▓▓____▓▓█▄
        ▌______________________▄▀_▄█▓▓▓▓▓▓▓▓▓▓▓____▓▓_▓▓_▓▓__▓▓█
      ▄▀▄_________________▄▀▀▌██▓▓▓▓▓▓▓▓▓▓▓▓▓__▓▓▓___▓▓_▓▓__▓▓█
      ▌____▀▀▀▄▄▄▄▄▄▄▄▀▀___▌█▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓__▓________▓▓___▓▓▓█
      ▀▄_________________▄▀▀▓▓▓▓▓▓▓▓█████████████▄▄_____▓▓__▓▓▓█
        █▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▄▄___▓▓▓▓▓█
        █▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓▓███▓▓▓▓████▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓█
         █▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓█▓▓██░░███████░██▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓█
         █▓▓▓▓▓▓▓▓▓▓▓▓▓▓██▓░░░░░█░░░░░██░░░░██▓▓▓▓▓▓▓▓▓██▓▓▓▓▌
         █▓▓▓▓▓▓▓▓▓▓▓▓▓▓███░░░░░░░░   ░██░░░░░░░██▓▓▓▓▓▓▓██▓▓▌
         ▐▓▓▓▓▓▓▓▓▓▓▓▓▓▓██░░░░░░░  ______░░░░░░░░░██████▓▓▓▓▓█▓▌
         ▐▓▓▓▓▓▓▓▓▓▓▓▓▓▓██░░░░░░  ▓▓▓▓▓░░░░░░░███░░███▓▓▓▓▓█▓▌
          █▓▓▓▓▓▓▓▓▓▓▓▓▓██░░░░░  ▓▓█▄▄▓░░░░░░░░___░░░░█▓▓▓▓▓█▓▌
          █▓▓▓▓▓▓▓▓▓▓▓▓▓█░░█░░░░  ▓▓██░░░░░░░░▓▓▓▓_ ░░░░█▓▓▓▓██
          █▓▓▓▓▓▓▓▓▓▓▓▓▓█░███░░░░__ ░░░░░░░░░░░█▄█▓  ░░░░█▓▓█▓█
          ▐▓▓▓▓▓▓▓▓▓▓▓▓▓█░█████░░░░░░░░░░░░░░░░░█▓  ░░░░███▓█
           █▓▓▓▓▓▓▓▓▓▓▓▓█░░███████░░░░░░░░░░░░░░░_░░░░░██▓█
           █▓▓▓▓▓▓▓▓▓▓▓▓█░░░███████░░░░░░░░░░░░░░░░░░░░██▓█
           █▓▓▓▓▓▓▓▓▓▓▓▓█░░░███████░░░░░░░░░░░░░░░░░░░██▓█
           █▓▓▓▓▓▓▓▓▓▓▓▓█░░░░███████░░░░░░░░░░░█████░██░░░
            █▓▓▓▓▓▓▓▓▓▓▓▓█░░░░░░__███████░░░░░███████░░█░░░░
            █▓▓▓▓▓▓▓▓▓▓▓▓▓█░░░░░░█▄▄▄▀▀▀▀████████████░░█░░░░
            ▐▓▓▓▓▓▓▓▓▓▓▓▓█░░░░░░██████▄__▀▀░░░███░░░░░█░░░
            ▐▓▓▓▓▓▓▓▓▓▓▓█▒█░░░░░░▓▓▓▓▓███▄░░░░░░░░░░░░░░░   ___▄▄▄
            █▓▓▓▓▓▓▓▓▓█▒▒▒▒█░░░░░░▓▓▓▓▓█░░░░░░░░░░░░░░░▄▄▄_▄▀▀____▀▄
           █▓▓▓▓▓▓▓▓▓█▒▒▒▒█▓▓░░░░░░░░░░░░░░░░░░░░░    ▄▀____▀▄_________▀▄
          █▓▓▓▓▓▓▓▓▓█▒▒▒▒█▓▓▓▓░░░░░░░░░░░░░░░░░      ▐▄________█▄▄▀▀▀▄__█
         █▓▓▓▓▓▓▓▓█▒▒▒▒▒▒█▓▓▓▓▓▓▓░░░░░░░░░            █_█______▐_________▀▄▌
        █▓▓▓▓▓▓▓▓█▒▒▒▒▒▒███▓▓▓▓▓▓▓▓▓▓▓█▒▒▄           █__▀▄____█____▄▄▄____▐
       █▓▓▓▓▓▓▓█_______▒▒█▒▒██▓▓▓▓▓▓▓▓▓▓█▒▒▒▄         █____▀▀█▀▄▀▀▀___▀▀▄▄▐
      █▓▓▓▓▓██▒_________▒█▒▒▒▒▒███▓▓▓▓▓▓█▒▒▒██        ▀█_____________█
   __█▓▓████▒█▒_________▒█▒▒▒▒▒▒▒▒███████▒▒▒▒██    ___█_______▐______▄▄▄_____█
   █▒██▒▒▒▒▒▒█▒▒____▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒____▒█▓█__▄█__█______▀▄▄▀▀____▀▀▄▄█
   █▒▒▒▒▒▒▒▒▒▒█▒▒▒████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█_______█▓▓█▓▓▌_▐________▐____________▐
   █▒▒▒▒▒▒▒▒▒▒▒███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒_______█▓▓▓█▓▌__▌_______▐_____▄▄____▐
  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒_____█▓▓▓█▓▓▌__▌_______▀▄▄▀______▐
  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███████▓▓█▓▓▓▌__▀▄_______________▄▀
 _█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███▒▒▒▒▒▒▒██▓▓▓▓▓▌___▀▄_________▄▀▀
 █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒█▓▓▓▓▓▀▄__▀▄▄█▀▀▀
 █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▓▓▓▓██▄▄▄▀
 █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒████
 █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▄▄▄▄▄
  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███▒▒▒▒▒▒██▄▄
  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒███▒▒▒▒▒▒▒▒▒▒▒▒▒█▄
   █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
   █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒▒▒▒██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
    █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▌
     █▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒▒▒▒▒▒█▒▒▒▒█▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░▒▒▌
     █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█████████████▒▒▒▒▒█▒▒▒▒▒▒▒▒░░░░▒▒▒▒▒▒▒▒▒▒▒░▒▌
      █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█      ▐▒▒▒▒█▒▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▌
       █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█        █▒▒█▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌
        █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█        █▒█▒▒▒▒▒▒░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌
         █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█       █▒▒▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
         █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█        █▒▒▒▒░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
          █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█        █▒▒▒░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀
           █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█       █▒░░░▒▒▒▒▒░░░░░░░░▒▒▒█▀▀▀
            █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█       █░▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░█▀
             █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█       █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀
              █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█       █▒▒▒▒▒▒▒▒▒▒▒▒█▀
              █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█       ▀▀▀███████▀▀
               █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
                █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
                 █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
                  █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
                   █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒██▒█
                    █▒▒▒▒▒▒▒▒▒▒▒▒▒██▒▒▒▒█
                    █▒▒▒▒▒▒▒▒████▒▒▒▒▒▒▒█
                    █████████▒▒▒▒▒▒▒▒▒▒▒█
                     █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
                     █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█
                      █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▌
                      █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░▌
                       █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░▌
                        █▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░█
                         █▒▒▒▒▒▒▒▒▒▒▒░░░█
                          ██▒▒▒▒▒▒░░░█▀
                            █░░░░░█▀
                             ▀▀▀▀▀*/

