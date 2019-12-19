//Constantes para la lectura de los ejes X y Y
//pines de entrada Analogico
const byte ejeX = A0, ejeY = A1;

//variables para la lectura de los datos
//obtenidas de los pines A0 (ejeX)  y A1 (Eje Y)
int tx = 0, ty = 0;


void setup() {
  Serial.begin(9600);
  pinMode ( ejeX , INPUT);
  pinMode ( ejeY , INPUT);
}

void loop() {
  readJoystickData();
}



void readJoystickData(){
  tx = analogRead(ejeX);
  ty = analogRead(ejeY);
  //Opcional para ver en el monitor serial lo datos de entrada en el eje X o Y
  //Serial.print("Eje X: "+ String(tx) + " , Eje Y: " + String(ty)+ "\n");

  if( (tx >= 484 && tx<= 512)  && ( ty >= 484 &&   ty <= 512)){
    joystickWithoutActions();
  }


  if( tx >= 800 ){
     ejeXTopActions();
  }else if(tx <= 400){
    ejeXBottomActions();
  }
  

  if( ty >= 800){
    ejeYTopActions();
  } else if (ty <= 400 ) {
    ejeYBottomActions();
  }

}
void joystickWithoutActions (){
  /*
  todas las acciones cuando el joystick no hace nada
  por ejemplo apagar leds, motores etc
  */
}

void ejeXTopActions(){
  /* todas las acciones que requieran hacer cuando el eje x superior
  esta seleccionado ( palanca en sentido superior del eje x  :))
  por ejemplo digitalWrite(ledTopx, LOW);
  */
}

void ejeXBottomActions(){
    /* todas las acciones que requieran hacer cuando el eje x inferior
    esta seleccionado ( palanca en sentido inferior del eje x :)
    por ejemplo digitalWrite(ledBottomx, LOW);
  */
}
 void ejeYTopActions(){
   /* todas las acciones que requieran hacer cuando el eje y  superior
      esta seleccionado ( palanca en sentido superior del eje Y :))
      por ejemplo digitalWrite(ledTopY, LOW);
  */
 }

 void ejeYBottomActions(){
  /* todas las acciones que requieran hacer cuando el eje y  inferior
      esta seleccionado ( palanca en sentido inferior del eje Y :) )
      por ejemplo digitalWrite(ledBottomY, LOW);
  */

 }