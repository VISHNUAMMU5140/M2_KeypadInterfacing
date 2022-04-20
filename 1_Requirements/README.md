## ABSTRACT

### This is basically a project made with ATMEGA 328P microcontroller being the the brain of the whole system.
### The Controller takes the input from one of its ports and a particular timing have been assigned so that the pin goes high and low accordingly.
### The pin on the other end is connected with 5 LEDs in parallel to each other with the resistance in between to prevent the damage.
### As the pin goes high , the LEDs turn on and after a particular duration they turn off all at once. 
### This program continues without end, as embedded programs are designed in such a way.

## SWOT ANALYSIS
### STRENGTH
* Implementation with ATMEGA328P microcontroller.
* Specially made for a particular case.
* Parallel connection have been given, even if one LED fails, the rest will save the circuit.

### WEAKNESS
* All LEDs are operated within the same time period.
* No replacement can be done if the port is damaged.

### OPPORTUNITIES
* In future, the program can be extended with major functionalities and many sensors integrated to provide feedback.

### THREATs
* Only one port is made operational.Hence, No replacement can be done if the port is damaged.

## ESSENTIAL W'S AND H
* WHAT- It is microcontroller based system to make 5 LEDs blink at equal interval.
* WHERE- It is implemented in SIMULIDE and being coded in Visual Studio Code.
* WHO- This is basic program which any beginner could use to understand the embedded program.
* WHEN- It can be implemented any time .
* HOW-By loading the firmware of ATMEGA328P in SIMULIDE as a .elf file that is generated from Visual Studio Code Execution.

## HIGH LEVEL REQUIREMENTS
* HLR_1 - ATMEGA328P MICROCONTROLLER
* HLR_2 - VISUAL STUDIO CODE 
* HLR_3 - CROSS COMPILATION

## LOW LEVEL REQUIREMENTS
* LLR_1 - UNIT TESTING
* LLR_2 - ASSIGNING TIMER 
* LLR_3 - MULTIFILE PROGRAMMING
* LLR_2
