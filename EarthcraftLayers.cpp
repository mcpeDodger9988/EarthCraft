/*
All for() end brackets are labeled with the for() function that they end
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "EarthcraftVariables.h"
using namespace std;

int main() {
  srand(time(0));
  
  //generates layers 1-14
  for(A=0;A<=31;A++) { //sets the layers 1-14
    rand1 = 1+(rand()%6);
    rand2 = 1+(rand()%6);
    rand3 = 1+(rand()%6);
    rand4 = 1+(rand()%6);
    rand5 = 1+(rand()%6);
    rand6 = 1+(rand()%6);
    rand7 = 1+(rand()%6);
    rand8 = 1+(rand()%6);
    rand9 = 1+(rand()%6);
    rand10 = 1+(rand()%6);
    rand11 = 1+(rand()%6);
    rand12 = 1+(rand()%6);
    rand13 = 1+(rand()%6);
    rand14 = 1+(rand()%6);
    rand1 -= 1;
    rand2 -= 1;
    rand3 -= 1;
    rand4 -= 1;
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
    layer1[A] = blockId1[rand1];
    layer2[A] = blockId1[rand2];
    layer3[A] = blockId1[rand3];
    layer4[A] = blockId1[rand4];
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
    rand1T0 = 1+(rand()%5);
    rand2T0 = 1+(rand()%5);
    rand1T0 -= 1;
    rand2T0 -= 1;
    layerT[0][A] = blockId3[rand1T0];
    layerT[0][A+20] = blockId3[rand2T0];
  } //for rand1T0,rand2T0
  for(A=0;A<=10;A++) {
    rand1T1 = 1+(rand()%5);
    rand2T1 = 1+(rand()%5);
    rand1T1 -= 1;
    rand2T1 -= 1;
    layerT[1][A] = blockId3[rand1T1];
    layerT[1][A+21] = blockId3[rand2T1];
  } //for rand1T1,rand2T1
  for(A=0;A<=9;A++) {
    rand1T2 = 1+(rand()%5);
    rand2T2 = 1+(rand()%5);
    rand1T2 -= 1;
    rand2T2 -= 1;
    layerT[2][A] = blockId3[rand1T2];
    layerT[2][A+22] = blockId3[rand2T2];
  } //for rand1T2,rand2T2
  for(A=0;A<=8;A++) {
    rand1T3 = 1+(rand()%5);
    rand2T3 = 1+(rand()%5);
    rand1T3 -= 1;
    rand2T3 -= 1;
    layerT[3][A] = blockId3[rand1T3];
    layerT[3][A+23] = blockId3[rand2T3];
  } //for rand1T3,rand2T3
  for(A=0;A<=7;A++) {
    rand1T4 = 1+(rand()%5);
    rand2T4 = 1+(rand()%5);
    rand1T4 -= 1;
    rand2T4 -= 1;
    layerT[4][A] = blockId3[rand1T4];
    layerT[4][A+24] = blockId3[rand2T4];
  } //for rand1T4,rand2T4
  for(A=0;A<=6;A++) {
    rand1T5 = 1+(rand()%5);
    rand2T5 = 1+(rand()%5);
    rand1T5 -= 1;
    rand2T5 -= 1;
    layerT[5][A] = blockId3[rand1T5];
    layerT[5][A+25] = blockId3[rand2T5];
  } //for rand1T5,rand2T5
  for(A=0;A<=5;A++) {
    rand1T6 = 1+(rand()%5);
    rand2T6 = 1+(rand()%5);
    rand1T6 -= 1;
    rand2T6 -= 1;
    layerT[6][A] = blockId3[rand1T6];
    layerT[6][A+26] = blockId3[rand2T6];
  } //for rand1T6,rand2T6
  for(A=0;A<=4;A++) {
    rand1T7 = 1+(rand()%5);
    rand2T7 = 1+(rand()%5);
    rand1T7 -= 1;
    rand2T7 -= 1;
    layerT[7][A] = blockId3[rand1T7];
    layerT[7][A+27] = blockId3[rand2T7];
  } //for rand1T7,rand2T7
  
  //outputs layers (this is only for testing)
  for(C=0;C<=1;C++) {
  for(B=0;B<=31;B++) {
    cout<<layerA[B];
  } //for cout layerA:0
  cout<<" "<<endl;
  } //for cout layerA:1
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layerT[7][B];
  } //for cout layerT7
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layerT[6][B];
  } //for cout layerT6
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layerT[5][B];
  } //for cout layerT5
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layerT[4][B];
  } //for cout layerT4
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layerT[3][B];
  } //for cout layerT3
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layerT[2][B];
  } //for cout layerT2
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layerT[1][B];
  } //for cout layerT1
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layerT[0][B];
  } //for cout layerT0
  cout<<" "<<endl;
  
  for(B=0;B<=31;B++) {
    cout<<layer5[B];
  } //for cout layer5
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layer4[B];
  } //for cout layer4
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layer3[B];
  } //for cout layer3
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layer2[B];
  } //for cout layer2
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layer1[B];
  } //for cout layer1
  cout<<" "<<endl;
  for(B=0;B<=31;B++) {
    cout<<layer0[B];
  } //for cout layer0
  
} //int main
