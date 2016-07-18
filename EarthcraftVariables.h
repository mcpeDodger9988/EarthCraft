// in EarthcraftVariables.h
//used in EarthcraftLayers.cpp
int blockIds[10] = {0,1,2,3,4,5,6,7,8,9};
int blockId1[6] = {1,4,1,1,4,1}; //layers 1-4
int blockId2[6] = {1,2,6,1,2,1}; //layers 5-15
int blockId3[5] = {1,2,6,2,1}; //Tx layers
//Block names/Ids
int air = blockIds[0];
int stone = blockIds[1];
int dirt = blockIds[2];
int cobblestone = blockIds[3];
int bedrock = blockIds[4];
int water = blockIds[5];
int coal = blockIds[6];
int grassBlock = blockIds[7];
int lava = blockIds[8];
int sand = blockIds[9];
int layerA[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int layer0[32] = {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
/*int layer1[32];
int layer2[32];
int layer3[32];
int layer4[32];*/
int layer5[32];
int layer6[32];
int layer7[32];
int layer8[32];
int layer9[32];
int layer10[32];
int layer11[32];
int layer12[32];
int layer13[32];
int layer14[32];
int layer15[32] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
//layerT are the layers that will form the top layers of the world in-game
//Currently this only forms hills (with a 1/2 rise-run relation) in-game, it will eventually form the Earth

int layerT[15][32] = {
  {0,0,0,0,0,0,0,0,0,0,0,0,2,2,7,7,7,7,2,2,0,0,0,0,0,0,0,0,0,0,0,0}, //row [0]
  {0,0,0,0,0,0,0,0,0,0,0,2,2,7,7,0,0,7,7,2,2,0,0,0,0,0,0,0,0,0,0,0}, //row [1]
  {0,0,0,0,0,0,0,0,0,0,2,2,7,7,0,0,0,0,7,7,2,2,0,0,0,0,0,0,0,0,0,0}, //row [2]
  {0,0,0,0,0,0,0,0,0,2,2,7,7,0,0,0,0,0,0,7,7,2,2,0,0,0,0,0,0,0,0,0}, //row [3]
  {0,0,0,0,0,0,0,0,2,2,7,7,0,0,0,0,0,0,0,7,7,2,2,0,0,0,0,0,0,0,0}, //row [4]
  {0,0,0,0,0,0,0,2,2,7,7,0,0,0,0,0,0,0,0,0,0,7,7,2,2,0,0,0,0,0,0,0}, //row [5]
  {0,0,0,0,0,0,2,2,7,7,0,0,0,0,0,0,0,0,0,0,0,0,7,7,2,2,0,0,0,0,0,0}, //row [6]
  {0,0,0,0,0,2,2,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,2,2,0,0,0,0,0}, //row [7]
  {0,0,0,0,2,2,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,2,2,0,0,0,0}, //row [8]
  {0,0,0,2,2,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,2,2,0,0,0}, //row [9]
  {0,0,2,2,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,2,2,0,0}, //row [10]
  {0,2,2,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,2,2,0}, //row [11]
  {2,2,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,2,2}, //row [12]
  {2,7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,2}, //row [13]
  {7,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7} //row [14]
}; //int layerT

//variables used to hold and assign the random blockId generated
int randN;
int rand1; //layer1
int rand2; //layer2
int rand3; //layer3
int rand4; //layer4
int rand5; //layer5
int rand6; //layer6
int rand7; //layer7
int rand8; //layer8
int rand9; //layer9
int rand10; //layer10
int rand11; //layer11
int rand12; //layer12
int rand13; //layer13
int rand14; //layer14
int rand1T0;
int rand2T0;
int rand1T1;
int rand2T1;
int rand1T2;
int rand2T2;
int rand1T3;
int rand2T3;
int rand1T4;
int rand2T4;
int rand1T5;
int rand2T5;
int rand1T6;
int rand2T6;
int rand1T7;
int rand2T7;
//filler variables for for() loops
int A;
int B;
int C;
//not used in EarthcraftLayers.cpp
int spawn[2];
int randSpwnX;
int randSpwnY;
