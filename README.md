
                                _      _ _
                               | |    (_) |
      ___ _ __ ___   ___  _ __ | |     _| |__
     / _ \ '_ ` _ \ / _ \| '_ \| |    | | '_ \
    |  __/ | | | | | (_) | | | | |____| | |_) |
     \___|_| |_| |_|\___/|_| |_|______|_|_.__/
      

## Arduino Energy Monitoring Library - Compatible with ESP8266 NodeMCU

![](https://github.com/chayanforyou/EmonLib-ESP8266-NodeMCU/blob/main/schematic.png)

Designed for use with emonTx: http://openenergymonitor.org/emon/Modules

Download to Arduino IDE 'libraries' folder. Restart of IDE required.

Git Clone and Git Pull can be easily used to keep the library up-to-date and manage changes.
JeeLabs has done a good post on the topic: http://jeelabs.org/2011/12/29/out-with-the-old-in-with-the-new/



Update: 14th June 2021: Support Added for ESP8266 (NodeMCU) by chayan.

To enable this feature on Arduino Due, add the following statement to setup() function in main sketch:
analogReadResolution(ADC_BITS); This will set ADC_BITS to 12 (Arduino Due), EmonLib will otherwise default to 10 analogReadResolution(ADC_BITS);.
See blog post on using Arduino Due as energy monitor: http://boredomprojects.net/index.php/projects/home-energy-monitor
