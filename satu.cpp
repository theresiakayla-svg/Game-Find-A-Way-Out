#include <ncurses.h>   
#include <string>      
#include <vector>       
#include <ctime>
using namespace std;

const int  JUMLAH_LEVEL = 3;
string NAMA_LEVEL[JUMLAH_LEVEL] ={"pemanasan", "lorong berliku", "labirin sesat"};
int WAKTU_LEVEL[JUMLAH_LEVEL]= {30, 50, 70};


#include "peta.hpp"

const int MENANG        = 1;
const int KALAH_JEBAKAN = 2;
const int KALAH_WAKTU   = 3;
const int KE_MENU       = 4;  

vector<string> peta;        
int pemainBaris, pemainKolom;   
bool punyaKunci;            
int langkah;                
int waktuTerpakai;          
string pesan;               
int levelTerbuka = 1;

void siapkanwarna(){
 if (has_color()){
  start_color();

  init_pair(1, COLOR_RED, COLOR_RED);
  init_pair(2, COLOR_YELLOW, -1);
  init_pair(3, COLOR_GREEN, -1);
  init_pair(4, COLOR_RED, -1);
  init_pair(5, COLOR_MAGNETA, -1);
  init_pair(6, COLOR_CYAN, -1);
 }
}
 
