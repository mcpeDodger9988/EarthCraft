/*
All for() end brackets are labeled with the for() function that they end. randa and randb are commented next to where their functions would be called once the functions are made

If anyone can simplify this code then please post a pulse and I will see how the changes you suggest will work in the code

If the changes you have suggested work great then I will be giving you credit for it
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "EarthcraftVariables.h"
#include "LayersArray.h"
#include "EarthcraftFunctions.h"
using namespace std;

void printSpace();

int main() {
  srand(time(0));
  //generates layer 0 in array layers
  for(A=0;A<=31;A++) {
    for(B=0;B<=31;B++) {
      layers[0][A][B] = 4;
    } //for layer0 generation:column
  } //for layer0 generation:row
  //generates layers 1-4 in array layers
  for(A=1;A<=4;A++) {
    for(B=0;B<=31;B++) {
      for(C=0;C<=31;C++) {
        randN = 1+(rand()%6);//randa
        randN -= 1;
        layers[A][B][C] = blockId1[randN];
      } //for layer1-4 generation:Z
    } //for layer1-4 generation:X
  } //for layer1-4 generation:Y
  
  //generates layers 5-14
  for(A=0;A<=31;A++) {
    rand5 = 1+(rand()%6); //randa
    rand6 = 1+(rand()%6); //randa
    rand7 = 1+(rand()%6); //randa
    rand8 = 1+(rand()%6); //randa
    rand9 = 1+(rand()%6); //randa
    rand10 = 1+(rand()%6); //randa
    rand11 = 1+(rand()%6); //randa
    rand12 = 1+(rand()%6); //randa
    rand13 = 1+(rand()%6); //randa
    rand14 = 1+(rand()%6); //randa
    rand5 -= 1;
    rand6 -= 1;
    rand7 -= 1;
    rand8 -= 1;
    rand9 -= 1;
    rand10 -= 1;
    rand11 -= 1;
    rand12 -= 1;
    rand13 -= 1;
    rand14 -= 1;
    layer5[A] = blockId2[rand5];
    layer6[A] = blockId2[rand6];
    layer7[A] = blockId2[rand7];
    layer8[A] = blockId2[rand8];
    layer9[A] = blockId2[rand9];
    layer10[A] = blockId2[rand10];
    layer11[A] = blockId2[rand11];
    layer12[A] = blockId2[rand12];
    layer13[A] = blockId2[rand13];
    layer14[A] = blockId2[rand14];
  } //for setting layers 1-14
  
  //generating tiles for certain spots in the top 8 layers
  for(A=0;A<=11;A++) {
    rand1T0 = 1+(rand()%5); //randb
    rand2T0 = 1+(rand()%5); //randb
    rand1T0 -= 1;
    rand2T0 -= 1;
    layerT[0][A] = blockId3[rand1T0];
    layerT[0][A+20] = blockId3[rand2T0];
  } //for rand1T0,rand2T0
  for(A=0;A<=10;A++) {
    rand1T1 = 1+(rand()%5); //randb
    rand2T1 = 1+(rand()%5); //randb
    rand1T1 -= 1;
    rand2T1 -= 1;
    layerT[1][A] = blockId3[rand1T1];
    layerT[1][A+21] = blockId3[rand2T1];
  } //for rand1T1,rand2T1
  for(A=0;A<=9;A++) {
    rand1T2 = 1+(rand()%5); //randb
    rand2T2 = 1+(rand()%5); //randb
    rand1T2 -= 1;
    rand2T2 -= 1;
    layerT[2][A] = blockId3[rand1T2];
    layerT[2][A+22] = blockId3[rand2T2];
  } //for rand1T2,rand2T2
  for(A=0;A<=8;A++) {
    rand1T3 = 1+(rand()%5); //randb
    rand2T3 = 1+(rand()%5); //randb
    rand1T3 -= 1;
    rand2T3 -= 1;
    layerT[3][A] = blockId3[rand1T3];
    layerT[3][A+23] = blockId3[rand2T3];
  } //for rand1T3,rand2T3
  for(A=0;A<=7;A++) {
    rand1T4 = 1+(rand()%5); //randb
    rand2T4 = 1+(rand()%5); //randb
    rand1T4 -= 1;
    rand2T4 -= 1;
    layerT[4][A] = blockId3[rand1T4];
    layerT[4][A+24] = blockId3[rand2T4];
  } //for rand1T4,rand2T4
  for(A=0;A<=6;A++) {
    rand1T5 = 1+(rand()%5); //randb
    rand2T5 = 1+(rand()%5); //randb
    rand1T5 -= 1;
    rand2T5 -= 1;
    layerT[5][A] = blockId3[rand1T5];
    layerT[5][A+25] = blockId3[rand2T5];
  } //for rand1T5,rand2T5
  for(A=0;A<=5;A++) {
    rand1T6 = 1+(rand()%5); //randb
    rand2T6 = 1+(rand()%5); //randb
    rand1T6 -= 1;
    rand2T6 -= 1;
    layerT[6][A] = blockId3[rand1T6];
    layerT[6][A+26] = blockId3[rand2T6];
  } //for rand1T6,rand2T6
  for(A=0;A<=4;A++) {
    rand1T7 = 1+(rand()%5); //randb
    rand2T7 = 1+(rand()%5); //randb
    rand1T7 -= 1;
    rand2T7 -= 1;
    layerT[7][A] = blockId3[rand1T7];
    layerT[7][A+27] = blockId3[rand2T7];
  } //for rand1T7,rand2T7
  
  //outputs layers (this is only for testing)
  for(C=0;C<=1;C++) {
  for(B=0;B<=31;B++) {
    cout<<layerA[B];
  } //for cout layerA:C=0
  printSpace();
  } //for cout layerA:C=1
  for(B=0;B<=31;B++) {
    cout<<layerT[7][B];
  } //for cout layerT7
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layerT[6][B];
  } //for cout layerT6
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layerT[5][B];
  } //for cout layerT5
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layerT[4][B];
  } //for cout layerT4
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layerT[3][B];
  } //for cout layerT3
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layerT[2][B];
  } //for cout layerT2
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layerT[1][B];
  } //for cout layerT1
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layerT[0][B];
  } //for cout layerT0
  printSpace();
  /*for(B=0;B<=31;B++) {
    cout<<layers[15][0][B];
  } //for cout layer15
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[14][0][B];
  } //for cout layer14
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[13][0][B];
  } //for cout layer13
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[12][0][B];
  } //for cout layer12
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[11][0][B];
  } //for cout layer11
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[10][0][B];
  } //for cout layer10
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[9][0][B];
  } //for cout layer9
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[8][0][B];
  } //for cout layer8
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[7][0][B];
  } //for cout layer7
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[6][0][B];
  } //for cout layer6
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[5][0][B];
  } //for cout layer5
  printSpace();*/
  for(B=0;B<=31;B++) {
    cout<<layers[4][0][B];
  } //for cout layer4
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[3][0][B];
  } //for cout layer3
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[2][0][B];
  } //for cout layer2
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[1][0][B];
  } //for cout layer1
  printSpace();
  for(B=0;B<=31;B++) {
    cout<<layers[0][0][B];
  } //for cout layer0
  
} //int main
void printSpace(){
  cout<<" "<<endl;
}
