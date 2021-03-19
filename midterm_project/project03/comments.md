---
title: "Review comments on Project 3"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Clearly written, with a good balance of text (math, statistical results and background), figures and tables.

**Points for consideration**:

1. Question behind analysis is unclear. Seasonality is clearcut; trend is not a focual issue.

2. No covariates are considered, but maybe regression with ARMA errors could help to investigate trend.

3. Also, ARMA(2,3) can fit periodic behavior (e.g., the AR(2) model in notes chapter 4)

4. Sign error in the use of polyroot() for AR.

5. Periodicity of 9 is an error, it should be 12. Look at ACF of data, not residuals after fitting a model, to see this.




