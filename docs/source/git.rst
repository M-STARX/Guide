Git
===

Git is a widely used tool for version control.

.. image:: assets/commit_meme.png
   :width: 500
   :align: center

Installation
------------

Follow the following instruction to install Git on your latptop / PC


.. tabs::
   
   .. tab:: Linux

      #. Install git

         .. code-block:: Bash

            $ sudo apt install git -y

Usage
-----

The followings are the most common git commands.

Clone
~~~~~

This command creates a local copy of the repository, you will usually only run this commnad once.

.. code-block:: Bash
   
   $ git clone <repo_link>
      
   Example: $ git clone https://gitlab.eecs.umich.edu/starx/guide.git

Status
~~~~~~

This command will output the current branch and highlight the files that have been added, deleted, or modified.

.. code-block:: Bash
   
   $ git status

Pull
~~~~

This command updates the local repository with the latest version of the online respository.

.. code-block:: Bash
   
   $ git pull

Add
~~~

This command allows the user to add files into the stage phase (ready to be commited).

.. code-block:: Bash
   
   $ git add
   
Commit
~~~~~~

This command create a commit locally with the specified message otherwise it uses an automated message, think of it as a screenshot of the current state of the respository.

.. code-block:: Bash
   
   $ git commit -m "message goes in here keep the quotations"
   
Push
~~~~

This command pushes all the local commit to the online respository, it will request your username and password (or auth token).

.. code-block:: Bash
   
   $ git push


.. .. raw:: HTML

   <details>
   <summary><a>big code</a></summary>

.. .. code-block:: Bash
    
   lots_of_code = "this text block"

.. .. raw:: HTML

   </details>

