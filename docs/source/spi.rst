SPI
===

.. _preview:

What is SPI?
-----------

SPI is a communication protocol, it allows devices to communicate in a full-duplex mode 
(bidirectional) with one device serving as the Master and every other device as the Slave.

.. _installation:

Installation
------------

.. tabs::
   
   .. tab:: Python
  
      #. To install we need to update the package information for all available sources

         .. code-block:: Bash
   
            sudo apt update

      #. This will install pip3 and the python3 developer tools

         .. code-block:: Bash

            sudo apt install python3-pip python3-dev

      #. Instal spidev library

         .. code-block:: Bash   
      
            pip3 install spidev

      #. Test that the install was succesful by running the following on the terminal

         .. code-block:: Bash

            python3

            >>> import spidev


   .. tab:: C++

      For C++ we have aquired our own libraries

      #. Clone our SPI library repository

         .. code-block:: Bash

            git clone https://gitlab.eecs.umich.edu/starx/spi.git

      #. Import the library into the C++ file

         .. code-block:: Bash

            #include "library-name.h"

.. _enable:

Enabling
--------

To enable SPI mode 

.. tabs::
   
   .. tab:: Raspbian
      
      #. Use Raspi-config
         
         .. code-block:: Bash

            sudo raspi-config

      #. Select Interfacing Options

      #. Select SPI

      #. Activate <Select>

      #. Activate <Yes>

      #. Reboot

   .. tab:: Ubuntu

      #. no idea
