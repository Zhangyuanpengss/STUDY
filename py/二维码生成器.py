from MyQR import myqr
#quesion=input("如需动态二维码，请扣1.如需静态二维码，请扣2")
#if quesion==1:
#    b=".gif"
#else:
#    b=".png"
word=input("请输入你想转变的内容：")
my_picture=input("请输入背景图片的路径：")
wenjianname=input("请输入二维码文件名：")
my_version=int(input("请输入你想要的尺寸"))
color=input("你是否需要彩色二维码？")
while True:
    if color=="是":
        a=True
        break
    elif color=="否":
        a=False
        break
    else:
        print("请输入是或否")
myqr.run(words=word,save_name=wenjianname,picture=my_picture,colorized=a,version=my_version)
print("文件已保存至该程序目录下")