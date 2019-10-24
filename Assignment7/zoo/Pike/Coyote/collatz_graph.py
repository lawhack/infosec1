#!/usr/bin/python

import matplotlib
matplotlib.use('Agg')
import matplotlib.pyplot as plt

m=10000
x=[]
y=[]

for i in range(1,m):
    c=0
    n=i
    while(n!=1):
        if n%2==1:
            n=3*n+1
        else:
            n=n/2
        c+=1
    x.append(i)
    y.append(c)
    
plt.plot(x,y,'k.')
plt.savefig('plot.png')
