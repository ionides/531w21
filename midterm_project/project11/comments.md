---
title: "Review comments on Project 11"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: A carefully written report looking at bike share data from several perspectives.


**Points for consideration**:

1. How does the ADF test account for seasonality?

2. HP filtering could use a very high penalty constant, lambda, for daily data. Then it would look much more like the `loess` method it is compared with. 

3. ADF is a reasonable way to test a unit root model (that is what it does) but it is not necessarily a good approach for investigating other types of non-stationarity.

4. Reference labels (e.g., numberered references) should be used within the text to signpost where the reference is used.

5. Are there any references to put your question in the context of existing knowledge about bike share schemes?







