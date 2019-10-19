#!/usr/bin/python

from timeit import default_timer as timer
END="_end" # special string representing the end of a word

# adds a word to our trie
def add_word(root,word):
    current=root
    for c in word:
        if c in current:
            current=current[c]
        else:
            current[c]={}
            current=current[c]
    if END in current:
        current[END]+=1
    else:
        current[END]=1

# finds a word in our trie
def find_word(root,word):
    current=root
    for c in word:
        if c in current:
            current=current[c]
        else:
            return 0
    if END in current:
        return current[END]
    else:
        return 0

def read_book():
    import re
    f=open("74-0.txt",'r')
    text=f.read()
    f.close()
    words= re.split("[^a-zA-Z0-9]",text)
    return [w.lower() for w in words if len(w)>2 ]

start=timer()
words=read_book()
end=timer()
time=end-start
print("Reading the book took %s seconds." % time)

root={}
for word in words:
    add_word(root,word)
    
query="tom"
start=timer()
result=find_word(root,query)
end=timer()
time=end-start
print("Searching the book took %s seconds." % time)
print("The result of the search was: %d" % result)
