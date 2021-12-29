#include<iostream>
#include<cstdlib> 
#include<ctime>
using namespace std;
int main()
{
  string names1[]={"Perky ","Nipper ","Glitzy ","Happy ","Squeezy ","Tiny ","Stampy ","Tootsie ","Kringle ","Pudding ","Cookie ","Tinker ","Pixie ","Buddy ","Elfie ","Jingle ","jolly "};
  string names2[]={"Angeleyes","Floppyfeet","Tinselshoes","Pointyears","Snowbum","Glitterballs","Festivefingers","Sugarsocks","Picklepants","Sparklynose","Twinkletoes"};
  string resultantnames[200];
  int a;
  int k;
  char e;
  for(int i=0;i<17;i++){
    for(int j=0;j<11;j++){
      resultantnames[k]=names1[i] + names2[j];
      k++;
    } 
  } 
  cout<<"Enter * to know your funny name";
  cin>>e;
  if(e=='*'){
     srand(time(0));
     a=rand()%187;
     cout<<resultantnames[a];
  }else{
    cout<<"Invalid Entry!!";
  }

  return 0;

}


