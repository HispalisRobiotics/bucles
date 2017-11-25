/*
 *  Hispalis RobIOTics Arduino Trainer 
 *  
 *  Programa: for03
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
 *      1)    Imprime una tabla de caracteres ASCII
 *      
 *            
 *      *)    Conceptos de Programacion:  Bucle for
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
 *            
 *      d)  Este ejemplo se revisita en for05.ino      
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
  int codigo_ascii;
  
  
  for( codigo_ascii=1 ; codigo_ascii < 256 ; codigo_ascii++ )
  {  
    sprintf( buffer , "Codigo = %3d --> %c\t \n" , codigo_ascii, codigo_ascii );
    Serial.print (buffer);    
  }

  //  Bucle infinito  
  for(;;)
    ;
  
}

  
  

