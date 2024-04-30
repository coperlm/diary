Just find phi of n

Modulus non-mutuality attack:

if we have many n, which may have the same factor

we cannot depart any n by using factordb or yafu, but we can have a try weather they have the same factor

----

related questions:

[羊城杯 2021]Bigrsa

brief: 

```
c = pow(m, e, n1)
c = pow(c, e, n2)
```

core code:

```
p = gcd( n1 , n2 )
assert n1 % p == 0 ; assert n2 % p == 0
q1 = n1 // p ; q2 = n2 // p
```

