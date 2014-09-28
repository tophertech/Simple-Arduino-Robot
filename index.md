---
layout: page
title: Hello World!
tagline: Welcome to my first blog made with Jekyll Bootstrap!
---

{% include JB/setup %}

## My personal blog

Hello it is in here that I hope to make post things of personal interest to me however I will also post into my github projects and their milestones it is my hope that I will be able to look back and keep track of my personal and profesional development.
    
## My Posts

<ul class="posts">
  {% for post in site.posts %}
    <li><span>{{ post.date | date_to_string }}</span> &raquo; <a href="{{ BASE_PATH }}{{ post.url }}">{{ post.title }}</a></li>
  {% endfor %}
</ul>

## Extras
<ul>
    <li><a href="{{site.baseurl}}/projects/">Projects Page</a></li>
    <li><a href="{{site.baseurl}}/about/">About</a></li>
</ul>
