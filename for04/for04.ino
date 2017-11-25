/*
 *  Hispalis RobIOTics Arduino Trainer 
 *  
 *  Programa: for04
 *  
 *  Proposito:
 *  
 *      Ejemplo de bucle for
 *      
 *  Version: ArduinoTrainer v1.0 / Hercules v1.0
 *  Revision:Octubre 2017 
 *  
 *  Proposito:
 *  
 *      1)    Imprime la tabla de multiplicar
 *            
 *      *)    Conceptos de Programacion:  Bucle for :     Anidacion de bucles
 *                                        Bucle infinito
 *                                        printf , sprintf
 *                                        ASCII
 *                                        Preprocesador
 *                                        
 *  
 *  Notas:
 *  
 *      a)  Arduino no soporta la funcion printf
 *      b)  Se puede simular de la forma siguiente
 *            
 *            - Creamos un array de char - buffer - lo suficientemente grande - 80 caracteres -
 *            - Usamos sprintf para llenar el array buffer
 *            - sprintf emplea el mismo formato que printf, con un parametro adicional
 *            - Imprimimos el buffer con Serial.print()
 *            
 *      c)  La alternativa simple es usar Serial.print() o Serial.println()      
 *            
 */



//  Constantes de preprocesador  Bucle infinito  
#define FOREVER  for(;;)
    


void setup() 
{
  Serial.begin( 115200 );

  //  Esto inicia burdamente el Monitor Serie
  Serial.println();
  Serial.println();
  Serial.println("**********************");
}




void loop() 
{
  char buffer[80];
  int columna , fila;
  
  
  for( fila = 1 ; fila < 15  ; fila++ )
  {  
    for( columna = 1 ; columna < 12  ; columna++ )
    {
      sprintf( buffer , "%4d" , columna * fila );
      Serial.print (buffer);    
    }
    Serial.println();
  }

  FOREVER;
}

  
  

