// Porta de controle de rotação dos mortores 
const int StepX = 2;
const int StepY = 3;
const int StepW = 4;
const int StepZ = 5;

// Porta de controle da direção de rotação dos mortores 
const int DirX = 5;
const int DirY = 6;
const int DirW = 7;
const int DirZ = 8;

void setup() {
//Função pinMode define os pinos declarados como pinos que irão receber voltagem
  pinMode(StepX, OUTPUT);
  pinMode(DirX,  OUTPUT);
  pinMode(StepY, OUTPUT);
  pinMode(DirY,  OUTPUT);
  pinMode(StepZ, OUTPUT);
  pinMode(DirZ,  OUTPUT);
  pinMode(StepW, OUTPUT);
  pinMode(DirW,  OUTPUT);
}

void loop() {
// digitalWrite coloca energia nos pinos declarados
// HIGH indica giro no sentido horário e LOW no sentido antihorário  
 digitalWrite(DirX, HIGH); 
 digitalWrite(DirY, HIGH);
 digitalWrite(DirW, HIGH);
 digitalWrite(DirZ, HIGH);
 

 for(int x = 0; x<200; x++) { // loop para rotação de meia circunferência 
  digitalWrite(StepX,HIGH);
  delayMicroseconds(500);
  digitalWrite(StepX,LOW); 
  delayMicroseconds(500);
 }
delay(1000); // delay por 1 segundo 

for(int x = 0; x<200; x++) { // loop para rotação de meia circunferência 
  digitalWrite(StepY,HIGH);
  delayMicroseconds(500);
  digitalWrite(StepY,LOW); 
  delayMicroseconds(500);
 }
delay(1000); // delay por 1 segundo 

for(int x = 0; x<200; x++) { // loop para rotação de meia circunferência 
  digitalWrite(StepW,HIGH);
  delayMicroseconds(500);
  digitalWrite(StepW,LOW); 
  delayMicroseconds(500);
 }
delay(1000);// delay por 1 segundo 

for(int x = 0; x<200; x++) { // loop para rotação de meia circunferência 
  digitalWrite(StepZ,HIGH);
  delayMicroseconds(500);
  digitalWrite(StepZ,LOW); 
  delayMicroseconds(500);
 }
delay(1000);// delay por 1 segundo 

}
