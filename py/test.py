from random import choice
from random import randint
import random
num="1"
def phoneNo(operator,chooseType):
    a=random.choice((3,5,7,8,9))
    if a==3 or a==8:
        b=random.randint((0,9))
    elif a==5:
        b=random.choice((1,2,3,5,6,7,8,9,0))                         
    elif a==7:
        b=random.choice((1,2,3,5,6,7,8,0))
    elif a==9:
        b=random.choice((8,9))
    if operator=="四川移洞":
        c=random.choice((5,7,8,9))
    elif operator=="四川连通":
        c=random.choice((0,2,5,6,9))
    elif operator=="四川电兴":
        c=random.choice((3,7,9))
    else:
        print("没有该种营运商类型")
        
    if chooseType=="选取靓号":
        d=random.choice((6666666,8888888,9999999))
    elif chooseType=="普通选号":
        d=random.randint(1000000,9999999)
    else:
        print("没有该种选号类型")
    num=num+str(a)+str(b)+str(c)+str(d)
    return(num)

phoneNumber=phoneNo(operator="四川连通",chooseType="选取靓号")
if num=="19999999999":
    print("我要办理该手机号，号码为：19999999999")
else:
    print("该号码不是我想要的号码，我不办理")