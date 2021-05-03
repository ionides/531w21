---
title: "Review comments on Project 6"
author: "STATS/DATASCI 531, Winter 2021"
output:
  html_document:
    theme: flatly
    toc: yes
---

**Strengths**: Financial models are assessed on a unique and high-interest financial event: the recent history of the GameStop stock price.

**Points for consideration**:

1. Motivation was somewhat unclear: explain the relationship between studying volatility and understanding the GameStop story.

2. All the models used are stationary, and the WallStreetBets intervention is perhaps temporary, so there might be room for improvement on these business-as-usual financial models. For example, perhaps volatility might increase with increasing stock price when there is a deliberate manipulation of the stock price, and this is the opposite of the usual pattern.

3. Make sure the text explains what is going on: usually, we only show code and computer output that is part of the story explained in the text.

4. In Conclusions: compare the maximized log likelihood, not the median log likelihood from a stochastic search.

5. If some parameters are weakly identified, that is not necessarily a problem for the model: it just means that those parts of the model are not so important. 

6. The maximized likelihood may be more relevant than the median when doing multiple searches to numerically maximize the likelihood.

7. The assumptions and purposes of the different models could be discussed more, to put the maximized likelihoods and other results in context. 

8. In the global search, the convergence points form two clusters, most clearly seen in log likelihood vs $\mu_h$. 

9. Show returns with a mean, and don't also show demeaned returns which is visually almost identical.

10. Some sections are short on motivation: if you have a section on filtering simulated data, you should explain briefly why it is there, and what you learn from it.



