const int PIN_UMIDADE = A0;      
onst int LED_TRANSFERENCIA = 11;

const int NIVEL_CONSUMO_MIN = 350; 
const int NIVEL_CISTERNA_MIN = 100; 
const int NIVEL_CAIXA_MAX = 800;   


void setup() {
  pinMode(LED_IRRIGACAO, OUTPUT);
  pinMode(LED_TRANSFERENCIA, OUTPUT);
  pinMode(PIN_CHUVA, INPUT_PULLUP); 
  Serial.begin(9600); 
}


void loop() {
  int umidade_solo = analogRead(PIN_UMIDADE);
  int nivel_caixa = analogRead(PIN_CAIXA_DAGUA);
  int nivel_cisterna = analogRead(PIN_CISTERNA);
  
  bool vai_chover = (digitalRead(PIN_CHUVA) == LOW); 
  
  Serial.print("Caixa(A2): "); Serial.print(nivel_caixa);
  Serial.print(" | Cisterna(A1): "); Serial.print(nivel_cisterna);
  Serial.print(" | Umidade(A0): "); Serial.print(umidade_solo);
  Serial.print(" | Chuva(D7): "); Serial.print(vai_chover ? "SIM" : "NAO");

  

  if (nivel_caixa < NIVEL_CONSUMO_MIN && nivel_cisterna > NIVEL_CISTERNA_MIN) {
    digitalWrite(LED_TRANSFERENCIA, HIGH); 
  } else {
    digitalWrite(LED_TRANSFERENCIA, LOW);
  }
  
  

  if (nivel_caixa > NIVEL_CONSUMO_MIN) {
    
    bool solo_seco = (umidade_solo < UMIDADE_MINIMA);
    bool pode_irrigar = (solo_seco && !vai_chover); 

    if (pode_irrigar) {
 
      digitalWrite(LED_IRRIGACAO, HIGH); 
      Serial.println(" | ACAO: IRRIGACAO LIGADA!");
    } else {
     
      digitalWrite(LED_IRRIGACAO, LOW);
      Serial.println(" | ACAO: Irrigacao Bloqueada (Umidade ou Chuva).");
    }

  } else {
   
    digitalWrite(LED_IRRIGACAO, LOW); 
    Serial.println(" | ACAO: BLOQUEIO DE SEGURANCA (Caixa Critica).");
  }

  delay(1000); 
}const int PIN_CISTERNA = A1;     
const int PIN_CAIXA_DAGUA = A2;  
const int PIN_CHUVA = 7;         

const int LED_IRRIGACAO = 10;    
const int LED_TRANSFERENCIA = 11;

const int NIVEL_CONSUMO_MIN = 350; 
const int NIVEL_CISTERNA_MIN = 100; 
const int NIVEL_CAIXA_MAX = 800;   


void setup() {
  pinMode(LED_IRRIGACAO, OUTPUT);
  pinMode(LED_TRANSFERENCIA, OUTPUT);
  pinMode(PIN_CHUVA, INPUT_PULLUP); 
  Serial.begin(9600); 
}


void loop() {
  int umidade_solo = analogRead(PIN_UMIDADE);
  int nivel_caixa = analogRead(PIN_CAIXA_DAGUA);
  int nivel_cisterna = analogRead(PIN_CISTERNA);
  
  bool vai_chover = (digitalRead(PIN_CHUVA) == LOW); 
  
  Serial.print("Caixa(A2): "); Serial.print(nivel_caixa);
  Serial.print(" | Cisterna(A1): "); Serial.print(nivel_cisterna);
  Serial.print(" | Umidade(A0): "); Serial.print(umidade_solo);
  Serial.print(" | Chuva(D7): "); Serial.print(vai_chover ? "SIM" : "NAO");

  

  if (nivel_caixa < NIVEL_CONSUMO_MIN && nivel_cisterna > NIVEL_CISTERNA_MIN) {
    digitalWrite(LED_TRANSFERENCIA, HIGH); 
  } else {
    digitalWrite(LED_TRANSFERENCIA, LOW);
  }
  
  

  if (nivel_caixa > NIVEL_CONSUMO_MIN) {
    
    bool solo_seco = (umidade_solo < UMIDADE_MINIMA);
    bool pode_irrigar = (solo_seco && !vai_chover); 

    if (pode_irrigar) {
 
      digitalWrite(LED_IRRIGACAO, HIGH); 
      Serial.println(" | ACAO: IRRIGACAO LIGADA!");
    } else {
     
      digitalWrite(LED_IRRIGACAO, LOW);
      Serial.println(" | ACAO: Irrigacao Bloqueada (Umidade ou Chuva).");
    }

  } else {
   
    digitalWrite(LED_IRRIGACAO, LOW); 
    Serial.println(" | ACAO: BLOQUEIO DE SEGURANCA (Caixa Critica).");
  }

  delay(1000); 
}
