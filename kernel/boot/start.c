
void main();

// entry.S needs one stack per CPU.
__attribute__ ((aligned (16))) char stack0[4096 * 1];

// entry.S jumps here in machine mode on stack0.
void
start()
{
  // set M Previous Privilege mode to Supervisor, for mret.
  

  // set M Exception Program Counter to main, for mret.
  // requires gcc -mcmodel=medany
  main();


}

// ask each hart to generate timer interrupts.
