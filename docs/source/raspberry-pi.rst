Raspberry Pi
============

.. _flashing:

OS Flashing
------------

Raspberry Pi released an imaging tool which simplifies the process of flashing an OS into 
a micro SD card. If you do not have a micro SD card reader then use an adapter.

.. tabs::

   .. tab:: Windows
      
      #. Download RPi Imager

         Go to the following `link <https://www.raspberrypi.com/software/>`_

      #. Run Installer

         Click on downloaded exe file

   .. tab:: Linux

      #. Download RPi Imager

         Go to the following `link <https://www.raspberrypi.com/software/>`_

      # Run Installer

         Run the following inside of the terminal

         .. code-block:: Bash

            cd ~/Downloads/
            sudo apt install ./imager_<version>_amd64.deb

   
.. _installation:

Installing Tools
----------------

At STARX we use use a variety of tools this inclues ROS, odrive, SPI, GPIO, Git, and more
Use the following lines and follow the installation instructions for the tool that you will be using so 
that the raspberry pi is ready to be used to test and work on anything related to STARX.

.. toctree::
   ROS
   SPI
   GPIO
   Git
