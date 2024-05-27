import csv

def main():
    line_counter = 0
    data_header = []
    customer_list = []
    filename= "/home/songhyunsik/Python_Programming//python/pythonData/customers.csv"
    with open(filename, "r") as f:
        reader = csv.reader(f, delimiter=",", quotechar="*", quoting=csv)

if __name__ == "__main__":
    main()