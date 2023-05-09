import customtkinter
import threading
import time
customtkinter.set_appearance_mode("dark")  # Modes: "System" (standard), "Dark", "Light"
customtkinter.set_default_color_theme("blue")  # Themes: "blue" (standard), "green", "dark-blue"

app = customtkinter.CTk()
app.geometry("650x700")
app.title("Electronics DC load")



 
global mode
mode = ["set" ,"CC", "CV","CR", "CW"]

global i
i = 0

global x 
x = 103241354





def cc ( ):
    i = 1
    power = customtkinter.CTkLabel(app, text = str(x) + " W     " + " Mode: "+ mode[i], fg_color="transparent",font=("",35),
                                 text_color = "white" )
    power.grid(row=2, column=0,padx =5,pady=5)
    
    return i

def cv ( ):
    i = 2
    power = customtkinter.CTkLabel(app, text = str(x) + " W     " + " Mode: "+ mode[i], fg_color="transparent",font=("",35),
                                 text_color = "white" )
    power.grid(row=2, column=0,padx =5,pady=5)
    return i

def cr ( ):
    i = 3
    power = customtkinter.CTkLabel(app, text = str(x) + " W     " + " Mode: "+ mode[i], fg_color="transparent",font=("",35),
                                 text_color = "white" )
    power.grid(row=2, column=0,padx =5,pady=5)
    return i

def cw ( ):
    i = 4
    power = customtkinter.CTkLabel(app, text = str(x) + " W     " + " Mode: "+ mode[i], fg_color="transparent",font=("",35),
                                 text_color = "white" )
    power.grid(row=2, column=0,padx =5,pady=5)
    return i








#Labels ----------------------------------------------------------------

voltage = customtkinter.CTkLabel(app, text = str(x)+" V", fg_color="transparent",font=("",100),
                                 text_color = "green")
voltage.grid(row=0, column=0)



current = customtkinter.CTkLabel(app, text = str(x) + " A", fg_color="transparent",font=("",100),
                               text_color = "yellow")
current.grid(row=1, column=0,padx =5,pady=5)


power = customtkinter.CTkLabel(app, text = str(x) + " W     " + " Mode: "+ mode[i], fg_color="transparent",font=("",35),
                                 text_color = "white" )
power.grid(row=2, column=0,padx =5,pady=5)

#Buttons ----------------------------------------------------------------

cc = customtkinter.CTkButton(app, text="CC " ,font = ("",30),command= cc)
cc.place(relx = 0.25 , rely = 0.41 )


cv = customtkinter.CTkButton(app, text="CV ", font = ("",30),command= cv)
cv.place(relx = 0.01 , rely = 0.41 )

cr = customtkinter.CTkButton(app, text="CR ", font = ("",30),command= cr)
cr.place(relx = (0.01 + 0.24 + 0.24 ), rely = 0.41 )

cw = customtkinter.CTkButton(app, text="CW ", font = ("",30),command= cw)
cw.place(relx = (0.01 + 0.24 + 0.24 +0.24), rely = 0.41 )


#Threads ----------------------------------------------------------------


# threading.Thread(target= hi).start()

app.mainloop()
