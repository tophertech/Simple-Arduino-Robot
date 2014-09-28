---
layout: page
title: Arduino Robot
tagline: We are creating an Arduino Robot and we want to document this!
---

{% include JB/setup %}
    
## Robot Updates

<ul class="posts">
  {% for post in site.posts %}
    <li><span>{{ post.date | date_to_string }}</span> &raquo; <a href="{{site.baseurl}}{{ post.url }}">{{ post.title }}</a></li>
  {% endfor %}
</ul>

## Information
<ul>
    <li><a href="{{site.baseurl}}/about/">About</a></li>
    <li><a herf ="https://github.com/egonzalezjr555/Simple-Arduino-Robot">Source Code of Project</a>
</ul>
