from pypresence import Presence
import time
with open('../_PROJECTNAME') as f:
    project_name = f.readlines()


RPC = Presence("872789835528671242")
RPC.connect()

RPC.update(
    state="Developing {}".format(project_name), 
    details="Python version of V8",
    start=1,
    large_image="v9",
    large_text="V9",
    buttons=[{
        "label":"Get V9",
        "url":""
    }]
)

while True:
    time.sleep(15)










main = tkinter.Tk()
main.title('V9')
main.iconbitmap('C:\\V9\\vm\\V9.ico')
main.geometry("300x300")
main.resizable(0, 0)
main.mainloop()