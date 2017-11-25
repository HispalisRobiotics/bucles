/*
 *  Hispalis RobIOTics Arduino Trainer 
 *  
 *  Programa: while01
 *  
 *  Proposito:
 *  
 *      Ejemplo de bucle while
 *      
 *  Version: ArduinoTrainer v1.0 / Hercules v1.0
 *  Revision:Octubre 2017 
 *  
 *  Proposito:
 *  
 *      1)    Imprime los numeros del 0 al 9
 *            
 *      2)    Elementos de un bucle       
 *              - Expresion de inicio
 *              - Expresion de control
 *              - Expresion de incremento
 *              - Cuerpo del bucle ( instruccion simple o bloque )
 *              
 *              - En un bucle while se encuentran deslocalizados
 *              
 *              - Antes del bucle hay que inicializar la variable o expresion de control
 *              - Al entrar en el bucle, se evalua la expresion de control
 *                   * Si es cierta, se ejecuta el cuerpo del bucle
 *                   * En caso contrario, se sale del bucle
 *            
 *      3)    Los bucles while son mas apropiados cuando la condicion que finaliza el bucle ocurre inesperadamente            
 *            Pero son similares, y se puede codificar indistamente uno u otro
 *            
 *      4)    Ejercicio: Codificar los programas for02.ino a for04.ino con bucles while()
 *      
 *      
 *      *)    Conceptos de Programacion:  Bucle while()
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
  int contador;
  
  contador = 0 ;
  while( contador < 10 )
  {  
    sprintf( buffer , "Contador = %2d\n" ,contador );
    Serial.print (buffer);    
     contador++;
  }

  //  Bucle infinito  
  while( 1 )
    ;
  
}

  
  

