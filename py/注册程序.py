












































































































































































































































import datetime
import time
print("loading...")
time.sleep(3)
print(f"{datetime.datetime.now()}\nWelcome to visit our website\n请先注册一个账号")
#定义检测函数
def detect(x):
    errorlist=["1","2","3","4","5","6","7","8","9","0","!","$","%","^","&","*","(",")","-","+","=","~",";",":","@","<",">",",","?","/"]
    for i in f"{x}":
        if i in errorlist:
            return True
        else:
            return False
#用户名设置模块
data={}
while True:
    test=input("请输入用户名:")
    if detect(test)==True:
        print("该用户名不符合规定，请重新输入！")
    elif detect(test)==False:
        username=test
        break
#密码设置模块
f=0
while f==0:
    while True:
        a=input("请设置密码:")
        if len(str(a))==6:
            if a==input("请确认您的密码:"):
                print("已注册完毕，请先登录")
                data[username]=a
                f=1
                break    
            else:
                print("密码不一致，请重新设置")
            break
                
        else:
            print("您的密码应为6位，请重新设置密码。")        
#登录模块
count=1
all=3
while True:
    name=input("请输入您的用户名:")
    if name in data:
        while count<=3:
            if data[name]==input("请输入你的密码:"):
                print("Victory!")
                break
            elif all==0:
                print("输入错误次数过多请等待10秒后重新输入")
            else:
                all=all-1
                print(f"请重新输入！,您还有{all}次机会")
                count=count+1
        break        
    else:
        print("用户不存在")