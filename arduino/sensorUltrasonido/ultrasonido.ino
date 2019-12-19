const byte salida = 9;
const byte entrada = 8;

float distancia = 0;
float tiempo = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin ( 9600 );
  pinMode ( salida , OUTPUT );
  pinMode ( entrada, INPUT  ); 
}

void loop() {
  // put your main code here, to run repeatedly:  
  lecturaSensorUltrasonido();
}

void lecturaSensorUltrasonido(){  
  digitalWrite      ( salida , LOW  );
  delayMicroseconds ( 10 );
  digitalWrite      ( salida , HIGH );
  delayMicroseconds ( 10 );
  
  tiempo = pulseIn ( entrada , HIGH );
  distancia = 0.017 * tiempo;
  if ( distancia < 30 ){      
      /*
      Acciones a realizar si la distancia es menor a 30 cm
      */
    
  }  
}