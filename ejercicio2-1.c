#include <REG51.H>


unsigned volatile xdata tabla _at_ 0x1000;//declaracion de una variable en memoria externa que se encuentra en
																					//la rom de la tabla ASCII

 char  *puntero;
	int x,ascii;
	void delay(int);
	
void main(void ){

	
	puntero= &tabla;
for (x=0;x<10;x++)

	
	
{

	if(*puntero=='a'){P1=0x77;}//letra A 0111 0111
	if(*puntero=='b'){P1=0xfc;}//letra b 1111 1011
	if(*puntero=='c'){P1=0x39;}//letra C 0011 1001
	if(*puntero=='d'){P1=0x5e;}//letra d 0101 1110 
	if(*puntero=='e'){P1=0x79;}//letra e 0110 1001
	if(*puntero=='f'){P1=0x71;}//letra F 0111 0001
	if(*puntero=='g'){P1=0x6f;}//letra g 0110 1111
	if(*puntero=='h'){P1=0x76;}//letra h 0111 0110
	if(*puntero=='i'){P1=0x06;}//letra i 0000 0110
	if(*puntero=='j'){P1=0x0e;}//letra j 0000 1110

	delay(3);
		puntero++;
}}
x=0;

void delay(int valor){//funcion de retardo
   
	int i , j ;
	for(i=0 ;i<valor ;i++)
	for(j=0 ;j<1275 ;j++);
}