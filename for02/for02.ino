/*
 *  Hispalis RobIOTics Arduino Trainer 
 *  
 *  Programa: for02
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
 *      1)    Imprime los numeros del 0 al 9
 *      2)    Calcula el total
 *            
 *      *)    Conceptos de Programacion:  Bucle for:    Inicializacion multiple
 *                                        Bucle infinito
 *                                        printf , sprintf
 *                                        ASCII
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
  int contador , total;
  
  
  for( contador=0 , total=0 ; contador < 10 ; contador++ )
  {  
    total += contador;                                      // O bien contador = contador + total;
    sprintf( buffer , "Contador = %2d \t Total : %3d \n " , contador , total );
    Serial.print (buffer);    
  }

  //  Bucle infinito  
  for(;;)
    ;
  
}

  
  

