def lists(s):
    l=[]
    if type(s)==list:
        for i in s:
            if type(i)==int:
                l.append(i)
    return l
