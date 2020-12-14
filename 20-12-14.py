####def print_file1(path):
####    f=open(path,'r')
####    for i in f:
####        print(i,end='')
####    f.close()
####def print_file(path):
####    f=open(path,'r')
####    print(f.read())
####    f.close()
####import os
####def make_story1():
####    if os.path.isfile('story.txt'):
####        print("File has exists")
####    else:
####        f=open('story.txt','w')
####        f.write("Mary had a little lamb,")
####        f.write('and then she had some more.')
####def addtion():
####    f=open("story.txt",'r+')
####    tmp=f.read()
####    tmp='    title'+'\n'+tmp
####    f.seek(0)
####    f.write(tmp)
####def ad():
####    f=open("20-12-14.py",'r+')
####    temp=''
####    for tmp in f:
####        temp+='#'+tmp
####    f.close()
####    t=open("20-12-14.py",'w')
####    t.write(temp)
###asdfasdf
##sdafasdf sf
#saf asf 
class Person:
    def __init__(self):
        self.name=''
        self.age= 0
    def display(self):
        print("Person('%s',%d)"%(self.name,self.age))
    def __str__(self):
        return "Person('%s',%d)" % (self.name,self.age)
    def __repr__(self):
        return str(self)
    def set_age(self,age):
        if 0<age<=150:
            self.age=age
