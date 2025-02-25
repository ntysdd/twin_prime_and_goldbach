The Goldbach Conjecture studies how an even number can be expressed as the sum of two primes.

The Twin Prime Conjecture investigates the distribution of twin primes (pairs of primes that differ by 2).

These two problems share an intrinsic connection. They both involve arithmetic operations (addition and subtraction) on primes—objects typically associated with multiplication—and explore their distribution patterns.  


For a fixed even number \( N \), how many ways can it be expressed as the sum of two primes?  

How many twin primes are there below a fixed number \( N \)?  


The answers to these questions are inherently linked (see the figure below, where the horizontal axis represents \( N \), the vertical axis represents counts, red denotes Goldbach partitions, and blue denotes twin primes).  

![relation_1](https://github.com/ntysdd/twin_prime_and_goldbach/blob/master/output.png)

The prime factors of an even number \( N \) significantly influence its Goldbach partition count.

For example, consider splitting \( N \) into \( p + q \): If \( N \) is a multiple of 3, then as long as \( p \) is not a multiple of 3, \( q = N - p \) will also not be a multiple of 3. This reduces the "difficulty" of both \( p \) and \( q \) being primes.  

If \( N \) has a prime factor \( p \) (where \( p > 2 \)), the estimated number of Goldbach partitions for \( N \) must be adjusted by a factor of \( \frac{p-1}{p-2} \).  

After accounting for these factors (i.e., dividing the count by \( \frac{p-1}{p-2} \) for each prime factor \( p \)), the result is as follows:  


![relation_2](https://github.com/ntysdd/twin_prime_and_goldbach/blob/master/output2.png)
