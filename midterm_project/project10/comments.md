---
title: "Review comments on Project 10"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Investigating bitcoin is a good use for time series techniques. It is a strength and a weakness that the project follows approaches different from those developed in class. Generally, if you differ from an approach taught there is some burden to explain why your approach is better. 

**Points for consideration**:

1. Avoid `auto.arima()` unless you can justify using it. How does it deal with numerical issues of the type we've seen are common? Is there just one "best" model or are there other considerations?

2. You don't explain what auto.arima does, or Ljung-Box. ADF is a reasonable way to test for a unit root model (that is what it does) but not as evidence for or against other types of non-stationarity.

3. Volatility variation (e.g., class notes, Ch 3, Section 4) may be more important than seasonality.

4. Please write out models, developing mathematical notation that enables you to be precise about your models and hypotheses.




