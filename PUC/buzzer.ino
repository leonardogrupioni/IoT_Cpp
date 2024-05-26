int chavePin = 7; // Atribui o pino 7 a variável chavePin
int buzzerPin = 10; //Atribui o pino 10 a variável buzzerPin
int estadochave = 0;//Variável responsável por armazenar o estado da chave (ligado/deligado)
int count = 0;
int A = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzerPin , OUTPUT); // buzzerPin (pino 8) definido como saída
  pinMode (chavePin , INPUT); // chavePin (pino 10) definido como entrada
  TCCR1A = 0;
  TCCR1B = 0;
  TCNT1 = 0;
  OCR1A= (0x3D09)/75;
  TCCR1B|= (1<< WGM12)|(1<<CS10)|(1<< CS12);
  TIMSK1|= (1<< OCIE1A); 
}

void loop()
{
  estadochave = digitalRead (chavePin); //Armazena o valor digital de chavePin em estadochave

  if ( estadochave == HIGH ) { //Se estadochave for igual a nível alto (HIGH)
    digitalWrite(buzzerPin , HIGH); //Define buzzerPin como HIGH, ligando o buzzer
    //count++;
    //Período em que o buzzer fica ligado
     //Serial.println("Contador:");
     //Serial.println(count);
     //delay(150);
     }
  else { //Senão (se estadochave for igual a nível baixo)
    digitalWrite (buzzerPin , LOW ); //Define buzzerPin como LOW, mantendo o buzzer desligado
  	//delay(100);//Período em que o buzzer fica desligado
    
  }
}

ISR(TIMER1_COMPA_vect)
{
 if ( estadochave == HIGH  && A !=1)
 {
   count++;
   Serial.println("Contador:");
   Serial.println(count);
   A = 1;
 }
 if ( estadochave == LOW && A !=0)
 {
   A = 0 ;
 }

}