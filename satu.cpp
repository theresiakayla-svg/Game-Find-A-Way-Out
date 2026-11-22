#include <ncurses.h>   
#include <string>      
#include <vector>       
#include <ctime>

using namespace std;

#include "peta.hpp"

const int MENANG        = 1;
const int KALAH_JEBAKAN = 2;
const int KALAH_WAKTU   = 3;
const int KE_MENU       = 4;  

vector<string> peta;        
void siapkanwarna(){
 if (has_color()){
  start_color();

  init_pair(1, COLOR_RED, COLOR_RED);
  init_pair(2, COLOR_YELLOW, COLOR_BLACK);
  init_pair(3, COLOR_GREEN, COLOR_BLACK);
  init_pair(4, COLOR_RED, COLOR_BLACK);
 }
}
int pemainBaris, pemainKolom;   
bool punyaKunci;            
int langkah;                
int waktuTerpakai;          
string pesan;               
int levelTerbuka = 1;
 
