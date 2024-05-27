from collections import defaultdict, OrderedDict

def main():
    text =  "Text mining has become an essential capability of the modern enterprise. With unstructured data growing exponentially, companies are leveraging text mining to make these large quantities of unstructured data accessible and useful. In doing so, they have been able to generate deeper business insight and make smarter business decisions for a number of use cases. Text mining uses techniques such as text classification, entity extraction (i.e., named entity recognition) and sentiment analysis to extract useful information and knowledge hidden in text content. In the business world, this enables companies to reveal insights, patterns and trends from large volumes of unstructured data. In fact, this ability to push aside all non-relevant material and provide valuable answers has led to its rapid adoption throughout the enterprise. The following 10 text mining examples demonstrate how practical application of unstructured data management techniques can impact not only your organizational processes, but also your competitive standing." 

    word_count = defaultdict(lambda: 0)
    for word in text.split():
        word_count[word] += 1
    print(word_count)
    for i, v in OrderedDict(sorted(word_count.items(), key=lambda t: t[1], reverse=True)).items():
        print(i, v)

if __name__ == "__main__":
    main()