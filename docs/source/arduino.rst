Arduino
=======

We use Arduino as our starting point to learn to use new components given Arduino's 
simplicity and easy use. 

.. _installation:

Installation
------------

Follow the following instruction to install Arduino to your laptop / PC

.. tabs::

   .. tab:: Windows
   
      #. Download Arduino
               
         Go to the following `link <https://www.arduino.cc/en/software`_

      #. Run Installer

         Click the .exe file

   .. tab:: Linux

      #. Install

         Run the following inside of the terminal

         .. code-block:: Bash

            sudo apt update
            sudo apt install arduino

         OR

         .. code-block:: Bash

            sudo snap install arduino


.. _tutorial:

To-Do
-----
The following are excersives to show that you have the basic amount of experience with Arduino to use
it to test different sensors that could be implement into the exoskeleton suit. 



The answers tab is provided to so that you can see a working version of the to-do's. 


.. tabs::

   .. tab:: To-Do

      [ ] Turn on the onboard LED
      [ ] Blink the onboard LED on and off with a 2 second period and a 50% duty cycle


   .. tab:: Hints
      
      - Duty Cycle = percentage of time the LED if HIGH
      - Period = time required for LED to repeat from start to finish

   .. tab:: Answers

      This is not the only solution to this exercise as programming is very open ended.

      .. code-block:: C++

         void setup(){

         }

         void loop(){

         }


This is just a test to checkout this code

.. raw:: html
   <details>
   <summary><a>big code</a></summary>

.. code-block:: python
   lots_of_code = "this text block"

.. raw:: html
   </details>
