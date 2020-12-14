def zhushi(path):
    import os
    os.chdir(r"C:\Users\1\Desktop\python")
    f=open(path,'r+')
    temp=''
    for tmp in f:
        temp+='#'+tmp
    f.seek(0)
    f.write(temp)
    f.close()

    
