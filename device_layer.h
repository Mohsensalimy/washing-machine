//
// File name : device_layer.h
// Description : Header file for device drivers
 
//
 
#include "hardwarelayer.map.h"
#include "stdint.h" 

//  program to demonstrate  Buzzer class

class Buzzer {
	 // Access specifier 
	private:
		
  public:
    


    // 
	  // here we are turning buzzer off
    Buzzer()  //declaring buzzer 
	{
			buzzeroff();   // indicating to turn the buzzer off
		
	}
		
		// behaviors
		
		//  // demonstrating the different behaviors to turn the buzzer off and on. for example here turns on the motor functions
		void Buzzer_on(); 
		
		//here the buzzer is showing turn off behviour 
		void Buzzer_off(); 
		
};



//////////////////////////////////////////////////////////////////////////////////////////////////////////
//  program to demonstrate  Motor class

class Motor
	
{
		// Access specifier 

	private: 
				
  public:
    
    
	
    Motor() // declaration of the motor
	
	{ 
		setMotorotation(CLOCKWISE); // here we are setting motor rotation to clockwise
			
		setmotoroff(); // here we are turning motor off
		
	
	   }
		
		// behaviors 
		 // demonstrating the different behaviors to turn the motor off and on. for example here turns on the motor functions
		void Motor_on(); 
		 // here the motor is showing turn off behviour 
		void Motor_off(); 
		 // we are trying to act the rotation of the motor by using uint8_t
		void setRotation(uint8_t); 
		
};
////////////////////////////////////////////////////////////////////////////////////////
// program to demonstrate  Door class where the switch button is pressed
	class SEVENSEG 
		
	{
			// Access specifier 
	private:
	public:
		SEVENSEG() 
	{
		display('7');
	//set the sevensegment display
			void seven_seg_set();
	//indicating to display any integer number on the sevenseg
	    void display(int);
	
	
};
	
	


///////////////////////////////////////////////////////

//  program to demonstrate  Door class where the switch button is pressed 
class Door 
	
{	
	// Access specifier 
	
  public:
		//behaviors
	// here the door has two functionality it can open and close 

					 
		// here the door is demonstrating opening behviour 
    	void door_open();      
		//here the door is demonstrating closing  behviour 	 
			void door_close();
	
		 
};
