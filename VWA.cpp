#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

float SKIP = 0;

float MUN = 1521.428571429;
float ALBA = 1518.571428571;
float LUD = 1463;
float BAYR = 1482.857142857;
float BONN = 1510;
float EWE = 1497.142857143;
float BRO = 1530;
float SKY = 1485.714285714;
float ULM = 1524.285714286;
float SOL = 1500;
float GIE = 1457;
float BRA = 1512.857142857;
float JENA = 1490;
float MITT = 1480;
float GOTT = 1490;
float BRE = 1494.285714286;
float ROCK = 1400;
float TIG = 1497.142857143;

float MUN_16_17;
float ALBA_16_17;
float LUD_16_17;
float BAYR_16_17;
float BONN_16_17;
float EWE_16_17;
float BRO_16_17;
float SKY_16_17;
float ULM_16_17;
float SOL_16_17;
float GIE_16_17;
float BRA_16_17;
float JENA_16_17;
float MITT_16_17;
float GOTT_16_17;
float BRE_16_17;
float ROCK_16_17;
float TIG_16_17;

float MUN_ref = 1500;
float ALBA_ref = 1500;
float LUD_ref = 1500;
float BAYR_ref = 1500;
float BONN_ref = 1500;
float EWE_ref = 1500;
float BRO_ref = 1500;
float SKY_ref = 1500;
float ULM_ref = 1500;
float SOL_ref = 1500;
float GIE_ref = 1500;
float BRA_ref = 1500;
float JENA_ref = 1500;
float MITT_ref = 1500;
float GOTT_ref = 1500;
float BRE_ref = 1500;
float ROCK_ref = 1500;
float TIG_ref = 1500;

float MUN_ranking = 0;
float ALBA_ranking = 0;
float LUD_ranking = 0;
float BAYR_ranking = 0;
float BONN_ranking = 0;
float EWE_ranking = 0;
float BRO_ranking = 0;
float SKY_ranking = 0;
float ULM_ranking = 0;
float SOL_ranking = 0;
float GIE_ranking = 0;
float BRA_ranking = 0;
float JENA_ranking = 0;
float MITT_ranking = 0;
float GOTT_ranking = 0;
float BRE_ranking = 0;
float ROCK_ranking = 0;
float TIG_ranking = 0;

float MUN_relchance = 0;
float ALBA_relchance = 0;
float LUD_relchance = 0;
float BAYR_relchance = 0;
float BONN_relchance = 0;
float EWE_relchance = 0;
float BRO_relchance = 0;
float SKY_relchance = 0;
float ULM_relchance = 0;
float SOL_relchance = 0;
float GIE_relchance = 0;
float BRA_relchance = 0;
float JENA_relchance = 0;
float MITT_relchance = 0;
float GOTT_relchance = 0;
float BRE_relchance = 0;
float ROCK_relchance = 0;
float TIG_relchance = 0;

float MUN_winrate = 0;
float ALBA_winrate = 0;
float LUD_winrate = 0;
float BAYR_winrate = 0;
float BONN_winrate = 0;
float EWE_winrate = 0;
float BRO_winrate = 0;
float SKY_winrate = 0;
float ULM_winrate = 0;
float SOL_winrate = 0;
float GIE_winrate = 0;
float BRA_winrate = 0;
float JENA_winrate = 0;
float MITT_winrate = 0;
float GOTT_winrate = 0;
float BRE_winrate = 0;
float ROCK_winrate = 0;
float TIG_winrate = 0;

float point_value = 0.1;
float game_value = 3;

void gameday_12_13();
void gameday_13_14();
void gameday_14_15();
void gameday_15_16();
void gameday_16_17();
void simulation_17_18();
void calc_relchance();
void det_winner();

int main() {
  int sim_count_2 = 0;
  gameday_12_13();
  gameday_13_14();
  gameday_14_15();
  gameday_15_16();
  gameday_16_17();
do{
  int sim_count = 0;
  do{
  simulation_17_18();
  sim_count++;
}while(sim_count<100);
calc_relchance();
det_winner();
sim_count_2++;
std::cout << sim_count_2 << '\n';
}while(sim_count_2<100);
std::cout << MUN_winrate << '\n';
std::cout << ALBA_winrate << '\n';
std::cout << LUD_winrate << '\n';
std::cout << BAYR_winrate << '\n';
std::cout << BONN_winrate << '\n';
std::cout << EWE_winrate << '\n';
std::cout << BRO_winrate << '\n';
std::cout << SKY_winrate << '\n';
std::cout << ULM_winrate << '\n';
std::cout << SOL_winrate << '\n';
std::cout << GIE_winrate << '\n';
std::cout << BRA_winrate << '\n';
std::cout << JENA_winrate << '\n';
std::cout << MITT_winrate << '\n';
std::cout << GOTT_winrate << '\n';
std::cout << BRE_winrate << '\n';
std::cout << ROCK_winrate << '\n';
std::cout << TIG_winrate << '\n';
  return 0;
};

void gameday_12_13() {
  int runde = 0;
  float AVG = (MUN + ALBA + LUD + BAYR + BONN + EWE + BRO + SKY + ULM + SOL + GIE + BRA + MITT + BRE + TIG)/15;
  float season_weighting_12_13 = 0.95;
  float season_weighting_ref_12_13 = 0.05;
      do{

        float season12_13[34][36] = {
          //MUN      ALBA      LUD          BAYR         BONN      EWE        BRO        SKY         ULM       SOL        GIE        BRA       JENA      MITT       GOTT      BRE       ROCK      TIG
          {-19, EWE, 32, AVG,  18, SKY,     6, SOL,      7, MITT,  19, MUN,   17, BRE,   -18, LUD,   1, BRA,   -6, BAYR,  5, AVG,    -1, ULM,  SKIP, 0,  -7, BONN,  SKIP, 0,  -17, BRO, SKIP, 0,  -11, AVG},
          {10, GIE,  21, BONN, 9, ULM,      8, TIG,      -21,ALBA, -7, BRO,   7, EWE,    9, AVG,     -7, LUD,  25, BRE,   -10,MUN,   2, AVG,   SKIP, 0,  -12, AVG,  SKIP, 0,  -25, SOL, SKIP, 0,  -8, BAYR },
          {-2,AVG,   1, TIG,   -15, EWE,    8,BONN,      -8, BAYR, 15, LUD,   15, AVG,   -3, MITT,   6, BRE,   12, GIE,   -12,SOL,   -11, AVG, SKIP, 0,  3, SKY,    SKIP, 0,  -6, ULM,  SKIP, 0,  -1, ALBA},
          {2, MITT,  42, AVG,  -12, BAYR,   12, BAYR,    17, BRA,  19, TIG,   -6, AVG,   -19, AVG,   7, SOL,   -7, ULM,   -34, BRE,  -17,BONN, SKIP, 0,  -2, MUN,   SKIP, 0,  34, GIE,  SKIP, 0,  -19, EWE},
          {12, LUD,  -8, ULM,  -12, MUN,    -31, BRA,    -11, AVG, 8, SOL,    15, MITT,  -6, BRE,    8, ALBA,  -8, EWE,   -8, TIG,   31, BAYR, SKIP, 0,  -15, BRO,  SKIP, 0,  6, SKY,   SKIP, 0,  8, GIE},
          {19, BAYR, -9, LUD,  9, ALBA,     -19, MUN,    -25, SKY, 1, BRA,    22, GIE,   25, BONN,  12, AVG,   -5, AVG,   -22, BRO,  -1, EWE,  SKIP, 0,  -15, TIG,  SKIP, 0,  -17, AVG, SKIP, 0,  15, MITT},
          {-9, SOL,  8, AVG,   -6, BRE,     9, GIE,      33, EWE,  -33,BONN,  9, SKY,    -9, BRO,   11, AVG,   9, MUN,    -9, BAYR,  -6, MITT, SKIP, 0,  6, BRA,    SKIP, 0,  6, LUD,   SKIP, 0,  -10, AVG},
          {6, AVG,   23, MITT, -30, BRO,    -21, EWE,    4, ULM,   21, BAYR,  30, LUD,   2, BRA,    -4, BONN,  10, TIG,   -4, AVG,   -2, SKY,  SKIP, 0,  -23, ALBA, SKIP, 0,  10, AVG,  SKIP, 0,  -10, SOL},
          {-8, BRO,  26, SKY,  -23, AVG,    15, MITT,    -13, BRE, -30, ULM,  8, MUN,    -26, ALBA, 30, EWE,   -14, AVG,  -25, AVG,  -5, TIG,  SKIP, 0,  -15, BAYR, SKIP, 0,  13, BONN, SKIP, 0,  5, BRA},
          {-6, BRA,  1, BRE,   -20, MITT,   -10, AVG,    -9, GIE,  51, AVG,   20, TIG,   16, ULM,   -16, SKY,  -7, AVG,   9, BONN,   5, MUN,   SKIP, 0,  20, LUD,   SKIP, 0,  -1, ALBA, SKIP, 0,  -20, BRO},
          //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {-12,ALBA, 12, MUN,  -26, BONN,   -2, AVG,     26, LUD,  -7, AVG,   2, ULM,    -4, SOL,   -2, BRO,   4, SKY,    -11, BRA,  11, GIE,  SKIP, 0,  7, BRE,    SKIP, 0,  -7, MITT, SKIP, 0,  23, AVG},
          {13, BONN, 10, GIE,  11, AVG,     -14, ULM,    -13, MUN, 2, SKY,    27, AVG,   -2, EWE,   14, BAYR,  -5, BRA,   -10, ALBA, 5, SOL,   SKIP, 0,  4, AVG,    SKIP, 0,  -9, TIG,  SKIP, 0,  9, BRE},
          {27, TIG,  15, BRO,  -5, GIE,     -7, AVG,     -13, SOL, 21, AVG,   -15, ALBA, -5, AVG,   11, MITT,  13, BONN,  5, LUD,    -8, BRE,  SKIP, 0,  -11, ULM,  SKIP, 0,  8, BRA,   SKIP, 0,  -27, MUN},
          {26, AVG,  -10, SOL, -2, BRA,     -10, BRE,    -14, BRO, 21, MITT,  14, BONN,  -12, TIG,  -3, GIE,   10, ALBA,  3, ULM,    2, LUD,   SKIP, 0,  -21, EWE,  SKIP, 0,  10, BAYR, SKIP, 0,  12, SKY},
          {33, BRE,  -8, EWE,  -21, AVG,    -17, SKY,    -2, TIG,  8, ALBA,   21, SOL,   17, BAYR,  15, AVG,   -21, BRO,  -5, MITT,  -10, AVG, SKIP, 0,  5, GIE,    SKIP, 0,  -33, MUN, SKIP, 0,  2, BONN},
          {14, SKY, -25, BAYR, 4, SOL,      25, ALBA,    2, AVG,   16, GIE,   16, BRA,   -14, MUN,  15, TIG,   -4, LUD,   -16, EWE,  -16, BRO, SKIP, 0,  19, AVG,   SKIP, 0,  -22, AVG, SKIP, 0,  -15, ULM},
          {2, ULM,  22, BRA,   -5, TIG,     -11, BRO,    24, AVG,  -3, BRE,   11, BAYR,  20, GIE,   -2, MUN,   -14, MITT, -20, SKY,  -22,ALBA, SKIP, 0,  14, SOL,   SKIP, 0,  3, EWE,   SKIP, 0,  5, LUD},
          {5, BRA,  -3, SKY,   -6, AVG,     16, BONN,    -16,BAYR, -6, AVG,   -5, BRE,   3, ALBA,   54, GIE,   16, MITT,  -54, ULM,  -5, MUN,  SKIP, 0,  -16, SOL,  SKIP, 0,  5, BRO,   SKIP, 0,  1, AVG},
          {12,BAYR, -3, AVG,   -7, SOL,     -12, MUN,    10, BRA,  -4, ULM,   30, TIG,   -8, MITT,  4, EWE,    7, LUD,    -7, AVG,   -10,BONN, SKIP, 0,  8, SKY,    SKIP, 0,  16, AVG,  SKIP, 0,  -30, BRO},
          {-8, ULM, 14, GIE,   8, TIG,      7, AVG,      15, BRE,  4, BRA,    2, MITT,   -4, AVG,   8, MUN,    5, AVG,    -14, ALBA, -4, EWE,  SKIP, 0,  -2, BRO,   SKIP, 0,  -15,BONN, SKIP, 0,  -8, LUD},
          //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {7, SKY,  -15, EWE,  1, BAYR,     -1, LUD,     16, SOL,  15, ALBA,  19, BRA,   -7, MUN,   4, AVG,    -16, BONN, -36, TIG,  -19, BRO, SKIP, 0,  -4, AVG,   SKIP, 0,  -7, AVG,  SKIP, 0,  36, GIE},
          {18,ALBA, -18, MUN,  41, GIE,     6, SKY,      5, ULM,   -6, BRO,   6, ULM,    -6, BAYR,  -5, BONN,  17, AVG,   -41, LUD,  3, AVG,   SKIP, 0,  10, BRE,   SKIP, 0,  -10,MITT, SKIP, 0,  30, AVG},
          {5, SOL,  5, BRE,    -7, BONN,    -21, BRA,    7, LUD,   8, MITT,   12, AVG,   14, TIG,   -12, AVG,  -5, MUN,   -42, AVG,  21, BAYR, SKIP, 0,  -8, EWE,   SKIP, 0,  -5, ALBA, SKIP, 0,  -14, SKY},
          {-2, BRE, 11, BONN,  -20, BRO,    -16, ULM,    -11,ALBA, 11, SOL,   20, LUD,   3, AVG,    16, BAYR,  -11, EWE,  -5, AVG,   13, AVG,  SKIP, 0,  -13, TIG,  SKIP, 0,  2, MUN,   SKIP, 0,  13, MITT},
          {14, BRO, 2, TIG,    6, ULM,      4, AVG,      38, GIE,  16, AVG,   -14, MUN,  13, BRE,   -6, LUD,   10, AVG,   -38, BONN, -34,MITT, SKIP, 0,  34, BRA,   SKIP, 0,  -13, SKY, SKIP, 0,  -2, ALBA},
          {-3, TIG, -16, AVG,  17, BRE,     12, EWE,     -2, AVG,  -12, BAYR, -7, AVG,   -8, ULM,   8, SKY,    4, BRA,    -13, MITT, -4, SOL,  SKIP, 0,  13, GIE,   SKIP, 0,  -17, LUD, SKIP, 0,  3, MUN},
          {57, GIE, 13, LUD, -13, ALBA,     -11, BRE,    5, AVG,   4, AVG,    -1, AVG,   -7, BRA,   19, MITT,  13, TIG,   -57, MUN,  7, SKY,   SKIP, 0,  -19, ULM,  SKIP, 0,  11, BAYR, SKIP, 0,  -13, SOL},
          {-6, AVG, -7, AVG, -5, MITT,      -21, SOL,    -34, AVG, 25, TIG,   -13, SKY,  13, BRO,   4, BRE,    21, BAYR,  -16, BRA,  16, GIE,  SKIP, 0,  5, LUD,    SKIP, 0,  -4, ULM,  SKIP, 0,  -25, EWE},
          {-4, AVG, -19,ULM, -9, EWE,       -4, TIG,     6, MITT,  9, LUD,    51, GIE,   3, SOL,    19, ALBA,  -3, SKY,   -51, BRO,  -19, AVG, SKIP, 0,  -6, BONN,  SKIP, 0,  32, AVG,  SKIP, 0,  4, BAYR},
          {30,MITT, 25, SOL, 7, AVG,        15, GIE,     5, BRO,   2, SKY,    -5, BONN,  -2, EWE,   27, BRA,   -25, ALBA, -15, BAYR, -27, ULM, SKIP, 0,  -30, MUN,  SKIP, 0,  6, TIG,   SKIP, 0,  -6, BRE},
          //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {-3, EWE, -4, BRA, -10, AVG,      -13, AVG,    -6, TIG,  3, MUN,    33, ULM,   38, GIE,   -33, BRO,  10, BRE,   -38, SKY,  4, ALBA,  SKIP, 0,  12, AVG,   SKIP, 0,  -10, SOL, SKIP, 0,  6, BONN},
          {36, AVG, 1, MITT, 15, BRA,       -18, BRO,    6, SKY,   6, BRE,    18, BAYR,  -6, BONN,  28, AVG,   22, GIE,   -22, SOL,  -15, LUD, SKIP, 0,  -1, ALBA,  SKIP, 0,  -6, EWE,  SKIP, 0,  5, AVG},
          {6, LUD,  -9, BRO, -6, MUN,       15, MITT,    -10, EWE, 10, BONN,  9, ALBA,   -8, AVG,   4, SOL,    -4, ULM,   -48, BRE,  19, TIG,  SKIP, 0,  -15, BAYR, SKIP, 0,  48, GIE,  SKIP, 0,  -19, TIG},
          {-5,BONN, 1, BAYR, -5, SKY,       -1, ALBA,    5, MUN,   31, GIE,   18, SOL,   5, LUD,    11, TIG,   -18, BRO,  -31, EWE,  29, BRE,  SKIP, 0,  -11, AVG,  SKIP, 0,  -29, BRA, SKIP, 0,  -11, ULM},
        };


        for(int i = 0;i<=35;i++){
          if(i == 1){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/MUN*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/MUN;
                MUN = (MUN + ELO_diff)*season_weighting_12_13+MUN_ref*season_weighting_ref_12_13;

              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*MUN/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*MUN/season12_13[runde][i];
                MUN = (MUN + ELO_diff)*season_weighting_12_13+MUN_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 3){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/ALBA*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/ALBA;
                ALBA = (ALBA + ELO_diff)*season_weighting_12_13+ALBA_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*ALBA/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*ALBA/season12_13[runde][i];
                ALBA = (ALBA + ELO_diff)*season_weighting_12_13+ALBA_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 5){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/LUD*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/LUD;
                LUD = (LUD + ELO_diff)*season_weighting_12_13+LUD_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*LUD/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*LUD/season12_13[runde][i];
                LUD = (LUD + ELO_diff)*season_weighting_12_13+LUD_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 7){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/BAYR*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/BAYR;
                BAYR = (BAYR + ELO_diff)*season_weighting_12_13+BAYR_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*BAYR/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*BAYR/season12_13[runde][i];
                BAYR = (BAYR + ELO_diff)*season_weighting_12_13+BAYR_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 9){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/BONN*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/BONN;
                BONN = (BONN + ELO_diff)*season_weighting_12_13+BONN_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*BONN/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*BONN/season12_13[runde][i];
                BONN = (BONN + ELO_diff)*season_weighting_12_13+BONN_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 11){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/EWE*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/EWE;
                EWE = (EWE + ELO_diff)*season_weighting_12_13+EWE_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*EWE/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*EWE/season12_13[runde][i];
                EWE = (EWE + ELO_diff)*season_weighting_12_13+EWE_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 13){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/BRO*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/BRO;
                BRO = (BRO + ELO_diff)*season_weighting_12_13+BRO_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*BRO/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*BRO/season12_13[runde][i];
                BRO = (BRO + ELO_diff)*season_weighting_12_13+BRO_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 15){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/SKY*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/SKY;
                SKY = (SKY + ELO_diff)*season_weighting_12_13+SKY_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*SKY/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*SKY/season12_13[runde][i];
                SKY = (SKY + ELO_diff)*season_weighting_12_13+SKY_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 17){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/ULM*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/ULM;
                ULM = (ULM + ELO_diff)*season_weighting_12_13+ULM_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*ULM/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*ULM/season12_13[runde][i];
                ULM = (ULM + ELO_diff)*season_weighting_12_13+ULM_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 19){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/SOL*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/SOL;
                SOL = (SOL + ELO_diff)*season_weighting_12_13+SOL_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*SOL/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*SOL/season12_13[runde][i];
                SOL = (SOL + ELO_diff)*season_weighting_12_13+SOL_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 21){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/GIE*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/GIE;
                GIE = (GIE + ELO_diff)*season_weighting_12_13+GIE_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*GIE/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*GIE/season12_13[runde][i];
                GIE = (GIE + ELO_diff)*season_weighting_12_13+GIE_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 23){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/BRA*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/BRA;
                BRA = (BRA + ELO_diff)*season_weighting_12_13+BRA_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*BRA/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*BRA/season12_13[runde][i];
                BRA = (BRA + ELO_diff)*season_weighting_12_13+BRA_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 25){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/JENA*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/JENA;
                JENA = (JENA + ELO_diff)*season_weighting_12_13+JENA_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*JENA/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*JENA/season12_13[runde][i];
                JENA = (JENA + ELO_diff)*season_weighting_12_13+JENA_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 27){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/MITT*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/MITT;
                MITT = (MITT + ELO_diff)*season_weighting_12_13+MITT_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*MITT/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*MITT/season12_13[runde][i];
                MITT = (MITT + ELO_diff)*season_weighting_12_13+MITT_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 29){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/GOTT*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/GOTT;
                GOTT = (GOTT + ELO_diff)*season_weighting_12_13+GOTT_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*GOTT/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*GOTT/season12_13[runde][i];
                GOTT = (GOTT + ELO_diff)*season_weighting_12_13+GOTT_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 31){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/BRE*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/BRE;
                BRE = (BRE + ELO_diff)*season_weighting_12_13+BRE_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*BRE/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*BRE/season12_13[runde][i];
                BRE = (BRE + ELO_diff)*season_weighting_12_13+BRE_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 33){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/ROCK*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/ROCK;
                ROCK = (ROCK + ELO_diff)*season_weighting_12_13+ROCK_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*ROCK/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*ROCK/season12_13[runde][i];
                ROCK = (ROCK + ELO_diff)*season_weighting_12_13+ROCK_ref*season_weighting_ref_12_13;
              }
            }
          else if(i == 35){
              if(season12_13[runde][i-1]>0){
                float point_diff = point_value*season12_13[runde][i]/TIG*season12_13[runde][i-1];
                float ELO_diff = point_diff + game_value*season12_13[runde][i]/TIG;
                TIG = (TIG + ELO_diff)*season_weighting_12_13+TIG_ref*season_weighting_ref_12_13;
              }
              else if(season12_13[runde][i-1]==SKIP){
                continue;
              }
              else if(season12_13[runde][i-1]<0){
                float point_diff = point_value*TIG/season12_13[runde][i]*season12_13[runde][i-1];
                float ELO_diff = point_diff - game_value*TIG/season12_13[runde][i];
                TIG = (TIG + ELO_diff)*season_weighting_12_13+TIG_ref*season_weighting_ref_12_13;
              }
            }
          else{
            continue;
          }
      }
      runde++;
    }while(runde<34);
  std::cout << "season_12_13 done" << '\n';
}

void gameday_13_14() {
  int runde = 0;
  float AVG = (MUN + ALBA + LUD + BAYR + BONN + EWE + BRO + SKY + ULM + SOL + BRA + MITT + BRE + TIG)/14;
  float season_weighting_13_14 = 0.96;
  float season_weighting_ref_13_14 = 0.04;
      do{

        float season_13_14[34][36] = {
          //MUN      ALBA      LUD         BAYR         BONN      EWE        BRO        SKY         ULM       SOL        GIE        BRA        JENA      MITT       GOTT      BRE       ROCK      TIG
          {5, BONN,  24, EWE,  8, BRE,     7, SKY,      -5, MUN,  -24, ALBA, 16, MITT,  -7, BAYR,   -9, BRA,  -7, AVG,   SKIP, 0,   9, ULM,    SKIP, 0,  -16, BRO,  SKIP, 0,  -8, LUD,  SKIP, 0,  -18, AVG},
          {10, BRO,  -1, AVG,  10, AVG,    -6, AVG,     1, TIG,   9, SKY,    -10, MUN,  -9, EWE,    40, BRE,  -4, MITT,  SKIP, 0,   9, AVG,    SKIP, 0,  4, SOL,    SKIP, 0,  -40, ULM, SKIP, 0,  -1, BONN},
          {24, LUD,  28, AVG,  -24, MUN,   24, BRA,     13, AVG,  22, AVG,   23, TIG,   16, BRE,    1, SOL,   -1, ULM,   SKIP, 0,   -24, BAYR, SKIP, 0,  -6, AVG,   SKIP, 0,  -16, SKY, SKIP, 0,  -23, BRO},
          {33, BAYR, 31, LUD,  -31, ALBA,  -33, MUN,    3, ULM,   6, AVG,    -3, AVG,   11, SOL,    -3, BONN, -11, SKY,  SKIP, 0,   4, BRE,    SKIP, 0,  -8, TIG,   SKIP, 0,  -4, BRA,  SKIP, 0,  8, MITT},
          {32, SKY,  8, SOL,   2, BRA,     -13, EWE,    19, AVG,  13, BAYR,  12, BRE,   -31, MUN,   31, MITT, -8, ALBA,  SKIP, 0,   -2, LUD,   SKIP, 0,  -31, ULM,  SKIP, 0,  -12, BRO, SKIP, 0,  -8, AVG},
          {7, BRE,   13, MITT, 12, SKY,    -18, BRO,    11, EWE,  -11, BONN, 18, BAYR,  -12, LUD,   -5, AVG,  -5, AVG,   SKIP, 0,   5, AVG,    SKIP, 0,  -13, ALBA, SKIP, 0,  -7, MUN,  SKIP, 0,  -9, AVG},
          {18, AVG,  -1, BONN, -4, EWE,    -10, ULM,    1, ALBA,  4, LUD,    17, AVG,   10, AVG,    10, BAYR, 14, BRE,   SKIP, 0,   -5, TIG,   SKIP, 0,  -5, AVG,   SKIP, 0,  -14, SOL, SKIP, 0,  5, MITT},
          {-20,ALBA, 20, MUN,  -5, ULM,    13, SOL,     22, SKY,  36, TIG,   2, BRA,    -22, BONN,  5, LUD,   -13, BAYR, SKIP, 0,   -2, BRO,   SKIP, 0,  3, AVG,    SKIP, 0,  4, AVG,   SKIP, 0,  -36, EWE},
          {37, TIG,  28, ULM,  30, MITT,   -13, BRE,    -14, BRO, 19, SOL,   14, BONN,  15, AVG,    -28,ALBA, -19, EWE,  SKIP, 0,   9, AVG,    SKIP, 0,  -30, LUD,  SKIP, 0,  13, BAYR, SKIP, 0,  -31, MUN},
          {9, SOL,   22, BAYR, -5, AVG,    -22, ALBA,   8, BRE,   13, AVG,   6, AVG,    9, TIG,     13, AVG,  -9, MUN,   SKIP, 0,   -2, MITT,  SKIP, 0,  2, BRA,    SKIP, 0,  -8, BONN, SKIP, 0,  -9, SKY},
          //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {25, MITT, -6, BRE,  -4, AVG,    -5, AVG,     -11, SOL, -14, BRO,  14, EWE,   3, AVG,     37, TIG,  11, BONN,  SKIP, 0,   -15, AVG,  SKIP, 0,  -25, MUN,  SKIP, 0,  6, ALBA,  SKIP, 0,  -37, ULM},
          {13, AVG,  -4, BRO,  15, BAYR,   -15, LUD,    -11, BRA, -20, AVG,  4, ALBA,   -30, MITT,  8, AVG,   -5, AVG,   SKIP, 0,   11, BONN,  SKIP, 0,  30, SKY,   SKIP, 0,  16, TIG,  SKIP, 0,  -16, BRE},
          {19, AVG,  15, AVG,  -11, SOL,   -12, BONN,   12, BAYR, -6, MITT,  -13, ULM,  26, BRA,    13, BRO,  11, LUD,   SKIP, 0,   -26, SKY,  SKIP, 0,  6, EWE,    SKIP, 0,  -2, AVG,  SKIP, 0,  17, AVG},
          {7, AVG,   15, AVG,  -6, BONN,   -1, AVG,     6, LUD,   4, BRA,    11, AVG,   6, ULM,     -6, SKY,  17, TIG,   SKIP, 0,   -4, EWE,   SKIP, 0,  6, BRE,    SKIP, 0,  -6, MITT, SKIP, 0,  -17, SOL},
          {17, ULM,  19, BRA,  10, TIG,    -6, MITT,    -20, AVG, 9, BRE,    12, SOL,   3, AVG,     -17, MUN, -12, BRO,  SKIP, 0,   -19, ALBA, SKIP, 0,  6, BAYR,   SKIP, 0,  -9, EWE,  SKIP, 0,  -10, LUD},
          {-15, EWE, 10, TIG,  6, AVG,     -8, AVG,     3, MITT,  15, MUN,   30, SKY,   -30, BRO,   15, AVG,  -7, BRA,   SKIP, 0,   7, SOL,    SKIP, 0,  -3, BONN,  SKIP, 0,  -19, AVG, SKIP, 0,  -10, ALBA},
          {4, BRA,   14, SKY,  -11, BRO,   15, TIG,     -7, AVG,  11, ULM,   11, LUD,   -14, ALBA,  -11, EWE, -9, AVG,   SKIP, 0,   -4, MUN,   SKIP, 0,  7, AVG,    SKIP, 0,  5, AVG,   SKIP, 0,  -15, BAYR},
          {7, MITT,  19, TIG,  14, AVG,    -1, BRO,     9, SOL,   14, ULM,   1, BAYR,   -6, AVG,    -14, EWE, -9, BONN,  SKIP, 0,   -4, AVG,   SKIP, 0,  -7, MUN,   SKIP, 0,  12, AVG,  SKIP, 0,  -19, ALBA},
          {33, EWE,  10, BAYR, 35, TIG,    -10, ALBA,   -2, ULM,  -33, MUN,  10, SKY,   -10, BRO,   2, BONN,  7, AVG,    SKIP, 0,   1, AVG,    SKIP, 0,  -15, BRE,  SKIP, 0,  15, MITT, SKIP, 0,  -35, LUD},
          {24, BAYR, 5, ULM,   11, BONN,   -24, MUN,    -11, LUD, 2, SKY,    4, BRE,    -2, EWE,    -5, ALBA, -19, TIG,  SKIP, 0,   19, AVG,   SKIP, 0,  6, AVG,    SKIP, 0,  -4, BRO,  SKIP, 0,  19, SOL},
          //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {12, BONN, -6, AVG,  8, BAYR,    -8, LUD,     -12, MUN, 25, BRA,   2, TIG,    -2, MITT,   17, BRE,  8, AVG,    SKIP, 0,   -25, EWE,  SKIP, 0,  2, SKY,    SKIP, 0,  -17, ULM, SKIP, 0,  -2, BRO},
          {8, TIG,   24, MITT, -6, BRA,    -10, BRE,    20, SKY,  2, AVG,    24, ULM,   -20, BONN,  -24, BRO, -2, AVG,   SKIP, 0,   6, LUD,    SKIP, 0,  -24, ALBA, SKIP, 0,  10, BAYR, SKIP, 0,  -8, MUN},
          {-5, AVG,  -12, LUD, 12, ALBA,   -33, EWE,    2, AVG,   33, BAYR,  4, BRA,    -1, TIG,    4, MITT,  6, AVG,    SKIP, 0,   -4, BRO,   SKIP, 0,  -4, ULM,   SKIP, 0,  22, AVG,  SKIP, 0,  1, TIG},
          {6, AVG,   8, SKY,   -3, MITT,   12, AVG,     1, BRE,   -26, AVG,  38, SOL,   -8, ALBA,   4, TIG,   -38, BRO,  SKIP, 0,   -2, AVG,   SKIP, 0,  3, LUD,    SKIP, 0,  -1, BONN, SKIP, 0,  -4, ULM},
          {12, AVG,  -9, EWE,  1, SKY,     19, AVG,     17, TIG,  9, ALBA,   6, AVG,    -1, LUD,    13, SOL,  -13, ULM,  SKIP, 0,   -11, BRE,  SKIP, 0,  2, AVG,    SKIP, 0,  11, BRA,  SKIP, 0,  -17, BONN},
          {-5, SKY,  12, BRO, -1, AVG,     5, TIG,      -5, AVG,  -12, MITT, -12, ALBA, 5, MUN,     19, AVG,  20, BRA,   SKIP, 0,   -20, SOL,  SKIP, 0,  12, EWE,   SKIP, 0,  4, AVG,   SKIP, 0,  -5, BAYR},
          {14, SOL,  3, BRE,  -29, BRO,    -8, BONN,    8, BAYR,  6, AVG,    29, LUD,   4, ULM,     -4, SKY,  -14, MUN,  SKIP, 0,   -4, MITT,  SKIP, 0,  4, BRA,    SKIP, 0,  -3, ALBA, SKIP, 0,  7, AVG},
          {11, ULM,  25, AVG, -3, AVG,     5, BRA,      -4, AVG,  16, BRE,   9, AVG,    -9, SOL,    -11, MUN, 9, SKY,    SKIP, 0,   -5, BAYR,  SKIP, 0,  31, TIG,   SKIP, 0,  -16, EWE, SKIP, 0,  -31, MITT},
          {1, BRO,   26,BONN, 6, BRE,      8, SKY,      -26,ALBA, 8, SOL,    -1, MUN,   -8, BAYR,   2, BRA,   -8, EWE,   SKIP, 0,   -2, ULM,   SKIP, 0,  -4, AVG,   SKIP, 0,  -6, LUD,  SKIP, 0,  40, AVG},
          {37, BRE,  15, BRA, 4, ULM,      -3, AVG,     5, EWE,   -5, BONN,  6, AVG,    -3, AVG,    -4, LUD,  -16, MITT, SKIP, 0,   -15, ALBA, SKIP, 0,  16, SOL,   SKIP, 0,  -37, MUN, SKIP, 0,  -7, AVG},
          //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {7, BRA,   14, AVG, 15, SOL,     -18, ULM,    11, MITT, 21, AVG,   10, AVG,   11, AVG,    18, BAYR, -15, LUD,  SKIP, 0,   -7, MUN,   SKIP, 0,  -11, BONN, SKIP, 0,  -7, TIG,  SKIP, 0,  7, BRE},
          {25, LUD,  20, AVG, -25, MUN,    24, MITT,    17, AVG,  7, BRO,    -7, EWE,   1, AVG,     -13, AVG, 3, BRE,    SKIP, 0,   -7, TIG,   SKIP, 0,  -24, BAYR, SKIP, 0,  -3, SOL,  SKIP, 0,  7, BRA},
          {24, AVG,  11, SOL, 19, AVG,     19, AVG,     4, BRA,   8, TIG,    11, MITT,  7, BRE,     2, AVG,   -11, ALBA, SKIP, 0,   -4, BONN,  SKIP, 0,  -11, BRO,  SKIP, 0,  -7, SKY,  SKIP, 0,  -8, EWE},
          {-8, ALBA, 8, MUN,  -12, EWE,    -9, SOL,     -20, BRO, 12, LUD,   20, BONN,  -1, BRA,    12, AVG,  9, BAYR,   SKIP, 0,   1, SKY,    SKIP, 0,  -20, AVG,  SKIP, 0,  10, AVG,  SKIP, 0,  19, AVG},
        };


        for(int i = 0;i<=35;i++){
          if(i == 1){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/MUN*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/MUN;
                MUN = (MUN + ELO_diff)*season_weighting_13_14+MUN_ref*season_weighting_ref_13_14;

              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*MUN/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*MUN/season_13_14[runde][i];
                MUN = (MUN + ELO_diff)*season_weighting_13_14+MUN_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 3){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/ALBA*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/ALBA;
                ALBA = (ALBA + ELO_diff)*season_weighting_13_14+ALBA_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*ALBA/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*ALBA/season_13_14[runde][i];
                ALBA = (ALBA + ELO_diff)*season_weighting_13_14+ALBA_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 5){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/LUD*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/LUD;
                LUD = (LUD + ELO_diff)*season_weighting_13_14+LUD_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*LUD/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*LUD/season_13_14[runde][i];
                LUD = (LUD + ELO_diff)*season_weighting_13_14+LUD_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 7){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/BAYR*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/BAYR;
                BAYR = (BAYR + ELO_diff)*season_weighting_13_14+BAYR_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*BAYR/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*BAYR/season_13_14[runde][i];
                BAYR = (BAYR + ELO_diff)*season_weighting_13_14+BAYR_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 9){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/BONN*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/BONN;
                BONN = (BONN + ELO_diff)*season_weighting_13_14+BONN_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*BONN/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*BONN/season_13_14[runde][i];
                BONN = (BONN + ELO_diff)*season_weighting_13_14+BONN_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 11){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/EWE*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/EWE;
                EWE = (EWE + ELO_diff)*season_weighting_13_14+EWE_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*EWE/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*EWE/season_13_14[runde][i];
                EWE = (EWE + ELO_diff)*season_weighting_13_14+EWE_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 13){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/BRO*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/BRO;
                BRO = (BRO + ELO_diff)*season_weighting_13_14+BRO_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*BRO/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*BRO/season_13_14[runde][i];
                BRO = (BRO + ELO_diff)*season_weighting_13_14+BRO_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 15){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/SKY*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/SKY;
                SKY = (SKY + ELO_diff)*season_weighting_13_14+SKY_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*SKY/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*SKY/season_13_14[runde][i];
                SKY = (SKY + ELO_diff)*season_weighting_13_14+SKY_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 17){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/ULM*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/ULM;
                ULM = (ULM + ELO_diff)*season_weighting_13_14+ULM_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*ULM/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*ULM/season_13_14[runde][i];
                ULM = (ULM + ELO_diff)*season_weighting_13_14+ULM_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 19){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/SOL*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/SOL;
                SOL = (SOL + ELO_diff)*season_weighting_13_14+SOL_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*SOL/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*SOL/season_13_14[runde][i];
                SOL = (SOL + ELO_diff)*season_weighting_13_14+SOL_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 21){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/GIE*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/GIE;
                GIE = (GIE + ELO_diff)*season_weighting_13_14+GIE_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*GIE/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*GIE/season_13_14[runde][i];
                GIE = (GIE + ELO_diff)*season_weighting_13_14+GIE_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 23){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/BRA*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/BRA;
                BRA = (BRA + ELO_diff)*season_weighting_13_14+BRA_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*BRA/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*BRA/season_13_14[runde][i];
                BRA = (BRA + ELO_diff)*season_weighting_13_14+BRA_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 25){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/JENA*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/JENA;
                JENA = (JENA + ELO_diff)*season_weighting_13_14+JENA_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*JENA/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*JENA/season_13_14[runde][i];
                JENA = (JENA + ELO_diff)*season_weighting_13_14+JENA_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 27){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/MITT*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/MITT;
                MITT = (MITT + ELO_diff)*season_weighting_13_14+MITT_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*MITT/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*MITT/season_13_14[runde][i];
                MITT = (MITT + ELO_diff)*season_weighting_13_14+MITT_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 29){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/GOTT*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/GOTT;
                GOTT = (GOTT + ELO_diff)*season_weighting_13_14+GOTT_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*GOTT/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*GOTT/season_13_14[runde][i];
                GOTT = (GOTT + ELO_diff)*season_weighting_13_14+GOTT_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 31){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/BRE*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/BRE;
                BRE = (BRE + ELO_diff)*season_weighting_13_14+BRE_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*BRE/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*BRE/season_13_14[runde][i];
                BRE = (BRE + ELO_diff)*season_weighting_13_14+BRE_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 33){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/ROCK*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/ROCK;
                ROCK = (ROCK + ELO_diff)*season_weighting_13_14+ROCK_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*ROCK/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*ROCK/season_13_14[runde][i];
                ROCK = (ROCK + ELO_diff)*season_weighting_13_14+ROCK_ref*season_weighting_ref_13_14;
              }
            }
          else if(i == 35){
              if(season_13_14[runde][i-1]>0){
                float point_diff = point_value*season_13_14[runde][i]/TIG*season_13_14[runde][i-1];
                float ELO_diff = point_diff + game_value*season_13_14[runde][i]/TIG;
                TIG = (TIG + ELO_diff)*season_weighting_13_14+TIG_ref*season_weighting_ref_13_14;
              }
              else if(season_13_14[runde][i-1]==SKIP){
                continue;
              }
              else if(season_13_14[runde][i-1]<0){
                float point_diff = point_value*TIG/season_13_14[runde][i]*season_13_14[runde][i-1];
                float ELO_diff = point_diff - game_value*TIG/season_13_14[runde][i];
                TIG = (TIG + ELO_diff)*season_weighting_13_14+TIG_ref*season_weighting_ref_13_14;
              }
            }
          else{
            continue;
          }
      }
      runde++;
    }while(runde<34);
      std::cout << "season_13_14 done" << '\n';
}

void gameday_14_15() {
  int runde = 0;
  float AVG = (MUN + ALBA + LUD + BAYR + BONN + EWE + BRO + SKY + ULM + BRA + MITT + GOTT + BRE + TIG)/14;
  float season_weighting_14_15 = 0.97;
  float season_weighting_ref_14_15 = 0.03;
      do{

        float season_14_15[34][36] = {
          //MUN      ALBA      LUD         BAYR         BONN      EWE        BRO        SKY         ULM       SOL        GIE        BRA        JENA      MITT       GOTT       BRE       ROCK      TIG
          {23, MITT, 36, GOTT, 7, BONN,    9, AVG,      -7, LUD,  7, ULM,    1, BRE,    -1, AVG,    -7, EWE,  SKIP, 0,   SKIP, 0,   -14, AVG,  SKIP, 0,  -23, MUN,  -36, ALBA, -1, BRO,  SKIP, 0,  -33, AVG},
          {15, LUD,  10, BAYR, -15, MUN,   -10, ALBA,   6, TIG,   23, AVG,   -11, BRA,  -7, ULM,    7, SKY,   SKIP, 0,   SKIP, 0,   11, BRO,   SKIP, 0,  3, AVG,    -13, AVG,  1, AVG,   SKIP, 0,  -6, BONN},
          {7, SKY,   9, BONN,  -6, BRE,    -6, EWE,     -9, ALBA, 6, BAYR,   22, AVG,   -7, MUN,    11, BRA,  SKIP, 0,   SKIP, 0,   -11, ULM,  SKIP, 0,  11, TIG,   4, AVG,    6, LUD,   SKIP, 0,  -11, MITT},
          {23, AVG,  20, ULM,  11, AVG,    8, BRE,      -13, SKY, -7, AVG,   11, TIG,   13, BONN,   -20,ALBA, SKIP, 0,   SKIP, 0,   -6, MITT,  SKIP, 0,  6, BRA,    -14, AVG,  -8, BAYR, SKIP, 0,  -11, BRO},
          {-14,GOTT, 28, AVG,  -14, ULM,   -8, BRA,     22, AVG,  9, TIG,    13, AVG,   -9, BRE,    14, LUD,  SKIP, 0,   SKIP, 0,   8, BAYR,   SKIP, 0,  1, AVG,    14, MUN,   9, SKY,   SKIP, 0,  -9, EWE},
          {33, BRE,  17, LUD,  -17, ALBA,  9, SKY,      16, GOTT, 39, AVG,   27, ULM,   -9, BAYR,   -27, BRO, SKIP, 0,   SKIP, 0,   -17, TIG,  SKIP, 0,  15, AVG,   -16, BONN, -33, MUN, SKIP, 0,  17, BRA},
          {26, TIG,  37, AVG,  26, GOTT,   -18, BONN,   18, BAYR, 14, BRA,   13, MITT,  -9, AVG,    -16, AVG, SKIP, 0,   SKIP, 0,   -14, EWE,  SKIP, 0,  -13, BRO,  -26, LUD,  8, AVG,   SKIP, 0,  -26, MUN},
          {-3, ALBA, 3, MUN,   -20, BAYR,  20, LUD,     5, BRO,   7, MITT,   -5, BONN,  8, AVG,     9, TIG,   SKIP, 0,   SKIP, 0,   9, AVG,    SKIP, 0,  -7, EWE,   9, BRE,    -9, GOTT, SKIP, 0,  -9, ULM},
          {15, EWE,  8, AVG,   1, AVG,     -3, AVG,     -5, ULM,  -15, MUN,  19, SKY,   -19, BRO,   5, BONN,  SKIP, 0,   SKIP, 0,   -2, GOTT,  SKIP, 0,  23, BRE,   2, BRA,    -23,MITT, SKIP, 0,  13, AVG},
          {37, AVG,  17, BRA,  -2, AVG,    -6, AVG,     17, AVG,  5, BRO,    -5, EWE,   16, TIG,    2, BRE,   SKIP, 0,   SKIP, 0,   -17, ALBA, SKIP, 0,  23, GOTT,  -23, MITT, -2, ULM,  SKIP, 0,  -16, SKY},
          //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {5, BONN,  7, EWE,   -6, BRO,    1, AVG,      -5, MUN,  -7, ALBA,  6, LUD,    11, MITT,   16, AVG,  SKIP, 0,   SKIP, 0,   16, AVG,   SKIP, 0,  -11, SKY,  11, TIG,   -9, AVG,  SKIP, 0,  -11, GOTT},
          {-5, AVG,  39, AVG,  -2, TIG,    3, MITT,     -12, AVG, 14, BRE,   7, GOTT,   12, BRA,    8, AVG,   SKIP, 0,   SKIP, 0,   -12, SKY,  SKIP, 0,  -3, BAYR,  -7, BRO,   -14, EWE, SKIP, 0,  2, LUD},
          {27, BAYR, 22, TIG,  -4, BRA,    -27, MUN,    3, MITT,  -19, SKY,  29, AVG,   19, EWE,    2, AVG,   SKIP, 0,   SKIP, 0,   4, LUD,    SKIP, 0,  -3, BONN,  5, AVG,    20, AVG,  SKIP, 0,  -22, ALBA},
          {18, BRA,  6, SKY,   -6, EWE,    15, TIG,     16, BRE,  6, LUD,    20, AVG,   -6, ALBA,   -12,GOTT, SKIP, 0,   SKIP, 0,   -18, MUN,  SKIP, 0,  -2, AVG,   12, ULM,   -16,BONN, SKIP, 0,  -15, BAYR},
          {16, AVG,  -29, BRO, 12, MITT,   -4, ULM,     21, BRA,  -6, AVG,   29, ALBA,  4, GOTT,    4, BAYR,  SKIP, 0,   SKIP, 0,   -21, BONN, SKIP, 0,  -12, LUD,  -4, SKY,   -4, TIG,  SKIP, 0,  4, BRE},
          {7, ULM,   26, MITT, 13, SKY,    -19, BRO,    3, AVG,   12, GOTT,  19, BAYR,  -13, LUD,   -7, MUN,  SKIP, 0,   SKIP, 0,   2, BRE,    SKIP, 0,  -26, ALBA, -12, EWE,  -2, BRA,  SKIP, 0,  9, AVG},
          {-17, BRO, 20, BRE,  15, AVG,    -3, GOTT,    -11, EWE, 11, BONN,  17, MUN,   17, AVG,    4, MITT,  SKIP, 0,   SKIP, 0,   10, AVG,   SKIP, 0,  -4, ULM,   3, BAYR,   -20,ALBA, SKIP, 0,  -9, AVG},
          {6, BRE,   6, TIG,   17, MITT,   -3, AVG,     3, AVG,   -9, BRA,   19, GOTT,  9, ULM,     -9, SKY,  SKIP, 0,   SKIP, 0,   9, EWE,    SKIP, 0,  -17, LUD,  -19, BRO,  -6, MUN,  SKIP, 0,  -6, ALBA},
          {14, AVG,  15, MITT, -7, TIG,    5, BONN,     -5, BAYR, -19, GOTT, 16, SKY,   -16, BRO,   2, AVG,   SKIP, 0,   SKIP, 0,   2, AVG,    SKIP, 0,  -15, ALBA, 19, EWE,   -1, AVG,  SKIP, 0,  7, LUD},
          {45, AVG,  31, BAYR, 5, AVG,     -31, ALBA,   30, MITT, -7, BRO,   7, EWE,    -12, GOTT,  15, AVG,  SKIP, 0,   SKIP, 0,   14, TIG,   SKIP, 0,  -30, BONN, 12, SKY,   -19, AVG, SKIP, 0,  -14, BRA},
          //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {37, TIG,  -7, SKY,  22, EWE,    12, ULM,     8, AVG,   -22, LUD,  12, BRE,   7, ALBA,    -12,BAYR, SKIP, 0,   SKIP, 0,   -5, MITT,  SKIP, 0,  5, BRA,    -10, AVG,  -12, BRO, SKIP, 0,  -37, MUN},
          {26, LUD,  -6, EWE,  -26, MUN,   -1, SKY,     1, GOTT,  6, ALBA,   40, AVG,   1, BAYR,    -21,MITT, SKIP, 0,   SKIP, 0,   31, BRE,   SKIP, 0,  21, ULM,   -1, BONN,  -31, BRA, SKIP, 0,  13, AVG},
          {19, BAYR, -12, LUD, 12, ALBA,   -19, MUN,    6, AVG,   -2, SKY,   20, BRA,   2, EWE,     5, AVG,   SKIP, 0,   SKIP, 0,   -20, BRO,  SKIP, 0,  -3, AVG,   3, TIG,    7, AVG,   SKIP, 0,  -3, GOTT},
          {41, AVG,  -6, BRO,  16, AVG,    -4, AVG,     3, BRA,   6, BRE,    6, ALBA,   17, MITT,   16, GOTT, SKIP, 0,   SKIP, 0,   -3, BONN,  SKIP, 0,  -17, SKY,  -16, ULM,  -6, EWE,  SKIP, 0,  -4, AVG},
          {36, MITT, 5, GOTT,  26, BAYR,   -26, LUD,    6, SKY,   31, AVG,   13, AVG,   -6, BONN,   10, BRE,  SKIP, 0,   SKIP, 0,   3, AVG,    SKIP, 0,  -36, MUN,  -5, ALBA,  -10, ULM, SKIP, 0,  -3, AVG},
          {-4, BRA,  3, AVG,   -8, ULM,    -2, GOTT,    -21, BRO, -12, TIG,  21, BONN,  -3, AVG,    8, LUD,   SKIP, 0,   SKIP, 0,   4, MUN,    SKIP, 0,  -2, BRE,   2, BAYR,   2, MITT,  SKIP, 0,  12, EWE},
          {-4, GOTT, 7, BRA,   -7, BONN,   -13, AVG,    7, LUD,   -20, AVG,  18, MITT,  9, AVG,     7, TIG,   SKIP, 0,   SKIP, 0,   -7, ALBA,  SKIP, 0,  -18, BRO,  4, MUN,    15, AVG,  SKIP, 0,  -7, ULM},
          {34, AVG,  12, BONN, 10, BRO,    -8, MITT,    -12,ALBA, 3, AVG,    -10, LUD,  9, BRE,     8, BRA,   SKIP, 0,   SKIP, 0,   -8, ULM,   SKIP, 0,  8, BAYR,   28, AVG,   -9, SKY,  SKIP, 0,  -23, AVG},
          {11, ULM,  5, AVG,   -8, AVG,    14, AVG,     21, EWE,  -21, BONN, 41, TIG,   -10, BRA,   -11, MUN, SKIP, 0,   SKIP, 0,   10, SKY,   SKIP, 0,  5, AVG,    -19, BRE,  19, MITT, SKIP, 0,  -41, BRO},
          {6, BRO,   4, AVG,   11, BRA,    -4, TIG,     7, BRE,   8, ULM,    -6, MUN,   17, AVG,    -8, EWE,  SKIP, 0,   SKIP, 0,   -11, LUD,  SKIP, 0,  7, AVG,    -4, AVG,   -7, BONN, SKIP, 0,  4, BAYR},
          //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {-3, SKY,  14, ULM,  15, BRE,    -10, BRA,    9, TIG,   -2, MITT,  20, AVG,   3, MUN,     -14,ALBA, SKIP, 0,   SKIP, 0,   10, BAYR,  SKIP, 0,   2, EWE,    11, AVG,   -15, LUD, SKIP, 0,  -9, BONN},
          {-4, BONN, 21, AVG,  -11, SKY,   -25, BRE,    4, MUN,   18, AVG,   12, AVG,   11, LUD,    5, AVG,   SKIP, 0,   SKIP, 0,   -10, GOTT, SKIP, 0,   -21, TIG,  10, BRA,   25, BAYR, SKIP, 0,  21, MITT},
          {2, ALBA,  -2, MUN,  -13, AVG,   -13, EWE,    2, AVG,   13, BAYR,  7, ULM,    7, AVG,     -7, BRO,  SKIP, 0,   SKIP, 0,   6, AVG,    SKIP, 0,   5, GOTT,   -5, MITT,  -30, TIG, SKIP, 0,  30, BRE},
          {13, EWE,  13, BRE,  4, GOTT,    -35, BRO,    -6, ULM,  -13, MUN,  35, BAYR,  5, TIG,     6, BONN,  SKIP, 0,   SKIP, 0,   21, AVG,   SKIP, 0,   -8, AVG,   -4, LUD,   -13,ALBA, SKIP, 0,  -5, SKY},
        };


        for(int i = 0;i<=35;i++){
          if(i == 1){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/MUN*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/MUN;
                MUN = (MUN + ELO_diff)*season_weighting_14_15+MUN_ref*season_weighting_ref_14_15;

              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*MUN/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*MUN/season_14_15[runde][i];
                MUN = (MUN + ELO_diff)*season_weighting_14_15+MUN_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 3){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/ALBA*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/ALBA;
                ALBA = (ALBA + ELO_diff)*season_weighting_14_15+ALBA_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*ALBA/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*ALBA/season_14_15[runde][i];
                ALBA = (ALBA + ELO_diff)*season_weighting_14_15+ALBA_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 5){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/LUD*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/LUD;
                LUD = (LUD + ELO_diff)*season_weighting_14_15+LUD_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*LUD/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*LUD/season_14_15[runde][i];
                LUD = (LUD + ELO_diff)*season_weighting_14_15+LUD_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 7){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/BAYR*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/BAYR;
                BAYR = (BAYR + ELO_diff)*season_weighting_14_15+BAYR_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*BAYR/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*BAYR/season_14_15[runde][i];
                BAYR = (BAYR + ELO_diff)*season_weighting_14_15+BAYR_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 9){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/BONN*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/BONN;
                BONN = (BONN + ELO_diff)*season_weighting_14_15+BONN_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*BONN/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*BONN/season_14_15[runde][i];
                BONN = (BONN + ELO_diff)*season_weighting_14_15+BONN_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 11){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/EWE*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/EWE;
                EWE = (EWE + ELO_diff)*season_weighting_14_15+EWE_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*EWE/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*EWE/season_14_15[runde][i];
                EWE = (EWE + ELO_diff)*season_weighting_14_15+EWE_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 13){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/BRO*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/BRO;
                BRO = (BRO + ELO_diff)*season_weighting_14_15+BRO_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*BRO/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*BRO/season_14_15[runde][i];
                BRO = (BRO + ELO_diff)*season_weighting_14_15+BRO_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 15){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/SKY*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/SKY;
                SKY = (SKY + ELO_diff)*season_weighting_14_15+SKY_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*SKY/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*SKY/season_14_15[runde][i];
                SKY = (SKY + ELO_diff)*season_weighting_14_15+SKY_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 17){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/ULM*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/ULM;
                ULM = (ULM + ELO_diff)*season_weighting_14_15+ULM_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*ULM/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*ULM/season_14_15[runde][i];
                ULM = (ULM + ELO_diff)*season_weighting_14_15+ULM_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 19){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/SOL*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/SOL;
                SOL = (SOL + ELO_diff)*season_weighting_14_15+SOL_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*SOL/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*SOL/season_14_15[runde][i];
                SOL = (SOL + ELO_diff)*season_weighting_14_15+SOL_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 21){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/GIE*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/GIE;
                GIE = (GIE + ELO_diff)*season_weighting_14_15+GIE_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*GIE/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*GIE/season_14_15[runde][i];
                GIE = (GIE + ELO_diff)*season_weighting_14_15+GIE_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 23){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/BRA*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/BRA;
                BRA = (BRA + ELO_diff)*season_weighting_14_15+BRA_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*BRA/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*BRA/season_14_15[runde][i];
                BRA = (BRA + ELO_diff)*season_weighting_14_15+BRA_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 25){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/JENA*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/JENA;
                JENA = (JENA + ELO_diff)*season_weighting_14_15+JENA_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*JENA/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*JENA/season_14_15[runde][i];
                JENA = (JENA + ELO_diff)*season_weighting_14_15+JENA_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 27){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/MITT*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/MITT;
                MITT = (MITT + ELO_diff)*season_weighting_14_15+MITT_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*MITT/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*MITT/season_14_15[runde][i];
                MITT = (MITT + ELO_diff)*season_weighting_14_15+MITT_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 29){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/GOTT*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/GOTT;
                GOTT = (GOTT + ELO_diff)*season_weighting_14_15+GOTT_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*GOTT/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*GOTT/season_14_15[runde][i];
                GOTT = (GOTT + ELO_diff)*season_weighting_14_15+GOTT_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 31){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/BRE*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/BRE;
                BRE = (BRE + ELO_diff)*season_weighting_14_15+BRE_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*BRE/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*BRE/season_14_15[runde][i];
                BRE = (BRE + ELO_diff)*season_weighting_14_15+BRE_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 33){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/ROCK*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/ROCK;
                ROCK = (ROCK + ELO_diff)*season_weighting_14_15+ROCK_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*ROCK/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*ROCK/season_14_15[runde][i];
                ROCK = (ROCK + ELO_diff)*season_weighting_14_15+ROCK_ref*season_weighting_ref_14_15;
              }
            }
          else if(i == 35){
              if(season_14_15[runde][i-1]>0){
                float point_diff = point_value*season_14_15[runde][i]/TIG*season_14_15[runde][i-1];
                float ELO_diff = point_diff + game_value*season_14_15[runde][i]/TIG;
                TIG = (TIG + ELO_diff)*season_weighting_14_15+TIG_ref*season_weighting_ref_14_15;
              }
              else if(season_14_15[runde][i-1]==SKIP){
                continue;
              }
              else if(season_14_15[runde][i-1]<0){
                float point_diff = point_value*TIG/season_14_15[runde][i]*season_14_15[runde][i-1];
                float ELO_diff = point_diff - game_value*TIG/season_14_15[runde][i];
                TIG = (TIG + ELO_diff)*season_weighting_14_15+TIG_ref*season_weighting_ref_14_15;
              }
            }
          else{
            continue;
          }
      }
      runde++;
    }while(runde<34);
    std::cout << "Season_14_15 done" << '\n';
}

void gameday_15_16() {
  int runde = 0;
  float AVG = (MUN + ALBA + LUD + BAYR + BONN + EWE + BRO + SKY + ULM + SOL + GIE + BRA + MITT + GOTT + BRE + TIG)/16;
  float season_weighting_15_16 = 0.98;
  float season_weighting_ref_15_16 = 0.02;
      do{

        float season_15_16[34][36] = {
          //MUN      ALBA      LUD         BAYR         BONN      EWE        BRO        SKY         ULM       SOL        GIE        BRA        JENA      MITT       GOTT       BRE       ROCK      TIG
          {26, EWE,  20, BAYR, 13, GIE,    -20, ALBA,   -2, AVG,  -26, MUN,  16, BRA,   8, BRE,     -8, SOL,  8, ULM,    -13, LUD,  -16, BRO,  SKIP, 0,  -7, AVG,   -42, TIG,  -8, SKY,  SKIP, 0,  42, GOTT},
          {15, AVG,  25, GOTT, 11, TIG,    -40, BRA,    14, MITT, 2, SKY,    44, AVG,   -2, EWE,    7, BRE,   3, GIE,    -3, SOL,   40, BAYR,  SKIP, 0,  -14, BONN, -25, ALBA, -7, ULM,  SKIP, 0,  -11, LUD},
          {-7, BONN, 5, AVG,   7, BRA,     -5, EWE,     7, MUN,   5, BAYR,   -1, GIE,   -2, SOL,    22, AVG,  2, SKY,    1, BRO,    -7, LUD,   SKIP, 0,  -14, GOTT, 14, MITT,  17, TIG,  SKIP, 0,  -17, BRE},
          {-16,ALBA, 16, MUN,  -6, EWE,    5, MITT,     5, BRE,   6, LUD,    24, GOTT,  28, TIG,    -9, AVG,  21, BRA,   -3, AVG,   -21, SOL,  SKIP, 0,  -5, BAYR,  -24, BRO,  -5, BONN, SKIP, 0,  -28, SKY},
          {29, BAYR, 33, GIE,  8, MITT,    -29, MUN,    15, ULM,  -13, BRO,  13, EWE,   13, GOTT,   -15,BONN, 15, AVG,   -33, ALBA, 15, BRE,   SKIP, 0,  -8, LUD,   -13, SKY,  -15, BRA, SKIP, 0,  22, AVG},
          {41, GOTT, 20, ULM,  7, BRE,     7, TIG,      24, SOL,  7, BRA,    30, MITT,  3, AVG,     -20,ALBA, -24, BONN, 44, AVG,   -7, EWE,   SKIP, 0,  -30, BRO,  -41, MUN,  -7, LUD,  SKIP, 0,  -7, BAYR},
          {-5, SKY,  20, BONN, 2, ULM,     -19, SOL,    -20,ALBA, 6, MITT,   10, TIG,   5, MUN,     -2, LUD,  19, BAYR,  15, BRE,   11, AVG,   SKIP, 0,  -6, EWE,   -10, AVG,  -15, GIE, SKIP, 0,  -10, BRO},
          {8, MITT,  11, BRA,  14, GOTT,   13, BONN,    -13,BAYR, 24, AVG,   -2, SKY,   2, BRO,     -22, GIE, 2, BRE,    22, ULM,   -11, ALBA, SKIP, 0,  -8, MUN,   -14, LUD,  -2, SOL,  SKIP, 0,  9, AVG},
          {6, BRE,   -3, EWE,  2, BAYR,    -2, LUD,     -23, SKY, 3, ALBA,   30, AVG,   23, BONN,   28, GOTT, 2, TIG,    -4, BRA,   4, GIE,    SKIP, 0,  21, AVG,   -28, ULM,  -6, MUN,  SKIP, 0,  -2, SOL},
          {47, AVG,  -11, BRE, 5, SOL,     1, GIE,      -7, GOTT, -2, AVG,   10, ULM,   11, BRA,    -10, BRO, -5, LUD,   -1, BAYR,  -11, SKY,  SKIP, 0,  -7, TIG,   7, BONN,   11, ALBA, SKIP, 0,  7, MITT},
          //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {-13, BRO, 13, SKY,  -17, AVG,   -14, ULM,    -8, EWE,  8, BONN,   13, MUN,   -13, ALBA,  14, BAYR, 14, GOTT,  9, TIG,    7, MITT,   SKIP, 0,  -7, BRA,   -14, SOL,  -15, AVG, SKIP, 0,  -9, GIE},
          {26, GIE,  -13, BRO, 8, BONN,    -40, AVG,    -8, LUD,  -7, SOL,   13, ALBA,  -7, ULM,    7, SKY,   7, EWE,    -26, MUN,  4, TIG,    SKIP, 0,  4, BRE,    9, AVG,    -4, MITT, SKIP, 0,  -4, BRA},
          {3, LUD,   18, TIG,  -3, MUN,    -3, AVG,     -6, BRA,  13, GOTT,  19, SOL,   11, GIE,    10, MITT, -19, BRO,  -11, SKY,  6, BONN,   SKIP, 0,  -10, ULM,  -13, EWE,  -7, AVG,  SKIP, 0,  -18, ALBA},
          {19, BRA,  3, AVG,   -15, BRO,   13, SKY,     13, TIG,  -17, ULM,  15, LUD,   -13, BAYR,  17, EWE,  20, AVG,   5, MITT,   -19, MUN,  SKIP, 0,  -5, GIE,   -22, BRE,  22, GOTT, SKIP, 0,  -13, BONN},
          {24, SOL,  31, MITT, -5, SKY,    -9, BRO,     -11, GIE, 11, BRE,   9, BAYR,   5, LUD,     16, TIG,  -24, MUN,  11, BONN,  4, GOTT,   SKIP, 0,  -31, ALBA, -4, BRA,   -11, EWE, SKIP, 0,  -16, ULM},
          {14, TIG,  21, SOL,  35, AVG,    15, GOTT,    -24, AVG, 9, GIE,    19, BRE,   15, MITT,   7, BRA,   -21, ALBA, -9, EWE,   -7, ULM,   SKIP, 0,  -15, SKY,  -15, BAYR, -19, BRO, SKIP, 0,  -14, MUN},
          {16, ULM,  -10, LUD, 10, ALBA,   -2, BRE,     -37, BRO, 31, TIG,   37, BONN,  16, AVG,    -16, MUN, 11, MITT,  -5, GOTT,  -13, AVG,  SKIP, 0,  -11, SOL,  5, GIE,    2, BAYR,  SKIP, 0,  -31, EWE},
          {10, BRE,  -3, BRA,  -10, TIG,   12, EWE,     -16, ULM, -12, BAYR, 21, GOTT,  15, AVG,    16, BONN, 2, MITT,   7, AVG,    3, ALBA,   SKIP, 0,  -2, SOL,   -21, BRO,  -10, MUN, SKIP, 0,  10, LUD},
          {29, GOTT, -7, SOL,  -5, EWE,    -5, AVG,     8, AVG,   5, LUD,    30, MITT,  25, GIE,    9, BRA,   7, ALBA,   -25, SKY,  -9, ULM,   SKIP, 0,  -30, BRO,  -29, MUN,  -2, TIG,  SKIP, 0,  2, BRE},
          {20, GIE,  9, MITT,  22, BRA,    -4, SKY,     -15, BRE, 6, TIG,    13, SOL,   4, BAYR,    26, AVG,  -13, BRO,  -20, MUN,  -22, LUD,  SKIP, 0,  -9, ALBA,  33, AVG,   15, BONN, SKIP, 0,  -6, EWE},
          //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {-19, ULM, -4, LUD, 4, ALBA,     8, AVG,      8, GOTT,  22, MITT,  37, TIG,   31, BRE,    19, MUN,  -2, GIE,   2, SOL,    14, AVG,   SKIP, 0,  -22, EWE,  -8, BONN,  -31, SKY, SKIP, 0,  -37, BRO},
          {21, BRA,  43, BRE, 4, SKY,      29, GOTT,    -12, EWE, 12, BONN,  40, AVG,   -4, LUD,    18, TIG,  -20, AVG,  2, MITT,   -21, MUN,  SKIP, 0,  -2, GIE,   -29, BAYR, -43,ALBA, SKIP, 0,  -18, ULM},
          {14, BONN, 36, AVG, 24, MITT,    32, BRO,     -14, MUN, 18, BRA,   32, BAYR,  45, GOTT,   4, AVG,   -15, TIG,  8, BRE,    -18, EWE,  SKIP, 0,  -24, LUD,  -45, SKY,  -8, GIE,  SKIP, 0,  15, SOL},
          {31, ALBA, -31,MUN, 8, GOTT,     2, TIG,      -15, GIE, 17, AVG,   13, SKY,   -13, BRO,   18, BRE,  1, BRA,    15, BONN,  -1, SOL,   SKIP, 0,  14, AVG,   -8, LUD,   -18, ULM, SKIP, 0,  -2, BAYR},
          {-3, MITT, 18,GOTT, 16, SOL,     -2, GIE,     3, TIG,   26, AVG,   21, AVG,   19, ULM,    -19, SKY, -16, LUD,  2, BAYR,   -5, BRE,   SKIP, 0,  3, MUN,    -18, ALBA, 5, BRA,   SKIP, 0,  -3, BONN},
          {2, SKY,   16, TIG, 20, BRE,     3, ULM,      25, AVG,  5, SOL,    24, GIE,   -2, MUN,    -3, BAYR, -5, EWE,   -24, BRO,  9, AVG,    SKIP, 0,  6, GOTT,   -6, MITT,  -20, LUD, SKIP, 0,  -16, ALBA},
          {23, BAYR, -2, EWE, -15, BRO,    -23, MUN,    -30, SKY, 2, ALBA,   15, LUD,   30, BONN,   18, SOL,  -18, ULM,  4, AVG,    -12, MITT, SKIP, 0,  12, BRA,   -15, TIG,  4, AVG,   SKIP, 0,  15, GOTT},
          {33, AVG,  -10,ULM, 3, BAYR,     -3, LUD,     -20, BRO, 1, GIE,    20, BONN,  18, BRA,    10, ALBA,  11, AVG,  -1, EWE,   -18, SKY,  SKIP, 0,  1, TIG,    9, BRE,    -9, GOTT, SKIP, 0,  -1, MITT},
          {25, TIG,  21,BONN, 1, AVG,      10, BRE,     -21,ALBA, 5, GOTT,   33, ULM,   4, SOL,     -33, BRO,  -4, SKY,  2, BRA,    -2, GIE,   SKIP, 0,  -21, AVG,  -5, EWE,   -10,BAYR, SKIP, 0,  -25, MUN},
          {29, LUD,  22, AVG, -29, MUN,    -16, BONN,   16, BAYR, 5, BRO,    -5, EWE,   38, MITT,   16, GIE,   7, BRE,   -16, ULM,  9, GOTT,   SKIP, 0,  -38, SKY,  -9, BRA,   -7, SOL,  SKIP, 0,  -2, AVG},
          //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {11, AVG,  4, BAYR, 13, AVG,     -4, ALBA,    -15, SOL, -15, SKY,  26, BRA,   15, EWE,    21, GOTT,  15, BONN, -4, TIG,   -26, BRO,  SKIP, 0,  -8, BRE,   -21, ULM,  8, MITT,  SKIP, 0,  4, GIE},
          {-7, BRO,  -16,SKY, -9, GIE,     7, SOL,      -8, MITT, 15, ULM,   7, MUN,    16, ALBA,   -15, EWE,  -7, BAYR, -9, LUD,   2, TIG,    SKIP, 0,  8, BONN,   13, AVG,   8, AVG,   SKIP, 0,  -2, BRA},
          {4, SOL,   -16,BRO, -5, BONN,    -8, BRA,     5, LUD,   29, BRE,   16, ALBA,  16, AVG,    7, MITT,   -4, MUN,  8, GOTT,   8, BAYR,   SKIP, 0,  -7, ULM,   -8, GIE,   -29, EWE, SKIP, 0,  17, AVG},
          {-4, EWE,  10, GIE, 15, ULM,     -12, MITT,   -2, BRA,  4, MUN,    15, BRE,   20, TIG,    -15, LUD,  -7, GOTT, -10, ALBA, 2, BONN,   SKIP, 0,  12, BAYR,  7, SOL,    -15, BRO, SKIP, 0,  -20, SKY},
        };


        for(int i = 0;i<=35;i++){
          if(i == 1){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/MUN*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/MUN;
                MUN = (MUN + ELO_diff)*season_weighting_15_16+MUN_ref*season_weighting_ref_15_16;

              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*MUN/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*MUN/season_15_16[runde][i];
                MUN = (MUN + ELO_diff)*season_weighting_15_16+MUN_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 3){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/ALBA*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/ALBA;
                ALBA = (ALBA + ELO_diff)*season_weighting_15_16+ALBA_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*ALBA/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*ALBA/season_15_16[runde][i];
                ALBA = (ALBA + ELO_diff)*season_weighting_15_16+ALBA_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 5){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/LUD*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/LUD;
                LUD = (LUD + ELO_diff)*season_weighting_15_16+LUD_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*LUD/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*LUD/season_15_16[runde][i];
                LUD = (LUD + ELO_diff)*season_weighting_15_16+LUD_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 7){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/BAYR*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/BAYR;
                BAYR = (BAYR + ELO_diff)*season_weighting_15_16+BAYR_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*BAYR/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*BAYR/season_15_16[runde][i];
                BAYR = (BAYR + ELO_diff)*season_weighting_15_16+BAYR_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 9){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/BONN*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/BONN;
                BONN = (BONN + ELO_diff)*season_weighting_15_16+BONN_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*BONN/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*BONN/season_15_16[runde][i];
                BONN = (BONN + ELO_diff)*season_weighting_15_16+BONN_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 11){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/EWE*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/EWE;
                EWE = (EWE + ELO_diff)*season_weighting_15_16+EWE_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*EWE/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*EWE/season_15_16[runde][i];
                EWE = (EWE + ELO_diff)*season_weighting_15_16+EWE_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 13){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/BRO*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/BRO;
                BRO = (BRO + ELO_diff)*season_weighting_15_16+BRO_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*BRO/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*BRO/season_15_16[runde][i];
                BRO = (BRO + ELO_diff)*season_weighting_15_16+BRO_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 15){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/SKY*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/SKY;
                SKY = (SKY + ELO_diff)*season_weighting_15_16+SKY_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*SKY/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*SKY/season_15_16[runde][i];
                SKY = (SKY + ELO_diff)*season_weighting_15_16+SKY_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 17){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/ULM*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/ULM;
                ULM = (ULM + ELO_diff)*season_weighting_15_16+ULM_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*ULM/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*ULM/season_15_16[runde][i];
                ULM = (ULM + ELO_diff)*season_weighting_15_16+ULM_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 19){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/SOL*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/SOL;
                SOL = (SOL + ELO_diff)*season_weighting_15_16+SOL_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*SOL/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*SOL/season_15_16[runde][i];
                SOL = (SOL + ELO_diff)*season_weighting_15_16+SOL_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 21){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/GIE*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/GIE;
                GIE = (GIE + ELO_diff)*season_weighting_15_16+GIE_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*GIE/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*GIE/season_15_16[runde][i];
                GIE = (GIE + ELO_diff)*season_weighting_15_16+GIE_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 23){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/BRA*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/BRA;
                BRA = (BRA + ELO_diff)*season_weighting_15_16+BRA_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*BRA/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*BRA/season_15_16[runde][i];
                BRA = (BRA + ELO_diff)*season_weighting_15_16+BRA_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 25){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/JENA*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/JENA;
                JENA = (JENA + ELO_diff)*season_weighting_15_16+JENA_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*JENA/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*JENA/season_15_16[runde][i];
                JENA = (JENA + ELO_diff)*season_weighting_15_16+JENA_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 27){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/MITT*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/MITT;
                MITT = (MITT + ELO_diff)*season_weighting_15_16+MITT_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*MITT/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*MITT/season_15_16[runde][i];
                MITT = (MITT + ELO_diff)*season_weighting_15_16+MITT_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 29){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/GOTT*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/GOTT;
                GOTT = (GOTT + ELO_diff)*season_weighting_15_16+GOTT_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*GOTT/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*GOTT/season_15_16[runde][i];
                GOTT = (GOTT + ELO_diff)*season_weighting_15_16+GOTT_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 31){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/BRE*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/BRE;
                BRE = (BRE + ELO_diff)*season_weighting_15_16+BRE_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*BRE/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*BRE/season_15_16[runde][i];
                BRE = (BRE + ELO_diff)*season_weighting_15_16+BRE_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 33){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/ROCK*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/ROCK;
                ROCK = (ROCK + ELO_diff)*season_weighting_15_16+ROCK_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*ROCK/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*ROCK/season_15_16[runde][i];
                ROCK = (ROCK + ELO_diff)*season_weighting_15_16+ROCK_ref*season_weighting_ref_15_16;
              }
            }
          else if(i == 35){
              if(season_15_16[runde][i-1]>0){
                float point_diff = point_value*season_15_16[runde][i]/TIG*season_15_16[runde][i-1];
                float ELO_diff = point_diff + game_value*season_15_16[runde][i]/TIG;
                TIG = (TIG + ELO_diff)*season_weighting_15_16+TIG_ref*season_weighting_ref_15_16;
              }
              else if(season_15_16[runde][i-1]==SKIP){
                continue;
              }
              else if(season_15_16[runde][i-1]<0){
                float point_diff = point_value*TIG/season_15_16[runde][i]*season_15_16[runde][i-1];
                float ELO_diff = point_diff - game_value*TIG/season_15_16[runde][i];
                TIG = (TIG + ELO_diff)*season_weighting_15_16+TIG_ref*season_weighting_ref_15_16;
              }
            }
          else{
            continue;
          }
      }
      runde++;
    }while(runde<34);
  std::cout << "season_15_16 done" << '\n';
};

void gameday_16_17() {
  int runde = 0;
  float AVG = (MUN + ALBA + LUD + BAYR + BONN + EWE + BRO + SKY + ULM + SOL + GIE + BRA + MITT + GOTT + BRE + TIG)/16;
  float season_weighting_16_17 = 0.99;
  float season_weighting_ref_16_17 = 0.01;
      do{

        float season_16_17[34][36] = {
          //MUN      ALBA      LUD         BAYR         BONN      EWE        BRO        SKY         ULM       SOL        GIE        BRA        JENA      MITT       GOTT       BRE       ROCK      TIG
          {14, EWE,  7, BONN,  9, SOL,     -8, ULM,     -7, ALBA, -14, MUN,  29, SKY,   -29, BRO,   8, BAYR,  -9, LUD,   10, JENA,  13, AVG,   -10, GIE, SKIP, 0,   9, AVG,    8, TIG,   SKIP, 0,  -8, BRE},
          {13, SOL,  4, JENA,  -3, GOTT,   9, AVG,      14, SKY,  -10, ULM,  48, BRA,   -14, BONN,  10, EWE,  -13, MUN,  -12, TIG,  -48, BRO,  -4, ALBA, SKIP, 0,   3, LUD,    10, AVG,  SKIP, 0,  12, GIE},
          {31, GOTT, -4, ULM,  14, BONN,   12, SOL,     -14, LUD, 3, AVG,    40, TIG,   5, BRE,     4, ALBA,  -12, BAYR, 18, BRA,   -18, GIE,  13, AVG,  SKIP, 0,   -31, MUN,  -5, SKY,  SKIP, 0,  -40, BRO},
          {4, GIE,   -8, SKY,  7, BRA,     3, JENA,     14, TIG,  12, GOTT,  26, SOL,   8, ALBA,    13, BRE,  -26, BRO,  -4, MUN,   -7, LUD,   -3, BAYR, SKIP, 0,   -12, EWE,  -13, ULM, SKIP, 0,  -14, BONN},
          {39, ALBA, -39, MUN, 13, AVG,    48, BRA,     9, GOTT,  9, JENA,   6, BRE,    -6, ULM,    6, SKY,   7, TIG,    19, AVG,   -48, BAYR, -9, EWE,  SKIP, 0,   -9, BONN,  -6, BRO,  SKIP, 0,  -7, SOL},
          {44, JENA, 4, GOTT,  -17, ULM,   18, GIE,     10, AVG,  -6, BRO,   6, EWE,    -9, SOL,    17, LUD,  9, SKY,    -18, BAYR, -18, TIG,  -44, MUN, SKIP, 0,   -4, ALBA,  4, AVG,   SKIP, 0,  18, BRA},
          {12, TIG,  -2, BAYR, -12, BRO,   2, ALBA,     2, JENA,  20, BRA,   12, LUD,   -7, AVG,    4, GIE,   10, AVG,   -4, ULM,   -20, EWE,  -2, BONN, SKIP, 0,   10, BRE,   -10,GOTT, SKIP, 0,  -12, MUN},
          {-31, BRO, 4, AVG,   8, BRE,     16, SKY,     -23, ULM, 31, TIG,   31, MUN,   -16, BAYR,  23, BONN, -5, GIE,   5, SOL,    -2, GOTT,  8, AVG,   SKIP, 0,   2, BRA,    -8, LUD,  SKIP, 0,  -31, EWE},
          {25, BRE,  6, LUD,   -6, ALBA,   9, EWE,      -2, BRA,  -9, BAYR,  2, GIE,    -4, GOTT,   10, JENA, 12, AVG,   -2, BRO,   2, BONN,   -10, ULM, SKIP, 0,   4, SKY,    -25, MUN, SKIP, 0,  12, AVG},
          {13, AVG,  -9, BRO,  -2, SKY,    10, TIG,     4, SOL,   -5, BRE,   9, ALBA,   2, LUD,     52, AVG,  -4, BONN,  10, GOTT,  -11, JENA, 11, BRA,  SKIP, 0,   -10, GIE,  5, EWE,   SKIP, 0,  -10, BAYR},
          //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {20, AVG,  11, GIE,  -17, BAYR,  17, LUD,     5, BRE,   3, SKY,    11, GOTT,  -3, EWE,    12, BRA,  -9, JENA,  -11, ALBA, -12, ULM,  9, SOL,   SKIP, 0,   -11, BRO,  -5, BONN, SKIP, 0,  6, AVG},
          {14, BAYR, 9, SOL,   SKIP, 0,    -14, MUN,    -14, EWE, 14, BONN,  25, JENA,  1, BRA,     10, TIG,  -9, ALBA,  23, BRE,   -1, SKY,   -25, BRO, SKIP, 0,   20, AVG,   -23, GIE, SKIP, 0,  -10, ULM},
          {20, SKY,  26, BRE,  6, GIE,     8, GOTT,     5, AVG,   10, SOL,   -15, ULM,  -20, MUN,   15, BRO,  -10, EWE,  -6, LUD,   SKIP, 0,   3, TIG,   SKIP, 0,   -8, BAYR,  -26,ALBA, SKIP, 0,  -3, JENA},
          {29, LUD,  5, TIG,   -29, MUN,   11, BRE,     -20, BRO, -2, GIE,   20, BONN,  SKIP, 0,    10, AVG,  4, BRA,    2, EWE,    -4, SOL,   6, GOTT,  SKIP, 0,   -6, JENA,  -11,BAYR, SKIP, 0,  -5, ALBA},
          {-12,BONN, 10, BRA,  4, EWE,     SKIP, 0,     12, MUN,  -4, LUD,   29, AVG,   -17, GIE,   23, SOL,  -23, ULM,  17, SKY,   -10, ALBA, -20, BRE, SKIP, 0,   16, TIG,   20, JENA, SKIP, 0,  -16, GOTT},
          {-8, ULM,  9, AVG,   12, TIG,    -4, BRO,     22, GIE,  SKIP, 0,   4, BAYR,   7, JENA,    8, MUN,   1, GOTT,   -22, BONN, 16, BRE,   -7, SKY,  SKIP, 0,   -1, SOL,   -16, BRA, SKIP, 0,  -12, LUD},
          {15, BRA,  18, EWE,  -2, JENA,   5, BONN,     -5, BAYR, -18, ALBA, SKIP, 0,   2, TIG,     24, GOTT, -5, BRE,   4, AVG,    -15, MUN,  2, LUD,   SKIP, 0,   -24, ULM,  5, SOL,   SKIP, 0,  -2, SKY},
          {10, LUD,  11, AVG,  -10, MUN,   -19, BRA,    -15, BRO, 4, TIG,    15, BONN,  4, GIE,     31, JENA, -12, GOTT, -4, SKY,   19, BAYR,  -31, ULM, SKIP, 0,   12, SOL,   SKIP, 0,  SKIP, 0,  -4, EWE},
          {15, GOTT, 8, BRA,   -9, BRO,    SKIP, 0,     17, SOL,  7, SKY,    9, LUD,    -7, EWE,    40, BRE,  -17, BONN, 8, AVG,    -8, ALBA,  8, TIG,   SKIP, 0,   -15, MUN,  -40, ULM, SKIP, 0,  -8, JENA},
          {5, SOL,   1, GIE,   -3, BAYR,   3, LUD,      SKIP, 0,  7, BRA,    31, AVG,   20, TIG,    31, GOTT, -5, MUN,   -1, ALBA,  -7, EWE,   -1, BRE,  SKIP, 0,   -31, ULM,  1, JENA,  SKIP, 0,  -20, SKY},
          //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {25, SKY,  -23,BONN, SKIP, 0,    -20, ULM,    23, ALBA, 15, BRE,   10, SOL,   -25, MUN,   20, BAYR, -10, BRO,  7, GOTT,   -7, JENA,  7, BRA,   SKIP, 0,   -7, GIE,   -15, EWE, SKIP, 0,  9, AVG},
          {24, ALBA, -24, MUN, 6, GIE,     12, BRE,     7, AVG,   20, GOTT,  19, SKY,   -19, BRO,   24, BRA,  -10, TIG,  -6, LUD,   -24, ULM,  SKIP, 0,  SKIP, 0,   -20, EWE,  -12,BAYR, SKIP, 0,  10, SOL},
          {SKIP, 0,  -1, JENA, 18, AVG,    -7, BONN,    7, BAYR,  -8, ULM,   20, BRA,   3, SOL,     8, EWE,   -3, SKY,   -7, TIG,   -20, BRO,  1, ALBA,  SKIP, 0,   9, BRE,    -9, GOTT, SKIP, 0,  7, GIE},
          {35, BRE,  -5, GOTT, 2, SKY,     8, JENA,     12, TIG,  -25, SOL,  14, GIE,   -2, LUD,    5, AVG,   25, EWE,   -14, BRO,  SKIP, 0,   -8, BAYR, SKIP, 0,   5, ALBA,   -35, MUN, SKIP, 0,  -12, BONN},
          {22, TIG,  24, SOL,  15, JENA,   35, GOTT,    -18, ULM, -21, BRO,  21, EWE,   36, BRA,    18, BONN, -24, ALBA, 4, BRE,    -36, SKY,  -15, LUD, SKIP, 0,   -35, BAYR, -4, GIE,  SKIP, 0,  -22, MUN},
          {8, BRO,   -6, ULM,  2, BRA,     1, TIG,      -10, BRE, -13, AVG,  -8, MUN,   14, GOTT,   6, ALBA,  SKIP, 0,   6, JENA,   -2, LUD,   -6, GIE,  SKIP, 0,   -14, SKY,  10, BONN, SKIP, 0,  -1, BAYR},
          {22, BRA,  1, BAYR,  -4, BONN,   -1, ALBA,    4, LUD,   41, JENA,  -5, ULM,   -7, BRE,    5, BRO,   23, AVG,   SKIP, 0,   -22, MUN,  -41, EWE, SKIP, 0,   9, TIG,    7, SKY,   SKIP, 0,  -9, GOTT},
          {30, JENA, -12, EWE, 27, SOL,    25, AVG,     1, SKY,   12, ALBA,  1, GOTT,   -1, BONN,   SKIP, 0,  -27, LUD,  10, BRA,   -10, GIE,  -30, MUN, SKIP, 0,   -1, BRO,   9, TIG,   SKIP, 0,  -9, BRE},
          {15, ULM,  17, TIG,  -12, EWE,   -18, BRO,    11, JENA, 12, LUD,   18, BAYR,  2, AVG,     -15, MUN, -3, GIE,   3, SOL,    -9, BRE,   -11,BONN, SKIP, 0,   SKIP, 0,   9, BRA,   SKIP, 0,  -17, ALBA},
          {12, BONN, SKIP, 0,  3, BRE,     1, SKY,      -12, MUN, -17, GIE,  12, TIG,   -1, BAYR,   3, SOL,   -3, ULM,   17, EWE,   14, AVG,   10, GOTT, SKIP, 0,   -10, JENA, -3, LUD,  SKIP, 0,  -12, BRO},
          //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
          {44, AVG,  -17, BRO, -9, GOTT,   -19, EWE,    -8, BRA,  19, BAYR,  17, ALBA,  8, JENA,    9, GIE,   7, BRE,    -9, ULM,   8, BONN,   -8, SKY,  SKIP, 0,   9, LUD,    -7, SOL,  SKIP, 0,  SKIP, 0},
          {7, EWE,   -8, BRE,  16, TIG,    10, GIE,     -12,GOTT, -7, MUN,   SKIP, 0,   -7, ULM,    7, SKY,   1, BRA,    -10, BAYR, -1, SOL,   1, AVG,   SKIP, 0,   12, BONN,  8, ALBA,  SKIP, 0,  -16, LUD},
          {-2, BAYR, -12, SKY, 18, ULM,    2, MUN,      17, GIE,  SKIP, 0,   1, BRE,    12, ALBA,   -18, LUD, 7, JENA,   -17, BONN, -5, TIG,   -7, SOL,  SKIP, 0,   1, AVG,    -1, BRO,  SKIP, 0,  5, BRA},
          {50, GIE,  10, LUD,  -10, ALBA,  -9, SOL,     -14, EWE, 14, BONN,  13, JENA,  SKIP, 0,    15, TIG,  9, BAYR,   -50, MUN,  -7, GOTT,  -13, BRO, SKIP, 0,   7, BRA,    19, AVG,  SKIP, 0,  -15, ULM},
        };


        for(int i = 0;i<=35;i++){
          if(i == 1){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/MUN*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/MUN;
                MUN = (MUN + ELO_diff)*season_weighting_16_17+MUN_ref*season_weighting_ref_16_17;

              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*MUN/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*MUN/season_16_17[runde][i];
                MUN = (MUN + ELO_diff)*season_weighting_16_17+MUN_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 3){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/ALBA*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/ALBA;
                ALBA = (ALBA + ELO_diff)*season_weighting_16_17+ALBA_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*ALBA/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*ALBA/season_16_17[runde][i];
                ALBA = (ALBA + ELO_diff)*season_weighting_16_17+ALBA_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 5){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/LUD*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/LUD;
                LUD = (LUD + ELO_diff)*season_weighting_16_17+LUD_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*LUD/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*LUD/season_16_17[runde][i];
                LUD = (LUD + ELO_diff)*season_weighting_16_17+LUD_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 7){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/BAYR*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/BAYR;
                BAYR = (BAYR + ELO_diff)*season_weighting_16_17+BAYR_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*BAYR/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*BAYR/season_16_17[runde][i];
                BAYR = (BAYR + ELO_diff)*season_weighting_16_17+BAYR_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 9){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/BONN*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/BONN;
                BONN = (BONN + ELO_diff)*season_weighting_16_17+BONN_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*BONN/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*BONN/season_16_17[runde][i];
                BONN = (BONN + ELO_diff)*season_weighting_16_17+BONN_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 11){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/EWE*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/EWE;
                EWE = (EWE + ELO_diff)*season_weighting_16_17+EWE_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*EWE/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*EWE/season_16_17[runde][i];
                EWE = (EWE + ELO_diff)*season_weighting_16_17+EWE_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 13){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/BRO*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/BRO;
                BRO = (BRO + ELO_diff)*season_weighting_16_17+BRO_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*BRO/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*BRO/season_16_17[runde][i];
                BRO = (BRO + ELO_diff)*season_weighting_16_17+BRO_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 15){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/SKY*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/SKY;
                SKY = (SKY + ELO_diff)*season_weighting_16_17+SKY_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*SKY/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*SKY/season_16_17[runde][i];
                SKY = (SKY + ELO_diff)*season_weighting_16_17+SKY_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 17){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/ULM*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/ULM;
                ULM = (ULM + ELO_diff)*season_weighting_16_17+ULM_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*ULM/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*ULM/season_16_17[runde][i];
                ULM = (ULM + ELO_diff)*season_weighting_16_17+ULM_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 19){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/SOL*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/SOL;
                SOL = (SOL + ELO_diff)*season_weighting_16_17+SOL_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*SOL/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*SOL/season_16_17[runde][i];
                SOL = (SOL + ELO_diff)*season_weighting_16_17+SOL_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 21){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/GIE*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/GIE;
                GIE = (GIE + ELO_diff)*season_weighting_16_17+GIE_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*GIE/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*GIE/season_16_17[runde][i];
                GIE = (GIE + ELO_diff)*season_weighting_16_17+GIE_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 23){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/BRA*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/BRA;
                BRA = (BRA + ELO_diff)*season_weighting_16_17+BRA_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*BRA/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*BRA/season_16_17[runde][i];
                BRA = (BRA + ELO_diff)*season_weighting_16_17+BRA_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 25){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/JENA*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/JENA;
                JENA = (JENA + ELO_diff)*season_weighting_16_17+JENA_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*JENA/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*JENA/season_16_17[runde][i];
                JENA = (JENA + ELO_diff)*season_weighting_16_17+JENA_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 27){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/MITT*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/MITT;
                MITT = (MITT + ELO_diff)*season_weighting_16_17+MITT_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*MITT/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*MITT/season_16_17[runde][i];
                MITT = (MITT + ELO_diff)*season_weighting_16_17+MITT_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 29){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/GOTT*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/GOTT;
                GOTT = (GOTT + ELO_diff)*season_weighting_16_17+GOTT_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*GOTT/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*GOTT/season_16_17[runde][i];
                GOTT = (GOTT + ELO_diff)*season_weighting_16_17+GOTT_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 31){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/BRE*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/BRE;
                BRE = (BRE + ELO_diff)*season_weighting_16_17+BRE_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*BRE/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*BRE/season_16_17[runde][i];
                BRE = (BRE + ELO_diff)*season_weighting_16_17+BRE_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 33){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/ROCK*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/ROCK;
                ROCK = (ROCK + ELO_diff)*season_weighting_16_17+ROCK_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*ROCK/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*ROCK/season_16_17[runde][i];
                ROCK = (ROCK + ELO_diff)*season_weighting_16_17+ROCK_ref*season_weighting_ref_16_17;
              }
            }
          else if(i == 35){
              if(season_16_17[runde][i-1]>0){
                float point_diff = point_value*season_16_17[runde][i]/TIG*season_16_17[runde][i-1];
                float ELO_diff = point_diff + game_value*season_16_17[runde][i]/TIG;
                TIG = (TIG + ELO_diff)*season_weighting_16_17+TIG_ref*season_weighting_ref_16_17;
              }
              else if(season_16_17[runde][i-1]==SKIP){
                continue;
              }
              else if(season_16_17[runde][i-1]<0){
                float point_diff = point_value*TIG/season_16_17[runde][i]*season_16_17[runde][i-1];
                float ELO_diff = point_diff - game_value*TIG/season_16_17[runde][i];
                TIG = (TIG + ELO_diff)*season_weighting_16_17+TIG_ref*season_weighting_ref_16_17;
              }
            }
          else{
            continue;
          }
      }
      if(runde == 33){
      /*std::cout << '\n';
      std::cout << '\n';
      std::cout << "ROUND " << runde+1 << '\n';
      std::cout << "-----------------------------------------------" << '\n';
      std::cout << "MUN = " << MUN << '\n';
      std::cout << "ALBA = " << ALBA << '\n';
      std::cout << "LUD = " << LUD << '\n';
      std::cout << "BAYR = " << BAYR << '\n';
      std::cout << "BONN = " << BONN << '\n';
      std::cout << "EWE = " << EWE << '\n';
      std::cout << "BRO = " << BRO << '\n';
      std::cout << "SKY = " << SKY << '\n';
      std::cout << "ULM = " << ULM << '\n';
      std::cout << "SOL = " << SOL << '\n';
      std::cout << "GIE = " << GIE << '\n';
      std::cout << "BRA = " << BRA << '\n';
      std::cout << "JENA = " << JENA << '\n';
      std::cout << "MITT = " << MITT << '\n';
      std::cout << "GOTT = " << GOTT << '\n';
      std::cout << "BRE = " << BRE << '\n';
      std::cout << "ROCK = " << ROCK << '\n';
      std::cout << "TIG = " << TIG << '\n';*/

        MUN_16_17 = MUN;
        ALBA_16_17 = ALBA;
        LUD_16_17 = LUD;
        BAYR_16_17 = BAYR;
        BONN_16_17 = BONN;
        EWE_16_17 = EWE;
        BRO_16_17 = BRO;
        SKY_16_17 = SKY;
        ULM_16_17 = ULM;
        SOL_16_17 = SOL;
        GIE_16_17 = GIE;
        BRA_16_17 = BRA;
        JENA_16_17 = JENA;
        MITT_16_17 = MITT;
        GOTT_16_17 = GOTT;
        BRE_16_17 = BRE;
        ROCK_16_17 = ROCK;
        TIG_16_17 = TIG;
        std::cout << "season_16_17 done"<< '\n';
      }

      runde++;
    }while(runde<34);
};

void simulation_17_18(){

  int runde = 0;
  int decider = rand()%1000+1;
  float MUN = 100;
  float ALBA = 100;
  float LUD = 100;
  float BAYR = 100;
  float BONN = 100;
  float EWE = 100;
  float BRO = 100;
  float SKY = 100;
  float ULM = 100;
  float SOL = 100;
  float GIE = 100;
  float BRA = 100;
  float JENA = 100;
  float MITT = 100;
  float GOTT = 100;
  float BRE = 100;
  float ROCK = 100;
  float TIG = 100;

  float MUN_games = 0;
  float ALBA_games = 0;
  float LUD_games = 0;
  float BAYR_games = 0;
  float BONN_games = 0;
  float EWE_games = 0;
  float BRO_games = 0;
  float SKY_games = 0;
  float ULM_games = 0;
  float SOL_games = 0;
  float GIE_games = 0;
  float BRA_games = 0;
  float JENA_games = 0;
  float MITT_games = 0;
  float GOTT_games = 0;
  float BRE_games = 0;
  float ROCK_games = 0;
  float TIG_games = 0;

  float season_17_18[34][54] = {
      //MUN        ALBA        LUD         BAYR       BONN       EWE          BRO          SKY            ULM          SOL         GIE         BRA         JENA         MITT         GOTT         BRE         ROCK         TIG
      {GIE_16_17, GIE, GIE_games, ULM_16_17, ULM, ULM_games, BONN_16_17, BONN, BONN_games, TIG_16_17, TIG, TIG_games, LUD_16_17, LUD, LUD_games, GOTT_16_17, GOTT, GOTT_games,  SOL_16_17, SOL, SOL_games, JENA_16_17, JENA, JENA_games, ALBA_16_17, ALBA, ALBA_games,  BRO_16_17, BRO, BRO_games,  MUN_16_17, MUN, MUN_games, BRE_16_17, BRE, BRE_games,  SKY_16_17, SKY, SKY_games,  ROCK_16_17, ROCK, ROCK_games, EWE_16_17, EWE, EWE_games,   BRA_16_17, BRA, BRA_games,  MITT_16_17, MITT, MITT_games,  BAYR_16_17, BAYR, BAYR_games},
      {BRA_16_17 ,BRA ,BRA_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,MUN_16_17 ,MUN ,MUN_games ,SOL_16_17 ,SOL ,SOL_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking},
      {GOTT_16_17 ,GOTT ,GOTT_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,MUN_16_17 ,MUN ,MUN_games ,SOL_16_17 ,SOL ,SOL_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,BRO_16_17 ,BRO ,BRO_ranking},
      {SOL_16_17 ,SOL ,SOL_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,MUN_16_17 ,MUN ,MUN_games ,LUD_16_17 ,LUD ,LUD_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,MITT_16_17 ,MITT ,MITT_ranking},
      {EWE_16_17 ,EWE ,EWE_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,MUN_16_17 ,MUN ,MUN_games ,ROCK_16_17 ,ROCK ,ROCK_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,SOL_16_17 ,SOL ,SOL_ranking},
      {BRE_16_17 ,BRE ,BRE_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,MUN_16_17 ,MUN ,MUN_games ,ALBA_16_17 ,ALBA ,ALBA_ranking ,GIE_16_17 ,GIE ,GIE_ranking},
      {SKY_16_17 ,SKY ,SKY_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,MUN_16_17 ,MUN ,MUN_games ,BRE_16_17 ,BRE ,BRE_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,BONN_16_17 ,BONN ,BONN_ranking},
      {ALBA_16_17 ,ALBA ,ALBA_ranking ,MUN_16_17 ,MUN ,MUN_games ,ROCK_16_17 ,ROCK ,ROCK_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,ULM_16_17 ,ULM ,ULM_ranking},
      {TIG_16_17 ,TIG ,TIG_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,MUN_16_17 ,MUN ,MUN_games},
      {BRO_16_17 ,BRO ,BRO_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,MUN_16_17 ,MUN ,MUN_games ,ULM_16_17 ,ULM ,ULM_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking},
      {JENA_16_17 ,JENA ,JENA_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,MUN_16_17 ,MUN ,MUN_games ,ULM_16_17 ,ULM ,ULM_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,BRE_16_17 ,BRE ,BRE_ranking},
      {LUD_16_17 ,LUD ,LUD_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,MUN_16_17 ,MUN ,MUN_games ,ROCK_16_17 ,ROCK ,ROCK_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking},
      {ROCK_16_17 ,ROCK ,ROCK_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,MUN_16_17 ,MUN ,MUN_games ,JENA_16_17 ,JENA ,JENA_ranking},
      {BAYR_16_17 ,BAYR ,BAYR_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,MUN_16_17 ,MUN ,MUN_games ,BRE_16_17 ,BRE ,BRE_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,SKY_16_17 ,SKY ,SKY_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,BRA_16_17 ,BRA ,BRA_ranking},
      {BONN_16_17 ,BONN ,BONN_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,ULM_16_17 ,ULM ,ULM_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,MUN_16_17 ,MUN ,MUN_games ,ALBA_16_17 ,ALBA ,ALBA_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,LUD_16_17 ,LUD ,LUD_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,SKY_16_17 ,SKY ,SKY_ranking},
      {ULM_16_17 ,ULM ,ULM_ranking ,BRA_16_17 ,BRA ,BRA_ranking ,TIG_16_17 ,TIG ,TIG_ranking ,BRO_16_17 ,BRO ,BRO_ranking ,GIE_16_17 ,GIE ,GIE_ranking ,BRE_16_17 ,BRE ,BRE_ranking ,BAYR_16_17 ,BAYR ,BAYR_ranking ,SOL_16_17 ,SOL ,SOL_ranking ,MUN_16_17 ,MUN ,MUN_games ,SKY_16_17 ,SKY ,SKY_ranking ,BONN_16_17 ,BONN ,BONN_ranking ,ALBA_16_17 ,ALBA ,ALBA_ranking ,MITT_16_17 ,MITT ,MITT_ranking ,JENA_16_17 ,JENA ,JENA_ranking ,ROCK_16_17 ,ROCK ,ROCK_ranking ,EWE_16_17 ,EWE ,EWE_ranking ,GOTT_16_17 ,GOTT ,GOTT_ranking ,LUD_16_17 ,LUD ,LUD_ranking},
  };

  do{
    for(int i = 0; i<54;i++){

      if(i==0){
        /*right here*/
        if(MUN_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_MUN = MUN_16_17/(MUN_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_MUN = round(win_prob_MUN);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_MUN);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            MUN++;
            season_17_18[runde][i+1]--;
            MUN_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            MUN--;
            season_17_18[runde][i+1]++;
            MUN_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==3){
        /*right here*/
        if(ALBA_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_ALBA = ALBA_16_17/(ALBA_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_ALBA = round(win_prob_ALBA);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_ALBA);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            ALBA++;
            season_17_18[runde][i+1]--;
            ALBA_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            ALBA--;
            season_17_18[runde][i+1]++;
            ALBA_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==6){
        /*right here*/
        if(LUD_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_LUD = LUD_16_17/(LUD_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_LUD = round(win_prob_LUD);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_LUD);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            LUD++;
            season_17_18[runde][i+1]--;
            LUD_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            LUD--;
            season_17_18[runde][i+1]++;
            LUD_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==9){
        /*right here*/
        if(BAYR_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_BAYR = BAYR_16_17/(BAYR_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_BAYR = round(win_prob_BAYR);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_BAYR);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            BAYR++;
            season_17_18[runde][i+1]--;
            BAYR_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            BAYR--;
            season_17_18[runde][i+1]++;
            BAYR_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==12){
        /*right here*/
        if(BONN_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_BONN = BONN_16_17/(BONN_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_BONN = round(win_prob_BONN);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_BONN);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            BONN++;
            season_17_18[runde][i+1]--;
            BONN_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            BONN--;
            season_17_18[runde][i+1]++;
            BONN_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==15){
        /*right here*/
        if(EWE_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_EWE = EWE_16_17/(EWE_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_EWE = round(win_prob_EWE);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_EWE);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            EWE++;
            season_17_18[runde][i+1]--;
            EWE_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            EWE--;
            season_17_18[runde][i+1]++;
            EWE_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==18){
        /*right here*/
        if(BRO_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_BRO = BRO_16_17/(BRO_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_BRO = round(win_prob_BRO);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_BRO);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            BRO++;
            season_17_18[runde][i+1]--;
            BRO_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            BRO--;
            season_17_18[runde][i+1]++;
            BRO_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==21){
        /*right here*/
        if(SKY_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_SKY = SKY_16_17/(SKY_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_SKY = round(win_prob_SKY);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_SKY);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            SKY++;
            season_17_18[runde][i+1]--;
            SKY_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            SKY--;
            season_17_18[runde][i+1]++;
            SKY_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==24){
        /*right here*/
        if(ULM_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_ULM = ULM_16_17/(ULM_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_ULM = round(win_prob_ULM);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_ULM);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            ULM++;
            season_17_18[runde][i+1]--;
            ULM_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            ULM--;
            season_17_18[runde][i+1]++;
            ULM_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==27){
        /*right here*/
        if(SOL_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_SOL = SOL_16_17/(SOL_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_SOL = round(win_prob_SOL);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_SOL);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            SOL++;
            season_17_18[runde][i+1]--;
            SOL_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            SOL--;
            season_17_18[runde][i+1]++;
            SOL_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==30){
        /*right here*/
        if(GIE_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_GIE = GIE_16_17/(GIE_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_GIE = round(win_prob_GIE);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_GIE);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            GIE++;
            season_17_18[runde][i+1]--;
            GIE_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            GIE--;
            season_17_18[runde][i+1]++;
            GIE_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==33){
        /*right here*/
        if(BRA_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_BRA = BRA_16_17/(BRA_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_BRA = round(win_prob_BRA);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_BRA);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            BRA++;
            season_17_18[runde][i+1]--;
            BRA_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            BRA--;
            season_17_18[runde][i+1]++;
            BRA_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==36){
        /*right here*/
        if(JENA_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_JENA = JENA_16_17/(JENA_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_JENA = round(win_prob_JENA);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_JENA);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            JENA++;
            season_17_18[runde][i+1]--;
            JENA_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            JENA--;
            season_17_18[runde][i+1]++;
            JENA_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==39){
        /*right here*/
        if(MITT_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_MITT = MITT_16_17/(MITT_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_MITT = round(win_prob_MITT);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_MITT);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            MITT++;
            season_17_18[runde][i+1]--;
            MITT_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            MITT--;
            season_17_18[runde][i+1]++;
            MITT_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==42){
        /*right here*/
        if(GOTT_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_GOTT = GOTT_16_17/(GOTT_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_GOTT = round(win_prob_GOTT);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_GOTT);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            GOTT++;
            season_17_18[runde][i+1]--;
            GOTT_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            GOTT--;
            season_17_18[runde][i+1]++;
            GOTT_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==45){
        /*right here*/
        if(BRE_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_BRE = BRE_16_17/(BRE_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_BRE = round(win_prob_BRE);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_BRE);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            BRE++;
            season_17_18[runde][i+1]--;
            BRE_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            BRE--;
            season_17_18[runde][i+1]++;
            BRE_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==48){
        /*right here*/
        if(ROCK_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_ROCK = ROCK_16_17/(ROCK_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_ROCK = round(win_prob_ROCK);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_ROCK);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            ROCK++;
            season_17_18[runde][i+1]--;
            ROCK_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            ROCK--;
            season_17_18[runde][i+1]++;
            ROCK_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
      if(i==51){
        /*right here*/
        if(TIG_games>=runde+1){
          continue;
        }
        else{       /*right here*/
          float win_prob_TIG = TIG_16_17/(TIG_16_17+season_17_18[runde][i])*1000;
          int eff_win_prob_TIG = round(win_prob_TIG);
          std::vector<int> chance;
          int win = 0;
          do{
            int check = 0;
            check = 0;
            int new_entry = rand()%1000+1;
            for(int j = 0;j<chance.size();j++){
              if(chance[j]==new_entry){
                check++;
              };
            }
            if(check == 0){
              chance.push_back(new_entry);
            }                 /*right here*/
          }while(chance.size()<eff_win_prob_TIG);
          for(int j = 0;j<chance.size();j++){
            if(chance[j]==decider){
              win++;
            }
          }
          if(win!=0){
            /*right here*/
            TIG++;
            season_17_18[runde][i+1]--;
            TIG_games++;
            season_17_18[runde][i+2]++;
          }
          else{
            /*right here*/
            TIG--;
            season_17_18[runde][i+1]++;
            TIG_games++;
            season_17_18[runde][i+2]++;
          }
        }
      }
    }
    runde++;
    //RUNDE ÄNDERN
  }while(runde<16);
  std::vector<float> standings;
  standings.push_back(MUN);
  standings.push_back(ALBA);
  standings.push_back(LUD);
  standings.push_back(BAYR);
  standings.push_back(BONN);
  standings.push_back(EWE);
  standings.push_back(BRO);
  standings.push_back(SKY);
  standings.push_back(ULM);
  standings.push_back(SOL);
  standings.push_back(GIE);
  standings.push_back(BRA);
  standings.push_back(JENA);
  standings.push_back(MITT);
  standings.push_back(GOTT);
  standings.push_back(BRE);
  standings.push_back(ROCK);
  standings.push_back(TIG);
  std::sort(standings.begin(), standings.begin()+18);
  /*std::cout << standings[0] << '\n';
  std::cout << standings[1] << '\n';
  std::cout << standings[2] << '\n';
  std::cout << standings[3] << '\n';
  std::cout << standings[4] << '\n';
  std::cout << standings[5] << '\n';
  std::cout << standings[6] << '\n';
  std::cout << standings[7] << '\n';
  std::cout << standings[8] << '\n';
  std::cout << standings[9] << '\n';
  std::cout << standings[10] << '\n';
  std::cout << standings[11] << '\n';
  std::cout << standings[12] << '\n';
  std::cout << standings[13] << '\n';
  std::cout << standings[14] << '\n';
  std::cout << standings[15] << '\n';
  std::cout << standings[16] << '\n';
  std::cout << standings[17] << '\n';*/

  if(MUN==standings[0]){
    MUN_ranking = MUN_ranking++;
  }
  else if(MUN==standings[1]){
    MUN_ranking = MUN_ranking+2;
  }
    else if(MUN==standings[2]) {
    MUN_ranking = MUN_ranking+3;
  }
   else if(MUN==standings[3]){
    MUN_ranking = MUN_ranking+4;
  }
  else if(MUN==standings[4]){
    MUN_ranking = MUN_ranking+5;
  }
  else if(MUN==standings[5]){
    MUN_ranking = MUN_ranking+6;
  }
  else if(MUN==standings[6]){
    MUN_ranking = MUN_ranking+7;
  }
  else if(MUN==standings[7]){
    MUN_ranking = MUN_ranking+8;
  }
  else if(MUN==standings[8]){
    MUN_ranking = MUN_ranking+9;
  }
  else if(MUN==standings[9]){
    MUN_ranking = MUN_ranking+10;
  }
  else if(MUN==standings[10]){
    MUN_ranking = MUN_ranking+11;
  }
  else if(MUN==standings[11]){
    MUN_ranking = MUN_ranking+12;
  }
  else if(MUN==standings[12]){
    MUN_ranking = MUN_ranking+13;
  }
  else if(MUN==standings[13]) {
    MUN_ranking = MUN_ranking+14;
  }
  else if(MUN==standings[14]){
    MUN_ranking = MUN_ranking+15;
  }
  else if(MUN==standings[15]) {
    MUN_ranking = MUN_ranking+16;
  }
  else if(MUN==standings[16]){
    MUN_ranking = MUN_ranking+17;
  }
  else if(MUN==standings[17]){
    MUN_ranking = MUN_ranking+18;
  }

  if(ALBA==standings[0]){
    ALBA_ranking = ALBA_ranking++;
  }
  else if(ALBA==standings[1]){
    ALBA_ranking = ALBA_ranking+2;
  }
  else if (ALBA ==standings[2]) {
    ALBA_ranking = ALBA_ranking+3;
  }
  else if(ALBA==standings[3]){
    ALBA_ranking = ALBA_ranking+4;
  }
  else if(ALBA==standings[4]){
    ALBA_ranking = ALBA_ranking+5;
  }
  else if(ALBA==standings[5]){
    ALBA_ranking = ALBA_ranking+6;
  }
  else if(ALBA==standings[6]){
    ALBA_ranking = ALBA_ranking+7;
  }
  else if(ALBA==standings[7]){
    ALBA_ranking = ALBA_ranking+8;
  }
  else if(ALBA==standings[8]){
    ALBA_ranking = ALBA_ranking+9;
  }
  else if(ALBA==standings[9]){
    ALBA_ranking = ALBA_ranking+10;
  }
  else if(ALBA==standings[10]){
    ALBA_ranking = ALBA_ranking+11;
  }
  else if(ALBA==standings[11]){
    ALBA_ranking = ALBA_ranking+12;
  }
  else if(ALBA==standings[12]){
    ALBA_ranking = ALBA_ranking+13;
  }
  else if (ALBA==standings[13]) {
    ALBA_ranking = ALBA_ranking+14;
  }
  else if(ALBA==standings[14]){
    ALBA_ranking = ALBA_ranking+15;
  }
  else if (ALBA==standings[15]) {
    ALBA_ranking = ALBA_ranking+16;
  }
  else if(ALBA==standings[16]){
    ALBA_ranking = ALBA_ranking+17;
  }
  else if(ALBA==standings[17]){
    ALBA_ranking = ALBA_ranking+18;
  }

  if(LUD==standings[0]){
    LUD_ranking = LUD_ranking++;
  }
  else if(LUD==standings[1]){
    LUD_ranking = LUD_ranking+2;
  }
  else if (LUD ==standings[2]) {
    LUD_ranking = LUD_ranking+3;
  }
  else if(LUD==standings[3]){
    LUD_ranking = LUD_ranking+4;
  }
  else if(LUD==standings[4]){
    LUD_ranking = LUD_ranking+5;
  }
  else if(LUD==standings[5]){
    LUD_ranking = LUD_ranking+6;
  }
  else if(LUD==standings[6]){
    LUD_ranking = LUD_ranking+7;
  }
  else if(LUD==standings[7]){
    LUD_ranking = LUD_ranking+8;
  }
  else if(LUD==standings[8]){
    LUD_ranking = LUD_ranking+9;
  }
  else if(LUD==standings[9]){
    LUD_ranking = LUD_ranking+10;
  }
  else if(LUD==standings[10]){
    LUD_ranking = LUD_ranking+11;
  }
  else if(LUD==standings[11]){
    LUD_ranking = LUD_ranking+12;
  }
  else if(LUD==standings[12]){
    LUD_ranking = LUD_ranking+13;
  }
  else if (LUD==standings[13]) {
    LUD_ranking = LUD_ranking+14;
  }
  else if(LUD==standings[14]){
    LUD_ranking = LUD_ranking+15;
  }
  else if (LUD==standings[15]) {
    LUD_ranking = LUD_ranking+16;
  }
  else if(LUD==standings[16]){
    LUD_ranking = LUD_ranking+17;
  }
  else if(LUD==standings[17]){
    LUD_ranking = LUD_ranking+18;
  }

  if(BAYR==standings[0]){
    BAYR_ranking = BAYR_ranking++;
  }
  else if(BAYR==standings[1]){
    BAYR_ranking = BAYR_ranking+2;
  }
  else if (BAYR ==standings[2]) {
    BAYR_ranking = BAYR_ranking+3;
  }
  else if(BAYR==standings[3]){
    BAYR_ranking = BAYR_ranking+4;
  }
  else if(BAYR==standings[4]){
    BAYR_ranking = BAYR_ranking+5;
  }
  else if(BAYR==standings[5]){
    BAYR_ranking = BAYR_ranking+6;
  }
  else if(BAYR==standings[6]){
    BAYR_ranking = BAYR_ranking+7;
  }
  else if(BAYR==standings[7]){
    BAYR_ranking = BAYR_ranking+8;
  }
  else if(BAYR==standings[8]){
    BAYR_ranking = BAYR_ranking+9;
  }
  else if(BAYR==standings[9]){
    BAYR_ranking = BAYR_ranking+10;
  }
  else if(BAYR==standings[10]){
    BAYR_ranking = BAYR_ranking+11;
  }
  else if(BAYR==standings[11]){
    BAYR_ranking = BAYR_ranking+12;
  }
  else if(BAYR==standings[12]){
    BAYR_ranking = BAYR_ranking+13;
  }
  else if (BAYR==standings[13]) {
    BAYR_ranking = BAYR_ranking+14;
  }
  else if(BAYR==standings[14]){
    BAYR_ranking = BAYR_ranking+15;
  }
  else if (BAYR==standings[15]) {
    BAYR_ranking = BAYR_ranking+16;
  }
  else if(BAYR==standings[16]){
    BAYR_ranking = BAYR_ranking+17;
  }
  else if(BAYR==standings[17]){
    BAYR_ranking = BAYR_ranking+18;
  }

  if(BONN==standings[0]){
    BONN_ranking = BONN_ranking++;
  }
  else if(BONN==standings[1]){
    BONN_ranking = BONN_ranking+2;
  }
  else if (BONN ==standings[2]) {
    BONN_ranking = BONN_ranking+3;
  }
  else if(BONN==standings[3]){
    BONN_ranking = BONN_ranking+4;
  }
  else if(BONN==standings[4]){
    BONN_ranking = BONN_ranking+5;
  }
  else if(BONN==standings[5]){
    BONN_ranking = BONN_ranking+6;
  }
  else if(BONN==standings[6]){
    BONN_ranking = BONN_ranking+7;
  }
  else if(BONN==standings[7]){
    BONN_ranking = BONN_ranking+8;
  }
  else if(BONN==standings[8]){
    BONN_ranking = BONN_ranking+9;
  }
  else if(BONN==standings[9]){
    BONN_ranking = BONN_ranking+10;
  }
  else if(BONN==standings[10]){
    BONN_ranking = BONN_ranking+11;
  }
  else if(BONN==standings[11]){
    BONN_ranking = BONN_ranking+12;
  }
  else if(BONN==standings[12]){
    BONN_ranking = BONN_ranking+13;
  }
  else if (BONN==standings[13]) {
    BONN_ranking = BONN_ranking+14;
  }
  else if(BONN==standings[14]){
    BONN_ranking = BONN_ranking+15;
  }
  else if (BONN==standings[15]) {
    BONN_ranking = BONN_ranking+16;
  }
  else if(BONN==standings[16]){
    BONN_ranking = BONN_ranking+17;
  }
  else if(BONN==standings[17]){
    BONN_ranking = BONN_ranking+18;
  }

  if(EWE==standings[0]){
    EWE_ranking = EWE_ranking++;
  }
  else if(EWE==standings[1]){
    EWE_ranking = EWE_ranking+2;
  }
  else if (EWE ==standings[2]) {
    EWE_ranking = EWE_ranking+3;
  }
  else if(EWE==standings[3]){
    EWE_ranking = EWE_ranking+4;
  }
  else if(EWE==standings[4]){
    EWE_ranking = EWE_ranking+5;
  }
  else if(EWE==standings[5]){
    EWE_ranking = EWE_ranking+6;
  }
  else if(EWE==standings[6]){
    EWE_ranking = EWE_ranking+7;
  }
  else if(EWE==standings[7]){
    EWE_ranking = EWE_ranking+8;
  }
  else if(EWE==standings[8]){
    EWE_ranking = EWE_ranking+9;
  }
  else if(EWE==standings[9]){
    EWE_ranking = EWE_ranking+10;
  }
  else if(EWE==standings[10]){
    EWE_ranking = EWE_ranking+11;
  }
  else if(EWE==standings[11]){
    EWE_ranking = EWE_ranking+12;
  }
  else if(EWE==standings[12]){
    EWE_ranking = EWE_ranking+13;
  }
  else if (EWE==standings[13]) {
    EWE_ranking = EWE_ranking+14;
  }
  else if(EWE==standings[14]){
    EWE_ranking = EWE_ranking+15;
  }
  else if (EWE==standings[15]) {
    EWE_ranking = EWE_ranking+16;
  }
  else if(EWE==standings[16]){
    EWE_ranking = EWE_ranking+17;
  }
  else if(EWE==standings[17]){
    EWE_ranking = EWE_ranking+18;
  }

  if(BRO==standings[0]){
    BRO_ranking = BRO_ranking++;
  }
  else if(BRO==standings[1]){
    BRO_ranking = BRO_ranking+2;
  }
  else if (BRO ==standings[2]) {
    BRO_ranking = BRO_ranking+3;
  }
  else if(BRO==standings[3]){
    BRO_ranking = BRO_ranking+4;
  }
  else if(BRO==standings[4]){
    BRO_ranking = BRO_ranking+5;
  }
  else if(BRO==standings[5]){
    BRO_ranking = BRO_ranking+6;
  }
  else if(BRO==standings[6]){
    BRO_ranking = BRO_ranking+7;
  }
  else if(BRO==standings[7]){
    BRO_ranking = BRO_ranking+8;
  }
  else if(BRO==standings[8]){
    BRO_ranking = BRO_ranking+9;
  }
  else if(BRO==standings[9]){
    BRO_ranking = BRO_ranking+10;
  }
  else if(BRO==standings[10]){
    BRO_ranking = BRO_ranking+11;
  }
  else if(BRO==standings[11]){
    BRO_ranking = BRO_ranking+12;
  }
  else if(BRO==standings[12]){
    BRO_ranking = BRO_ranking+13;
  }
  else if (BRO==standings[13]) {
    BRO_ranking = BRO_ranking+14;
  }
  else if(BRO==standings[14]){
    BRO_ranking = BRO_ranking+15;
  }
  else if (BRO==standings[15]) {
    BRO_ranking = BRO_ranking+16;
  }
  else if(BRO==standings[16]){
    BRO_ranking = BRO_ranking+17;
  }
  else if(BRO==standings[17]){
    BRO_ranking = BRO_ranking+18;
  }

  if(SKY==standings[0]){
    SKY_ranking = SKY_ranking++;
  }
  else if(SKY==standings[1]){
    SKY_ranking = SKY_ranking+2;
  }
  else if (SKY ==standings[2]) {
    SKY_ranking = SKY_ranking+3;
  }
  else if(SKY==standings[3]){
    SKY_ranking = SKY_ranking+4;
  }
  else if(SKY==standings[4]){
    SKY_ranking = SKY_ranking+5;
  }
  else if(SKY==standings[5]){
    SKY_ranking = SKY_ranking+6;
  }
  else if(SKY==standings[6]){
    SKY_ranking = SKY_ranking+7;
  }
  else if(SKY==standings[7]){
    SKY_ranking = SKY_ranking+8;
  }
  else if(SKY==standings[8]){
    SKY_ranking = SKY_ranking+9;
  }
  else if(SKY==standings[9]){
    SKY_ranking = SKY_ranking+10;
  }
  else if(SKY==standings[10]){
    SKY_ranking = SKY_ranking+11;
  }
  else if(SKY==standings[11]){
    SKY_ranking = SKY_ranking+12;
  }
  else if(SKY==standings[12]){
    SKY_ranking = SKY_ranking+13;
  }
  else if (SKY==standings[13]) {
    SKY_ranking = SKY_ranking+14;
  }
  else if(SKY==standings[14]){
    SKY_ranking = SKY_ranking+15;
  }
  else if (SKY==standings[15]) {
    SKY_ranking = SKY_ranking+16;
  }
  else if(SKY==standings[16]){
    SKY_ranking = SKY_ranking+17;
  }
  else if(SKY==standings[17]){
    SKY_ranking = SKY_ranking+18;
  }

  if(ULM==standings[0]){
    ULM_ranking = ULM_ranking++;
  }
  else if(ULM==standings[1]){
    ULM_ranking = ULM_ranking+2;
  }
  else if (ULM ==standings[2]) {
    ULM_ranking = ULM_ranking+3;
  }
  else if(ULM==standings[3]){
    ULM_ranking = ULM_ranking+4;
  }
  else if(ULM==standings[4]){
    ULM_ranking = ULM_ranking+5;
  }
  else if(ULM==standings[5]){
    ULM_ranking = ULM_ranking+6;
  }
  else if(ULM==standings[6]){
    ULM_ranking = ULM_ranking+7;
  }
  else if(ULM==standings[7]){
    ULM_ranking = ULM_ranking+8;
  }
  else if(ULM==standings[8]){
    ULM_ranking = ULM_ranking+9;
  }
  else if(ULM==standings[9]){
    ULM_ranking = ULM_ranking+10;
  }
  else if(ULM==standings[10]){
    ULM_ranking = ULM_ranking+11;
  }
  else if(ULM==standings[11]){
    ULM_ranking = ULM_ranking+12;
  }
  else if(ULM==standings[12]){
    ULM_ranking = ULM_ranking+13;
  }
  else if (ULM==standings[13]) {
    ULM_ranking = ULM_ranking+14;
  }
  else if(ULM==standings[14]){
    ULM_ranking = ULM_ranking+15;
  }
  else if (ULM==standings[15]) {
    ULM_ranking = ULM_ranking+16;
  }
  else if(ULM==standings[16]){
    ULM_ranking = ULM_ranking+17;
  }
  else if(ULM==standings[17]){
    ULM_ranking = ULM_ranking+18;
  }

  if(SOL==standings[0]){
    SOL_ranking = SOL_ranking++;
  }
  else if(SOL==standings[1]){
    SOL_ranking = SOL_ranking+2;
  }
  else if (SOL ==standings[2]) {
    SOL_ranking = SOL_ranking+3;
  }
  else if(SOL==standings[3]){
    SOL_ranking = SOL_ranking+4;
  }
  else if(SOL==standings[4]){
    SOL_ranking = SOL_ranking+5;
  }
  else if(SOL==standings[5]){
    SOL_ranking = SOL_ranking+6;
  }
  else if(SOL==standings[6]){
    SOL_ranking = SOL_ranking+7;
  }
  else if(SOL==standings[7]){
    SOL_ranking = SOL_ranking+8;
  }
  else if(SOL==standings[8]){
    SOL_ranking = SOL_ranking+9;
  }
  else if(SOL==standings[9]){
    SOL_ranking = SOL_ranking+10;
  }
  else if(SOL==standings[10]){
    SOL_ranking = SOL_ranking+11;
  }
  else if(SOL==standings[11]){
    SOL_ranking = SOL_ranking+12;
  }
  else if(SOL==standings[12]){
    SOL_ranking = SOL_ranking+13;
  }
  else if (SOL==standings[13]) {
    SOL_ranking = SOL_ranking+14;
  }
  else if(SOL==standings[14]){
    SOL_ranking = SOL_ranking+15;
  }
  else if (SOL==standings[15]) {
    SOL_ranking = SOL_ranking+16;
  }
  else if(SOL==standings[16]){
    SOL_ranking = SOL_ranking+17;
  }
  else if(SOL==standings[17]){
    SOL_ranking = SOL_ranking+18;
  }

  if(GIE==standings[0]){
    GIE_ranking = GIE_ranking++;
  }
  else if(GIE==standings[1]){
    GIE_ranking = GIE_ranking+2;
  }
  else if (GIE ==standings[2]) {
    GIE_ranking = GIE_ranking+3;
  }
  else if(GIE==standings[3]){
    GIE_ranking = GIE_ranking+4;
  }
  else if(GIE==standings[4]){
    GIE_ranking = GIE_ranking+5;
  }
  else if(GIE==standings[5]){
    GIE_ranking = GIE_ranking+6;
  }
  else if(GIE==standings[6]){
    GIE_ranking = GIE_ranking+7;
  }
  else if(GIE==standings[7]){
    GIE_ranking = GIE_ranking+8;
  }
  else if(GIE==standings[8]){
    GIE_ranking = GIE_ranking+9;
  }
  else if(GIE==standings[9]){
    GIE_ranking = GIE_ranking+10;
  }
  else if(GIE==standings[10]){
    GIE_ranking = GIE_ranking+11;
  }
  else if(GIE==standings[11]){
    GIE_ranking = GIE_ranking+12;
  }
  else if(GIE==standings[12]){
    GIE_ranking = GIE_ranking+13;
  }
  else if (GIE==standings[13]) {
    GIE_ranking = GIE_ranking+14;
  }
  else if(GIE==standings[14]){
    GIE_ranking = GIE_ranking+15;
  }
  else if (GIE==standings[15]) {
    GIE_ranking = GIE_ranking+16;
  }
  else if(GIE==standings[16]){
    GIE_ranking = GIE_ranking+17;
  }
  else if(GIE==standings[17]){
    GIE_ranking = GIE_ranking+18;
  }

  if(BRA==standings[0]){
    BRA_ranking = BRA_ranking++;
  }
  else if(BRA==standings[1]){
    BRA_ranking = BRA_ranking+2;
  }
  else if (BRA ==standings[2]) {
    BRA_ranking = BRA_ranking+3;
  }
  else if(BRA==standings[3]){
    BRA_ranking = BRA_ranking+4;
  }
  else if(BRA==standings[4]){
    BRA_ranking = BRA_ranking+5;
  }
  else if(BRA==standings[5]){
    BRA_ranking = BRA_ranking+6;
  }
  else if(BRA==standings[6]){
    BRA_ranking = BRA_ranking+7;
  }
  else if(BRA==standings[7]){
    BRA_ranking = BRA_ranking+8;
  }
  else if(BRA==standings[8]){
    BRA_ranking = BRA_ranking+9;
  }
  else if(BRA==standings[9]){
    BRA_ranking = BRA_ranking+10;
  }
  else if(BRA==standings[10]){
    BRA_ranking = BRA_ranking+11;
  }
  else if(BRA==standings[11]){
    BRA_ranking = BRA_ranking+12;
  }
  else if(BRA==standings[12]){
    BRA_ranking = BRA_ranking+13;
  }
  else if (BRA==standings[13]) {
    BRA_ranking = BRA_ranking+14;
  }
  else if(BRA==standings[14]){
    BRA_ranking = BRA_ranking+15;
  }
  else if (BRA==standings[15]) {
    BRA_ranking = BRA_ranking+16;
  }
  else if(BRA==standings[16]){
    BRA_ranking = BRA_ranking+17;
  }
  else if(BRA==standings[17]){
    BRA_ranking = BRA_ranking+18;
  }

  if(JENA==standings[0]){
    JENA_ranking = JENA_ranking++;
  }
  else if(JENA==standings[1]){
    JENA_ranking = JENA_ranking+2;
  }
  else if (JENA ==standings[2]) {
    JENA_ranking = JENA_ranking+3;
  }
  else if(JENA==standings[3]){
    JENA_ranking = JENA_ranking+4;
  }
  else if(JENA==standings[4]){
    JENA_ranking = JENA_ranking+5;
  }
  else if(JENA==standings[5]){
    JENA_ranking = JENA_ranking+6;
  }
  else if(JENA==standings[6]){
    JENA_ranking = JENA_ranking+7;
  }
  else if(JENA==standings[7]){
    JENA_ranking = JENA_ranking+8;
  }
  else if(JENA==standings[8]){
    JENA_ranking = JENA_ranking+9;
  }
  else if(JENA==standings[9]){
    JENA_ranking = JENA_ranking+10;
  }
  else if(JENA==standings[10]){
    JENA_ranking = JENA_ranking+11;
  }
  else if(JENA==standings[11]){
    JENA_ranking = JENA_ranking+12;
  }
  else if(JENA==standings[12]){
    JENA_ranking = JENA_ranking+13;
  }
  else if (JENA==standings[13]) {
    JENA_ranking = JENA_ranking+14;
  }
  else if(JENA==standings[14]){
    JENA_ranking = JENA_ranking+15;
  }
  else if (JENA==standings[15]) {
    JENA_ranking = JENA_ranking+16;
  }
  else if(JENA==standings[16]){
    JENA_ranking = JENA_ranking+17;
  }
  else if(JENA==standings[17]){
    JENA_ranking = JENA_ranking+18;
  }

  if(MITT==standings[0]){
    MITT_ranking = MITT_ranking++;
  }
  else if(MITT==standings[1]){
    MITT_ranking = MITT_ranking+2;
  }
  else if (MITT ==standings[2]) {
    MITT_ranking = MITT_ranking+3;
  }
  else if(MITT==standings[3]){
    MITT_ranking = MITT_ranking+4;
  }
  else if(MITT==standings[4]){
    MITT_ranking = MITT_ranking+5;
  }
  else if(MITT==standings[5]){
    MITT_ranking = MITT_ranking+6;
  }
  else if(MITT==standings[6]){
    MITT_ranking = MITT_ranking+7;
  }
  else if(MITT==standings[7]){
    MITT_ranking = MITT_ranking+8;
  }
  else if(MITT==standings[8]){
    MITT_ranking = MITT_ranking+9;
  }
  else if(MITT==standings[9]){
    MITT_ranking = MITT_ranking+10;
  }
  else if(MITT==standings[10]){
    MITT_ranking = MITT_ranking+11;
  }
  else if(MITT==standings[11]){
    MITT_ranking = MITT_ranking+12;
  }
  else if(MITT==standings[12]){
    MITT_ranking = MITT_ranking+13;
  }
  else if (MITT==standings[13]) {
    MITT_ranking = MITT_ranking+14;
  }
  else if(MITT==standings[14]){
    MITT_ranking = MITT_ranking+15;
  }
  else if (MITT==standings[15]) {
    MITT_ranking = MITT_ranking+16;
  }
  else if(MITT==standings[16]){
    MITT_ranking = MITT_ranking+17;
  }
  else if(MITT==standings[17]){
    MITT_ranking = MITT_ranking+18;
  }

  if(GOTT==standings[0]){
    GOTT_ranking = GOTT_ranking++;
  }
  else if(GOTT==standings[1]){
    GOTT_ranking = GOTT_ranking+2;
  }
  else if (GOTT ==standings[2]) {
    GOTT_ranking = GOTT_ranking+3;
  }
  else if(GOTT==standings[3]){
    GOTT_ranking = GOTT_ranking+4;
  }
  else if(GOTT==standings[4]){
    GOTT_ranking = GOTT_ranking+5;
  }
  else if(GOTT==standings[5]){
    GOTT_ranking = GOTT_ranking+6;
  }
  else if(GOTT==standings[6]){
    GOTT_ranking = GOTT_ranking+7;
  }
  else if(GOTT==standings[7]){
    GOTT_ranking = GOTT_ranking+8;
  }
  else if(GOTT==standings[8]){
    GOTT_ranking = GOTT_ranking+9;
  }
  else if(GOTT==standings[9]){
    GOTT_ranking = GOTT_ranking+10;
  }
  else if(GOTT==standings[10]){
    GOTT_ranking = GOTT_ranking+11;
  }
  else if(GOTT==standings[11]){
    GOTT_ranking = GOTT_ranking+12;
  }
  else if(GOTT==standings[12]){
    GOTT_ranking = GOTT_ranking+13;
  }
  else if (GOTT==standings[13]) {
    GOTT_ranking = GOTT_ranking+14;
  }
  else if(GOTT==standings[14]){
    GOTT_ranking = GOTT_ranking+15;
  }
  else if (GOTT==standings[15]) {
    GOTT_ranking = GOTT_ranking+16;
  }
  else if(GOTT==standings[16]){
    GOTT_ranking = GOTT_ranking+17;
  }
  else if(GOTT==standings[17]){
    GOTT_ranking = GOTT_ranking+18;
  }

  if(BRE==standings[0]){
    BRE_ranking = BRE_ranking++;
  }
  else if(BRE==standings[1]){
    BRE_ranking = BRE_ranking+2;
  }
  else if (BRE ==standings[2]) {
    BRE_ranking = BRE_ranking+3;
  }
  else if(BRE==standings[3]){
    BRE_ranking = BRE_ranking+4;
  }
  else if(BRE==standings[4]){
    BRE_ranking = BRE_ranking+5;
  }
  else if(BRE==standings[5]){
    BRE_ranking = BRE_ranking+6;
  }
  else if(BRE==standings[6]){
    BRE_ranking = BRE_ranking+7;
  }
  else if(BRE==standings[7]){
    BRE_ranking = BRE_ranking+8;
  }
  else if(BRE==standings[8]){
    BRE_ranking = BRE_ranking+9;
  }
  else if(BRE==standings[9]){
    BRE_ranking = BRE_ranking+10;
  }
  else if(BRE==standings[10]){
    BRE_ranking = BRE_ranking+11;
  }
  else if(BRE==standings[11]){
    BRE_ranking = BRE_ranking+12;
  }
  else if(BRE==standings[12]){
    BRE_ranking = BRE_ranking+13;
  }
  else if (BRE==standings[13]) {
    BRE_ranking = BRE_ranking+14;
  }
  else if(BRE==standings[14]){
    BRE_ranking = BRE_ranking+15;
  }
  else if (BRE==standings[15]) {
    BRE_ranking = BRE_ranking+16;
  }
  else if(BRE==standings[16]){
    BRE_ranking = BRE_ranking+17;
  }
  else if(BRE==standings[17]){
    BRE_ranking = BRE_ranking+18;
  }

  if(ROCK==standings[0]){
    ROCK_ranking = ROCK_ranking++;
  }
  else if(ROCK==standings[1]){
    ROCK_ranking = ROCK_ranking+2;
  }
  else if (ROCK ==standings[2]) {
    ROCK_ranking = ROCK_ranking+3;
  }
  else if(ROCK==standings[3]){
    ROCK_ranking = ROCK_ranking+4;
  }
  else if(ROCK==standings[4]){
    ROCK_ranking = ROCK_ranking+5;
  }
  else if(ROCK==standings[5]){
    ROCK_ranking = ROCK_ranking+6;
  }
  else if(ROCK==standings[6]){
    ROCK_ranking = ROCK_ranking+7;
  }
  else if(ROCK==standings[7]){
    ROCK_ranking = ROCK_ranking+8;
  }
  else if(ROCK==standings[8]){
    ROCK_ranking = ROCK_ranking+9;
  }
  else if(ROCK==standings[9]){
    ROCK_ranking = ROCK_ranking+10;
  }
  else if(ROCK==standings[10]){
    ROCK_ranking = ROCK_ranking+11;
  }
  else if(ROCK==standings[11]){
    ROCK_ranking = ROCK_ranking+12;
  }
  else if(ROCK==standings[12]){
    ROCK_ranking = ROCK_ranking+13;
  }
  else if (ROCK==standings[13]) {
    ROCK_ranking = ROCK_ranking+14;
  }
  else if(ROCK==standings[14]){
    ROCK_ranking = ROCK_ranking+15;
  }
  else if (ROCK==standings[15]) {
    ROCK_ranking = ROCK_ranking+16;
  }
  else if(ROCK==standings[16]){
    ROCK_ranking = ROCK_ranking+17;
  }
  else if(ROCK==standings[17]){
    ROCK_ranking = ROCK_ranking+18;
  }

  if(TIG==standings[0]){
    TIG_ranking = TIG_ranking++;
  }
  else if(TIG==standings[1]){
    TIG_ranking = TIG_ranking+2;
  }
  else if (TIG ==standings[2]) {
    TIG_ranking = TIG_ranking+3;
  }
  else if(TIG==standings[3]){
    TIG_ranking = TIG_ranking+4;
  }
  else if(TIG==standings[4]){
    TIG_ranking = TIG_ranking+5;
  }
  else if(TIG==standings[5]){
    TIG_ranking = TIG_ranking+6;
  }
  else if(TIG==standings[6]){
    TIG_ranking = TIG_ranking+7;
  }
  else if(TIG==standings[7]){
    TIG_ranking = TIG_ranking+8;
  }
  else if(TIG==standings[8]){
    TIG_ranking = TIG_ranking+9;
  }
  else if(TIG==standings[9]){
    TIG_ranking = TIG_ranking+10;
  }
  else if(TIG==standings[10]){
    TIG_ranking = TIG_ranking+11;
  }
  else if(TIG==standings[11]){
    TIG_ranking = TIG_ranking+12;
  }
  else if(TIG==standings[12]){
    TIG_ranking = TIG_ranking+13;
  }
  else if (TIG==standings[13]) {
    TIG_ranking = TIG_ranking+14;
  }
  else if(TIG==standings[14]){
    TIG_ranking = TIG_ranking+15;
  }
  else if (TIG==standings[15]) {
    TIG_ranking = TIG_ranking+16;
  }
  else if(TIG==standings[16]){
    TIG_ranking = TIG_ranking+17;
  }
  else if(TIG==standings[17]){
    TIG_ranking = TIG_ranking+18;
  }
};

void calc_relchance(){
  MUN_relchance = MUN_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  ALBA_relchance = ALBA_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  LUD_relchance = LUD_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  BAYR_relchance = BAYR_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  BONN_relchance = BONN_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  EWE_relchance = EWE_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  BRO_relchance = BRO_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  SKY_relchance = SKY_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  ULM_relchance = ULM_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  SOL_relchance = SOL_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  GIE_relchance = GIE_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  BRA_relchance = BRA_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  JENA_relchance = JENA_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  MITT_relchance = MITT_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  GOTT_relchance = GOTT_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  BRE_relchance = BRE_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  ROCK_relchance = ROCK_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
  TIG_relchance = TIG_ranking/(ALBA_ranking+LUD_ranking+BAYR_ranking+BONN_ranking+EWE_ranking+BRO_ranking+SKY_ranking+ULM_ranking+SOL_ranking+GIE_ranking+BRA_ranking+JENA_ranking+MITT_ranking+GOTT_ranking+BRE_ranking+ROCK_ranking+TIG_ranking);
}

void det_winner(){
  std::vector<float> end;
  end.push_back(MUN_relchance);
  end.push_back(ALBA_relchance);
  end.push_back(LUD_relchance);
  end.push_back(BAYR_relchance);
  end.push_back(BONN_relchance);
  end.push_back(EWE_relchance);
  end.push_back(BRO_relchance);
  end.push_back(SKY_relchance);
  end.push_back(ULM_relchance);
  end.push_back(SOL_relchance);
  end.push_back(GIE_relchance);
  end.push_back(BRA_relchance);
  end.push_back(JENA_relchance);
  end.push_back(MITT_relchance);
  end.push_back(GOTT_relchance);
  end.push_back(BRE_relchance);
  end.push_back(ROCK_relchance);
  end.push_back(TIG_relchance);
  std::sort(end.begin(), end.begin()+18);
  if(MUN_relchance==end[17]){
    MUN_winrate = MUN_winrate+1;
  }
  else if(ALBA_relchance==end[17]){
    ALBA_winrate = ALBA_winrate+1;
  }
  else if(LUD_relchance==end[17]){
    LUD_winrate = LUD_winrate+1;
  }
  else if(BAYR_relchance==end[17]){
    BAYR_winrate = BAYR_winrate+1;
  }
  else if(BONN_relchance==end[17]){
    BONN_winrate = BONN_winrate+1;
  }
  else if(EWE_relchance==end[17]){
    EWE_winrate = EWE_winrate+1;
  }
  else if(BRO_relchance==end[17]){
    BRO_winrate = BRO_winrate+1;
  }
  else if(SKY_relchance==end[17]){
    SKY_winrate = SKY_winrate+1;
  }
  else if(ULM_relchance==end[17]){
    ULM_winrate = ULM_winrate+1;
  }
  else if(SOL_relchance==end[17]){
    SOL_winrate = SOL_winrate+1;
  }
  else if(GIE_relchance==end[17]){
    GIE_winrate = GIE_winrate+1;
  }
  else if(BRA_relchance==end[17]){
    BRA_winrate = BRA_winrate+1;
  }
  else if(JENA_relchance==end[17]){
    JENA_winrate = JENA_winrate+1;
  }
  else if(MITT_relchance==end[17]){
    MITT_winrate = MITT_winrate+1;
  }
  else if(GOTT_relchance==end[17]){
    GOTT_winrate = GOTT_winrate+1;
  }
  else if(BRE_relchance==end[17]){
    BRE_winrate = BRE_winrate+1;
  }
  else if(ROCK_relchance==end[17]){
    ROCK_winrate = ROCK_winrate+1;
  }
  else if(TIG_relchance==end[17]){
    TIG_winrate = TIG_winrate+1;
  }
}
//losing team divided by winning team times the winnig margin + a certain score for winning/ minus for losing probably 4??
