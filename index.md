---
layout: page
title: Robots are fun!
tagline: Documenting our progress!
---

{% include JB/setup %}

## Arduino Robot in Porgress
    
## Updates

<ul class="posts">
  {% for post in site.posts %}
    <li><span>{{ post.date | date_to_string }}</span> &raquo; <a href="{{ BASE_PATH }}{{ post.url }}">{{ post.title }}</a></li>
  {% endfor %}
</ul>

## Extras
<ul>
    <li><a href="https://github.com/egonzalezjr555/Simple-Arduino-Robot">Source Code</a></li>
    <li><a href="{{BASE_PATH}}/about/">About</a></li>
</ul>
