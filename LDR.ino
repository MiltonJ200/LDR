void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//9600 es una velocidad en boudios
}

void loop() {
  // put your main code here, to run repeatedly:
  int valorSensor = analogRead(A0);//cuando usamos analogRead
                                   //se invoca al ADC (10 bits)

  Serial.print("Valor del LDR = ");//print() escribe
  Serial.print(valorSensor);       //println() escribe y le
                                   //agrega un enter al final

//  Serial.print("Voltaje = ");
// Serial.println(voltaje);

  delay(100);//espera de 100ms,
             //para estabilidad de las lecturas
}
