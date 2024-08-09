---
template: article
title: SmartFit
summary: Web app to track trainig sessions and meals
date: 2022-01-19
authors: Alessio Blascovich, Daniele Stella, David Stanicel
tags: university, nodejs, smartfit
category: project
---
<a href="https://github.com/StellaDaniele/G12-software-engineering">GitHub repository</a>  

| Members                      |
| ---------------------------- |
| Daniele Stella (team leader) |
| Alessio Blascovich           |
| David Stanicel               |

### What is this?
This is a part of the last deliverable (<a href="https://github.com/StellaDaniele/Software-engineering/tree/main/D5">D5</a>) for the Software engineering course at UniTn.
The course consisted of one big group project, divided into six deliverables in total, that can be found in <a href="https://github.com/StellaDaniele/Software-engineering">this repository</a>.

### Goal
Develop the APIs to implement all the features identified in the D5, based on the other parts of the project.
The requirements for this part of the project were:

- Connect to at least one (external) API or DB
- Realize at least three different pages
- Develop some APIs
- Document and test some of the APIs developed

### What did we do?
We developed 13 APIs, fully documented. We tested them all and wrote four automatic testing scripts (supertest + tape). One of the scripts tests an API with all kinds of inputs.<br>
We realized a database with MongoDB and four different pages in total:

- Home - Daily summary
- Histories
- Trainer
- My diet and training schedules 

Since the focus was just on the APIs, and we had not studied web design (nor web development) formerly, we designed a really basic and rough UI, but it is enough to test the APIs developed.
