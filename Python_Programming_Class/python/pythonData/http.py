import urllib.request

url = "http://stoage.googleapls.com/patents/grant_full_text/2014/ipg140107.zip"

print("Start Download")
frame, header = urllib.request.urlretrieve(url, "ipg140107")
def main():
    pass
    

if __name__== "__main__":
    main()