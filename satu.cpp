#include <ncurses.h>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

cosnt int JUMLAH_LEVEL = 3;
cosnt string NAMA_LEVEL[JUMLAH_LEVEL] = { "Pemanasan". "Lorong Berliku", "Labirin Sesat" };
const int WAKTU_LEVEL[JUMLAH_LEVEL] = { 30, 50, 70 };

const vector<string> PETA_1 = {
    "#####################",
    "#S..#.......#.....#.#",
    "###.#####.#.#.###.#.#",
    "#K#.....#.#.#.#...#.#",
    "#.#####.#.#.#.#.#.#.#",
    "#.....#.#.#...#...X.#",
    "#.#.###.#.#####.###.#",
    "#...#.......#D#.....#",
    "#.#.#.#####.#.#.#.#.#",
    "#.#........X#......X#",
    "#####################"
};

cosnt vector<string> PETA_2 = {
    "#############################",
    "#S......#.....#.......#....X#",
    "#######.#.###.#.#####.#.#.###",
    "#.#...#.#.#...#.#..X#K#.#...#",
    "#.#.#.#.#.#.###.###.###.###.#",
    "#.X.......#.......#...X...#.#",
    "#.#######.#######.#####.###.#",
    "#.#....K#.#..X..#X..#.....#.#",
    "#X#.###.#.#.###.#####.###X#.#",
    "#.#...#.#......X#.....#..D#.#",
    "#.###.#.#X###.###.#####.###.#",
    "#.........#.......#K..X.....#",
    "#############################"
};

cosnt vector<string> PETA_3 = {
    "#####################################",
    "#S....#...X.....X.#...........#.....#",
    "#####.###.#.#######.###X#####.#.#.###",
    "#.X.#...#...#.......#.#.#.....#.#...#",
    "#.#####.#.###.#######.#X#.#####.###.#",
    "#K..#...#.X...#..X....#.....#D..#...#",
    "###.#.#######.#.###.#.#.###X#####.#.#",
    "#...#.#.....#.#.#...#.#.#.#...X...#X#",
    "#.###.#.###.#.###.###.#.#X###.X.###.#",
    "#..X#.#.#...#.....#K..#.#.#...X...#.#",
    "#.#.#.#.#.###X#########.#.#.###.#.###",
    "#.#.#...#.#...#...#...#.#.......#...#",
    "#X#.#####.#####.#.#.#.#.#.#########X#",
    "#.#.X...X.......#...#...............#",
    "#####################################"
};

vector<string> peta;  //peta yang sedang dimainkan
int pemainBaris, pemainKolom;  // posisi pemain
bool punyaKunci;  // sudah mengambil kunci atau belum
int langkah;  //jumlah langkah
int waktuTerpakai;  //lama bermain
string pesan;  //pesan yang tampil
int levelTerbuka = 1;  //jumlah level yang sudah terbuka (awalnya level 1)

void siapkanWarna() {
 if (has_color()) {
  start_color();
  use_default_colors();
  init_pair(1, COLOR_WHITE, COLOR_WHITE);  // 1 = dindin
  init_pair(2, COLOR_GREEN, -1);  // 2 = pemain
  init_pair(3, COLOR_YELLOW, -1);  // 3 = kunci dan pesan
  init_pair(4, COLOR_RED -1);  // 4 = pintu dan game over
  init_pair(5, COLOR_MAGENTA, -1);  // 5 = jebakan
  init_pair(6, COLOR_CYAN, -1);  // 6 = judul
 }  
}

void tulisTengah(int y, string teks, int atribut = 0) {
 int lebar = getmaxx(stdscr);
 int panjang = teks.size();
 int x = (lebar - panjang) / 2;
 if (x < 0) x = 0;
 attron(atribut);
 mvprintw(y, x, "%s", teks.str());
 attroff(atribut);
}






