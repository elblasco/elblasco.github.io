---
template: article
title: Manga Check
summary: Android application for reading/tracking manga
date: 2023-09-11
authors: Alessio Blascovich, Jan Tomassi
tags: university, android, mangacheck
category: project
---
<a href="https://github.com/elblasco/LPSMT">GitHub repository</a>  

| Members            |
| -------------------|
| Alessio Blascovich |
| Jan Tomassi        |

### What is this?
Part of the last deliverable for the Mobile Programming course at UniTN.
The project consisted in three deliverables, the first two were a presentation and a wireframe of our application; while the last one was the realisation of the application itself.

### Goal
Develop an application compliant as much as possible with all the specifications and the design showed in the previous deliverables.
During the development of the application we had to improve the general UX experience of the application and its accessibility. 

### What did we do?
We developed an application capable of rendering in real time mangas stored in `cbz` files and keep them sorted in a virtual library.
Moreover, the application permits to keep a complete list of mangas read by the user cataloguing them into three different categories:

1. _Reading_
2. _Planning_
3. _Completed_

and display a short description of the manga selected. 
_Mangacheck_ has been developed using a modern technological stack, we wrote the application in _Kotlin_ using as base _Android base API_ the level 28.
The pieces of information to create the comic bio are fetched by the <a href="https://anilist.gitbook.io/anilist-apiv2-docs">Anilist API</a> based on _GraphQL_.
