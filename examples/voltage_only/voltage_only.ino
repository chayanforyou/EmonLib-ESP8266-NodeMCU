// EmonLibrary examples openenergymonitor.org, Licence GNU GPL V3
#define emonTxV3                       // (Optional Configuration) ESP8266 supply voltage 3.3V
                                       // Note: Must remove this if you're using Arduino-based boards.

#include "EmonLib.h"                   // Include Emon Library
EnergyMonitor emon1;                   // Create an instance

void setup()
{
  Serial.begin(9600);

  emon1.voltage(A0, 234.26, 1.7);      // Voltage: input pin, calibration, phase_shift
}

void loop()
{
  double Vrms = emon1.calcVrms(20, 2000);  // Calculate Irms only. No.of half wavelengths (crossings), time-out

  Serial.print("Voltage: ");
  Serial.println(Vrms);                    // Vrms
}
