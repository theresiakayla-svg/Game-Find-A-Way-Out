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
int pemainBaris, pemainKolom;   
bool punyaKunci;            
int langkah;                
int waktuTerpakai;          
string pesan;               
int levelTerbuka = 1;
 
