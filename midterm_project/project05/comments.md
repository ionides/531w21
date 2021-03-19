---
title: "Review comments on Project 5"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: A clearly motivated analysis. A model is developed. The stated goal is to look for periodicity, which may be hard to find in financial markets if the "efficient market hypothesis" is anywhere close to holding.


**Points for consideration**:

1. For financial data such as this, it is often appropriate to difference first, perhaps after taking logs. Bond yields are different from stock prices, but with some similarities.

2. The fitted AR(1) is very close to a random walk model.

3. Patterns in conditional variance (i.e., dependence without correlation) can be more important than marginal non-normality for financial data (see Question 3.11 in the notes).

4. The conclusion: "has a trend and is well explained by a [stationary] AR(1) model" is somewhat contradictory.

5. US Treasury bond yields are structurally related to expectations of inflation and interest rates - they could be relevant covariate time series.

6. The plot labeled "Spectrum estimated via AR model" looks to be just a raw, unsmoothed periodogram.

7. Reference labels (here, numbers) should be used within the text to signpost where the reference is used.



