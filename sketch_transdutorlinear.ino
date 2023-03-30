const float transdutorlinear = 0; // Pino de entrada do Transdutor Linear de Posição 
float valor, mm, a, b;

void setup() {
Serial.begin(9600);
}

void loop() {
valor = analogRead(transdutorlinear);

Serial.print("Valor do Transdutor Linear:    ");
Serial.println (valor);
//a = 
//b = 
//mm = a*valor + b;
//Serial.println(mm);

delay(1000);
}
