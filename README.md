# *RSA Factoring Challenge*

`Algorithm`   `Scripting`

By: Julien Barbier

![incrypted image](https://brightlineit.com/wp-content/uploads/2017/12/171218-Encryption-Key-Management.jpg)

## *Resources:*

Read or watch:

- [RSA](https://en.wikipedia.org/wiki/RSA_(cryptosystem%29)
- [How does HTTPS provide security?](https://stackoverflow.com/questions/3968095/how-does-https-provide-security)
- [Prime Factorization](https://privacycanada.net/mathematics/prime-factorization/)
- [Why RSA?](https://jaredatandi.hashnode.dev/rsa-factoring)

## *General:*
The language used in this project is :
The standard Ubuntu 20.04 LTS is mandatory for compiling this project.

## *Tasks:*

#### [0. Factorize all the things!]()

Factorize as many numbers as possible into a product of two smaller numbers.

- Usage: `factors <file>`
   - where `<file>` is a file containing natural numbers to factor.
   - One number per line
   - You can assume that all lines will be valid natural numbers greater than 1
   - You can assume that there will be no empy line, and no space before and after the valid number
   - The file will always end with a new line
- Output format: `n=p*q`
   - one factorization per line
   - `p` and `q` don’t have to be prime numbers
   - See example
- You can work on the numbers of the file in the order of your choice
- Your program should run without any dependency: You will not be able to install anything on the machine we will run your program on
- Time limit: Your program will be killed after 5 seconds if it hasn’t finish
- Push all your scripts, source code, etc… to your repository
   - we will only run your executable `factors`
 
  
#### [1. RSA Factoring Challenge]()

RSA Laboratories states that: for each RSA number `n`, there exist prime numbers `p` and `q` such that

`n` = `p` × `q`. The problem is to find these two primes, given only `n`.

This task is the same as task 0, except:

- `p` and `q` are always prime numbers
- There is only one number in the files
How far can you go in less than 5 seconds?

- Read: [RSA Factoring Challenge](https://en.wikipedia.org/wiki/RSA_Factoring_Challenge)




-----------------
## Author 📑:

[MOHAMMED CHAKIR](https://github.com/mohammedchakir)
