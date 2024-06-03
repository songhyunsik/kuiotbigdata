import numpy as np
import pandas as pd
import statsmodels as sm
from sklearn.linear_model import LogisticRegression

def main():
    folder = "/home/songhyunsik/kuiotbigdata/Python_Programming_Class/python/pythonData/data/"
    loan_data : pd.DataFrame = pd.read_csv(folder + "loan_data.csv.gz")
    print(loan_data.head())
    print(loan_data.info())

    predictors = ['payment_inc_ratio', 'purpose_', 'home_', 'emp_len_', 'borrower_score']
    outcome = 'outcome'
    X = pd.get_dummies(loan_data[predictors], prefix='', prefix_sep='', drop_first=True)
    y = loan_data[outcome]
    print(X.head())
    print(y.head())

    logit_reg = LogisticRegression(penalty='l2', C=1e42, solver='liblinear')
    logit_reg.fit(X, y)
    print(f"intercept: {logit_reg.intercept_}")
    print(f"classes: {logit_reg.classes_}")
    for i, c in enumerate(logit_reg.coef_[0]):
        print(f"{X.columns[i]}: {c}")

    new_loan = X.loc[146:146, :]
    print(new_loan)
    result =  logit_reg.predict(new_loan)
    print(f"result: {result}")

    # logistic predicted values

    pred = pd.DataFrame(logit_reg.predict_log_proba(X), columns = logit_reg.classes_)
    print(f"log probability : \n {pred.describe()}")
    pred = pd.DataFrame(logit_reg.predict_proba(X), columns = logit_reg.classes_)
    print(f"probability : \n {pred.describe()}")
    print(pred.head())

if __name__ == "__main__":
    main()