Lab 1: Caesar Cipher
George Vele

The project was implemented as a site in html/javascript, using bootstrap elements, with the purpose of applying the Caesar cypher.

In cryptography, a Caesar cipher, also known as Caesar's cipher, the shift cipher, Caesar's code or Caesar shift, is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of 3, D would be replaced by A, E would become B, and so on. The method is named after Julius Caesar, who used it in his private correspondence

In our case the plaintext is defined as the letters a – z with the space character and the chipertext is defined as the letters from A – Z with the space character.

The program displays a textbox on the screen where the user can input the ciphertext/plaintext, an input for the key and 2 butons bellow it with the “Crypt” and “Decrypt” respectavely.

The program detects what kind of imput you give it and activates/deactivates the corresponding button. If you type in plaintext, the “Crypt” button is activated and clickable, while the other one is deactivated, and if you type in chypertext, the reverse is true.

The validation mechanism is done in the “validateInputs” function, where the text is checked against the plaintext and cyphertext to determine the one used. If there are errors like the text not being present, there are characters that are not in the plaintext/ciphertext or there are mixed characters a warnig message will appear between the inputs and the buttons and the buttons will be locked. If there are no inconsistancies in the inputs, then the buttons will behave normally and there will be no warning message.
