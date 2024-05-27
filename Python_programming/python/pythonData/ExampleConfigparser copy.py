import logging

folder = "/home/songhyunsik/Python_Programming/python/pythonData/"
def main():
    logger = logging.getLogger("myapp")
    hdlr = logging.FileHandler(folder + "myapp.log")
    formatter = logging.Formatter()
    

if __name__== "__main__":
    main()